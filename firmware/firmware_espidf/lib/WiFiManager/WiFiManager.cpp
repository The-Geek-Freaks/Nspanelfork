#include <WiFiManager.hpp>
#include <esp_event.h>
#include <esp_log.h>
#include <esp_netif.h>
#include <string>

// Helper
#define min(a, b) ((a) < (b) ? (a) : (b))

void WiFiManager::start_client(std::string *ssid, std::string *psk, std::string *hostname) {
  WiFiManager::_connected = false;
  WiFiManager::_ip_info.ip.addr = 0;

  esp_netif_init();
  esp_netif_create_default_wifi_sta();

  WiFiManager::_init_config = WIFI_INIT_CONFIG_DEFAULT();
  esp_wifi_init(&WiFiManager::_init_config);

  esp_netif_t *netif = esp_netif_get_handle_from_ifkey("WIFI_STA_DEF");
  if (esp_netif_set_hostname(netif, hostname->c_str()) != ESP_OK) {
    ESP_LOGW("WiFiManager", "Failed to set hostname!");
  }

  esp_event_handler_register(WIFI_EVENT, ESP_EVENT_ANY_ID, &WiFiManager::_event_handler, NULL);
  esp_event_handler_register(IP_EVENT, ESP_EVENT_ANY_ID, &WiFiManager::_event_handler, NULL);

  // Set SSID
  if (ssid->size() > sizeof(WiFiManager::_config.sta.ssid)) {
    ESP_LOGE("WiFi", "SSID To long, max length: %d", sizeof(WiFiManager::_config.sta.ssid));
    return;
  }
  ssid->copy((char *)WiFiManager::_config.sta.ssid, ssid->size(), 0); // Set WiFi SSID
  ESP_LOGI("WiFi", "Will connect to WiFi %s", WiFiManager::_config.sta.ssid);

  // Set passwork/PSK
  if (psk->size() > sizeof(WiFiManager::_config.sta.password)) {
    ESP_LOGE("WiFi", "PSK To long, max length: %d", sizeof(WiFiManager::_config.sta.password));
    return;
  }
  psk->copy((char *)WiFiManager::_config.sta.password, psk->size(), 0);

  ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
  ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &WiFiManager::_config));
  ESP_ERROR_CHECK(esp_wifi_start());
}

void WiFiManager::start_ap(std::string *ssid) {
  WiFiManager::_connected = false;
  WiFiManager::_ip_info.ip.addr = 0;

  esp_netif_init();
  esp_netif_create_default_wifi_ap();

  WiFiManager::_init_config = WIFI_INIT_CONFIG_DEFAULT();
  esp_wifi_init(&WiFiManager::_init_config);

  esp_netif_t *netif = esp_netif_get_handle_from_ifkey("WIFI_STA_DEF");

  esp_event_handler_register(WIFI_EVENT, ESP_EVENT_ANY_ID, &WiFiManager::_event_handler, NULL);
  esp_event_handler_register(IP_EVENT, ESP_EVENT_ANY_ID, &WiFiManager::_event_handler, NULL);

  // Set SSID
  if (ssid->size() > sizeof(WiFiManager::_config.ap.ssid)) {
    ESP_LOGE("WiFi", "SSID To long, max length: %d", sizeof(WiFiManager::_config.ap.ssid));
    return;
  }
  ssid->copy((char *)WiFiManager::_config.ap.ssid, ssid->size(), 0); // Set WiFi SSID
  WiFiManager::_config.ap.ssid_len = ssid->length();
  ESP_LOGI("WiFi", "Will setup WiFi %s", WiFiManager::_config.ap.ssid);

  // Setup other default AP parameters
  WiFiManager::_config.ap.max_connection = 4;
  WiFiManager::_config.ap.authmode = wifi_auth_mode_t::WIFI_AUTH_OPEN;

  ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_AP));
  ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_AP, &WiFiManager::_config));
  ESP_ERROR_CHECK(esp_wifi_start());

  // WiFi started, start DHCP-server
  // esp_netif_dhcps_start(esp_netif_get_handle_from_ifkey("WIFI_AP_DEF"));
  esp_netif_ip_info_t ip_info;
  esp_netif_t *netif_handle = esp_netif_get_handle_from_ifkey("WIFI_AP_DEF");
  esp_netif_get_ip_info(netif_handle, &ip_info);
  WiFiManager::_ip_info = ip_info;
  char ip_addr_str[IP4ADDR_STRLEN_MAX];
  sprintf(ip_addr_str, IPSTR, IP2STR(&ip_info.ip));
  ESP_LOGI("WiFiManager", "SoftAP started with IP %s", ip_addr_str);

  std::string captive_portal_url = "http://";
  captive_portal_url.append(ip_addr_str);

  // TODO: When updating framework to at least ESP-IDF v5.4 setup DHCP option for captive portal.
  // esp_netif_dhcps_option(netif_handle, ESP_NETIF_OP_SET, ESP_NETIF_CAPTIVEPORTAL_URI, (void *)captive_portal_url.c_str(), captive_portal_url.length());
  esp_netif_dhcps_start(netif);
}

void WiFiManager::_event_handler(void *arg, esp_event_base_t event_base, int32_t event_id, void *event_data) {
  if (event_base == WIFI_EVENT) {
    switch (event_id) {
    case WIFI_EVENT_STA_START:
      esp_wifi_connect(); // WiFi station started, start trying to connect to configured wifi.
      break;
    case WIFI_EVENT_STA_DISCONNECTED:
      ESP_LOGI("WiFi", "Lost connection to Wifi, will try to reconnect.");
      WiFiManager::_connected = false;
      esp_wifi_connect(); // We lost connection, try to reconnect.
      break;
    case WIFI_EVENT_STA_CONNECTED:
      ESP_LOGI("WiFi", "Connected to WiFi.");
      WiFiManager::_connected = true;
      break;

    default:
      break;
    }
  } else if (event_base == IP_EVENT) {
    switch (event_id) {
    case IP_EVENT_STA_GOT_IP: {
      ip_event_got_ip_t *event = (ip_event_got_ip_t *)event_data;
      WiFiManager::_ip_info = event->ip_info;
      ESP_LOGI("WiFi", "Got IP: " IPSTR ", Netmask: " IPSTR ", Gateway: " IPSTR, IP2STR(&event->ip_info.ip), IP2STR(&event->ip_info.netmask), IP2STR(&event->ip_info.gw));
      break;
    }

    default:
      break;
    }
  }
}

std::vector<wifi_ap_record_t> WiFiManager::search_available_networks() {
  std::vector<wifi_ap_record_t> return_vector;

  // Config to scan for all networks, including hidden.
  wifi_scan_config_t scan_config = {
      .ssid = NULL,
      .bssid = NULL,
      .channel = 0,
      .show_hidden = true,
  };

  // Scan for networks
  esp_wifi_scan_start(&scan_config, true);

  uint16_t num_networks_found;
  esp_wifi_scan_get_ap_num(&num_networks_found);
  ESP_LOGI("WiFiManager", "Found %d networks in AP scan.", num_networks_found);

  return_vector.resize(num_networks_found);
  esp_wifi_scan_get_ap_records(&num_networks_found, return_vector.data());

  return return_vector;
}

bool WiFiManager::connected() {
  return WiFiManager::_connected;
}

esp_netif_ip_info_t WiFiManager::ip_info() {
  return WiFiManager::_ip_info;
}