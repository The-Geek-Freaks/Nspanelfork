# Generated by Django 5.1.1 on 2024-09-14 14:16

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('web', '0043_alter_nspanel_accepted'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='nspanel',
            name='heap_used_pct',
        ),
        migrations.RemoveField(
            model_name='nspanel',
            name='online_state',
        ),
        migrations.RemoveField(
            model_name='nspanel',
            name='temperature',
        ),
        migrations.RemoveField(
            model_name='nspanel',
            name='wifi_rssi',
        ),
    ]
