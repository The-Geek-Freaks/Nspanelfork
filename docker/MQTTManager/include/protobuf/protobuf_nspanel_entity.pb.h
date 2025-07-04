// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: protobuf_nspanel_entity.proto
// Protobuf C++ Version: 5.27.0

#ifndef GOOGLE_PROTOBUF_INCLUDED_protobuf_5fnspanel_5fentity_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protobuf_5fnspanel_5fentity_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protobuf_5fnspanel_5fentity_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_protobuf_5fnspanel_5fentity_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_protobuf_5fnspanel_5fentity_2eproto;
class NSPanelEntityState;
struct NSPanelEntityStateDefaultTypeInternal;
extern NSPanelEntityStateDefaultTypeInternal _NSPanelEntityState_default_instance_;
class NSPanelEntityState_Light;
struct NSPanelEntityState_LightDefaultTypeInternal;
extern NSPanelEntityState_LightDefaultTypeInternal _NSPanelEntityState_Light_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

enum NSPanelEntityState_Light_LightMode : int {
  NSPanelEntityState_Light_LightMode_COLOR_TEMP = 0,
  NSPanelEntityState_Light_LightMode_RGB = 1,
  NSPanelEntityState_Light_LightMode_NSPanelEntityState_Light_LightMode_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  NSPanelEntityState_Light_LightMode_NSPanelEntityState_Light_LightMode_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool NSPanelEntityState_Light_LightMode_IsValid(int value);
extern const uint32_t NSPanelEntityState_Light_LightMode_internal_data_[];
constexpr NSPanelEntityState_Light_LightMode NSPanelEntityState_Light_LightMode_LightMode_MIN = static_cast<NSPanelEntityState_Light_LightMode>(0);
constexpr NSPanelEntityState_Light_LightMode NSPanelEntityState_Light_LightMode_LightMode_MAX = static_cast<NSPanelEntityState_Light_LightMode>(1);
constexpr int NSPanelEntityState_Light_LightMode_LightMode_ARRAYSIZE = 1 + 1;
const ::google::protobuf::EnumDescriptor*
NSPanelEntityState_Light_LightMode_descriptor();
template <typename T>
const std::string& NSPanelEntityState_Light_LightMode_Name(T value) {
  static_assert(std::is_same<T, NSPanelEntityState_Light_LightMode>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to LightMode_Name().");
  return NSPanelEntityState_Light_LightMode_Name(static_cast<NSPanelEntityState_Light_LightMode>(value));
}
template <>
inline const std::string& NSPanelEntityState_Light_LightMode_Name(NSPanelEntityState_Light_LightMode value) {
  return ::google::protobuf::internal::NameOfDenseEnum<NSPanelEntityState_Light_LightMode_descriptor,
                                                 0, 1>(
      static_cast<int>(value));
}
inline bool NSPanelEntityState_Light_LightMode_Parse(absl::string_view name, NSPanelEntityState_Light_LightMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NSPanelEntityState_Light_LightMode>(
      NSPanelEntityState_Light_LightMode_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class NSPanelEntityState_Light final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:NSPanelEntityState.Light) */ {
 public:
  inline NSPanelEntityState_Light() : NSPanelEntityState_Light(nullptr) {}
  ~NSPanelEntityState_Light() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR NSPanelEntityState_Light(
      ::google::protobuf::internal::ConstantInitialized);

  inline NSPanelEntityState_Light(const NSPanelEntityState_Light& from) : NSPanelEntityState_Light(nullptr, from) {}
  inline NSPanelEntityState_Light(NSPanelEntityState_Light&& from) noexcept
      : NSPanelEntityState_Light(nullptr, std::move(from)) {}
  inline NSPanelEntityState_Light& operator=(const NSPanelEntityState_Light& from) {
    CopyFrom(from);
    return *this;
  }
  inline NSPanelEntityState_Light& operator=(NSPanelEntityState_Light&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NSPanelEntityState_Light& default_instance() {
    return *internal_default_instance();
  }
  static inline const NSPanelEntityState_Light* internal_default_instance() {
    return reinterpret_cast<const NSPanelEntityState_Light*>(
        &_NSPanelEntityState_Light_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(NSPanelEntityState_Light& a, NSPanelEntityState_Light& b) { a.Swap(&b); }
  inline void Swap(NSPanelEntityState_Light* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NSPanelEntityState_Light* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NSPanelEntityState_Light* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<NSPanelEntityState_Light>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const NSPanelEntityState_Light& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const NSPanelEntityState_Light& from) { NSPanelEntityState_Light::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(NSPanelEntityState_Light* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "NSPanelEntityState.Light"; }

 protected:
  explicit NSPanelEntityState_Light(::google::protobuf::Arena* arena);
  NSPanelEntityState_Light(::google::protobuf::Arena* arena, const NSPanelEntityState_Light& from);
  NSPanelEntityState_Light(::google::protobuf::Arena* arena, NSPanelEntityState_Light&& from) noexcept
      : NSPanelEntityState_Light(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------
  using LightMode = NSPanelEntityState_Light_LightMode;
  static constexpr LightMode COLOR_TEMP = NSPanelEntityState_Light_LightMode_COLOR_TEMP;
  static constexpr LightMode RGB = NSPanelEntityState_Light_LightMode_RGB;
  static inline bool LightMode_IsValid(int value) {
    return NSPanelEntityState_Light_LightMode_IsValid(value);
  }
  static constexpr LightMode LightMode_MIN = NSPanelEntityState_Light_LightMode_LightMode_MIN;
  static constexpr LightMode LightMode_MAX = NSPanelEntityState_Light_LightMode_LightMode_MAX;
  static constexpr int LightMode_ARRAYSIZE = NSPanelEntityState_Light_LightMode_LightMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor* LightMode_descriptor() {
    return NSPanelEntityState_Light_LightMode_descriptor();
  }
  template <typename T>
  static inline const std::string& LightMode_Name(T value) {
    return NSPanelEntityState_Light_LightMode_Name(value);
  }
  static inline bool LightMode_Parse(absl::string_view name, LightMode* value) {
    return NSPanelEntityState_Light_LightMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 2,
    kLightIdFieldNumber = 1,
    kBrightnessFieldNumber = 3,
    kColorTempFieldNumber = 4,
    kHueFieldNumber = 5,
    kSaturationFieldNumber = 6,
    kCanColorTempFieldNumber = 7,
    kCanColorFieldNumber = 8,
    kCurrentLightModeFieldNumber = 9,
  };
  // string name = 2;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // int32 light_id = 1;
  void clear_light_id() ;
  ::int32_t light_id() const;
  void set_light_id(::int32_t value);

  private:
  ::int32_t _internal_light_id() const;
  void _internal_set_light_id(::int32_t value);

  public:
  // int32 brightness = 3;
  void clear_brightness() ;
  ::int32_t brightness() const;
  void set_brightness(::int32_t value);

  private:
  ::int32_t _internal_brightness() const;
  void _internal_set_brightness(::int32_t value);

  public:
  // int32 color_temp = 4;
  void clear_color_temp() ;
  ::int32_t color_temp() const;
  void set_color_temp(::int32_t value);

  private:
  ::int32_t _internal_color_temp() const;
  void _internal_set_color_temp(::int32_t value);

  public:
  // int32 hue = 5;
  void clear_hue() ;
  ::int32_t hue() const;
  void set_hue(::int32_t value);

  private:
  ::int32_t _internal_hue() const;
  void _internal_set_hue(::int32_t value);

  public:
  // int32 saturation = 6;
  void clear_saturation() ;
  ::int32_t saturation() const;
  void set_saturation(::int32_t value);

  private:
  ::int32_t _internal_saturation() const;
  void _internal_set_saturation(::int32_t value);

  public:
  // bool can_color_temp = 7;
  void clear_can_color_temp() ;
  bool can_color_temp() const;
  void set_can_color_temp(bool value);

  private:
  bool _internal_can_color_temp() const;
  void _internal_set_can_color_temp(bool value);

  public:
  // bool can_color = 8;
  void clear_can_color() ;
  bool can_color() const;
  void set_can_color(bool value);

  private:
  bool _internal_can_color() const;
  void _internal_set_can_color(bool value);

  public:
  // .NSPanelEntityState.Light.LightMode current_light_mode = 9;
  void clear_current_light_mode() ;
  ::NSPanelEntityState_Light_LightMode current_light_mode() const;
  void set_current_light_mode(::NSPanelEntityState_Light_LightMode value);

  private:
  ::NSPanelEntityState_Light_LightMode _internal_current_light_mode() const;
  void _internal_set_current_light_mode(::NSPanelEntityState_Light_LightMode value);

  public:
  // @@protoc_insertion_point(class_scope:NSPanelEntityState.Light)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      4, 9, 0,
      45, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_NSPanelEntityState_Light_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const NSPanelEntityState_Light& from_msg);
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::int32_t light_id_;
    ::int32_t brightness_;
    ::int32_t color_temp_;
    ::int32_t hue_;
    ::int32_t saturation_;
    bool can_color_temp_;
    bool can_color_;
    int current_light_mode_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protobuf_5fnspanel_5fentity_2eproto;
};
// -------------------------------------------------------------------

class NSPanelEntityState final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:NSPanelEntityState) */ {
 public:
  inline NSPanelEntityState() : NSPanelEntityState(nullptr) {}
  ~NSPanelEntityState() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR NSPanelEntityState(
      ::google::protobuf::internal::ConstantInitialized);

  inline NSPanelEntityState(const NSPanelEntityState& from) : NSPanelEntityState(nullptr, from) {}
  inline NSPanelEntityState(NSPanelEntityState&& from) noexcept
      : NSPanelEntityState(nullptr, std::move(from)) {}
  inline NSPanelEntityState& operator=(const NSPanelEntityState& from) {
    CopyFrom(from);
    return *this;
  }
  inline NSPanelEntityState& operator=(NSPanelEntityState&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NSPanelEntityState& default_instance() {
    return *internal_default_instance();
  }
  enum EntityCase {
    kLight = 1,
    ENTITY_NOT_SET = 0,
  };
  static inline const NSPanelEntityState* internal_default_instance() {
    return reinterpret_cast<const NSPanelEntityState*>(
        &_NSPanelEntityState_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(NSPanelEntityState& a, NSPanelEntityState& b) { a.Swap(&b); }
  inline void Swap(NSPanelEntityState* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NSPanelEntityState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NSPanelEntityState* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<NSPanelEntityState>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const NSPanelEntityState& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const NSPanelEntityState& from) { NSPanelEntityState::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(NSPanelEntityState* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "NSPanelEntityState"; }

 protected:
  explicit NSPanelEntityState(::google::protobuf::Arena* arena);
  NSPanelEntityState(::google::protobuf::Arena* arena, const NSPanelEntityState& from);
  NSPanelEntityState(::google::protobuf::Arena* arena, NSPanelEntityState&& from) noexcept
      : NSPanelEntityState(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------
  using Light = NSPanelEntityState_Light;

  // accessors -------------------------------------------------------
  enum : int {
    kLightFieldNumber = 1,
  };
  // .NSPanelEntityState.Light light = 1;
  bool has_light() const;
  private:
  bool _internal_has_light() const;

  public:
  void clear_light() ;
  const ::NSPanelEntityState_Light& light() const;
  PROTOBUF_NODISCARD ::NSPanelEntityState_Light* release_light();
  ::NSPanelEntityState_Light* mutable_light();
  void set_allocated_light(::NSPanelEntityState_Light* value);
  void unsafe_arena_set_allocated_light(::NSPanelEntityState_Light* value);
  ::NSPanelEntityState_Light* unsafe_arena_release_light();

  private:
  const ::NSPanelEntityState_Light& _internal_light() const;
  ::NSPanelEntityState_Light* _internal_mutable_light();

  public:
  void clear_entity();
  EntityCase entity_case() const;
  // @@protoc_insertion_point(class_scope:NSPanelEntityState)
 private:
  class _Internal;
  void set_has_light();
  inline bool has_entity() const;
  inline void clear_has_entity();
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_NSPanelEntityState_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const NSPanelEntityState& from_msg);
    union EntityUnion {
      constexpr EntityUnion() : _constinit_{} {}
      ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::NSPanelEntityState_Light* light_;
    } entity_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protobuf_5fnspanel_5fentity_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// NSPanelEntityState_Light

// int32 light_id = 1;
inline void NSPanelEntityState_Light::clear_light_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.light_id_ = 0;
}
inline ::int32_t NSPanelEntityState_Light::light_id() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.light_id)
  return _internal_light_id();
}
inline void NSPanelEntityState_Light::set_light_id(::int32_t value) {
  _internal_set_light_id(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.light_id)
}
inline ::int32_t NSPanelEntityState_Light::_internal_light_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.light_id_;
}
inline void NSPanelEntityState_Light::_internal_set_light_id(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.light_id_ = value;
}

// string name = 2;
inline void NSPanelEntityState_Light::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& NSPanelEntityState_Light::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void NSPanelEntityState_Light::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.name)
}
inline std::string* NSPanelEntityState_Light::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:NSPanelEntityState.Light.name)
  return _s;
}
inline const std::string& NSPanelEntityState_Light::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void NSPanelEntityState_Light::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(value, GetArena());
}
inline std::string* NSPanelEntityState_Light::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* NSPanelEntityState_Light::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:NSPanelEntityState.Light.name)
  return _impl_.name_.Release();
}
inline void NSPanelEntityState_Light::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:NSPanelEntityState.Light.name)
}

// int32 brightness = 3;
inline void NSPanelEntityState_Light::clear_brightness() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.brightness_ = 0;
}
inline ::int32_t NSPanelEntityState_Light::brightness() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.brightness)
  return _internal_brightness();
}
inline void NSPanelEntityState_Light::set_brightness(::int32_t value) {
  _internal_set_brightness(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.brightness)
}
inline ::int32_t NSPanelEntityState_Light::_internal_brightness() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.brightness_;
}
inline void NSPanelEntityState_Light::_internal_set_brightness(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.brightness_ = value;
}

// int32 color_temp = 4;
inline void NSPanelEntityState_Light::clear_color_temp() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.color_temp_ = 0;
}
inline ::int32_t NSPanelEntityState_Light::color_temp() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.color_temp)
  return _internal_color_temp();
}
inline void NSPanelEntityState_Light::set_color_temp(::int32_t value) {
  _internal_set_color_temp(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.color_temp)
}
inline ::int32_t NSPanelEntityState_Light::_internal_color_temp() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.color_temp_;
}
inline void NSPanelEntityState_Light::_internal_set_color_temp(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.color_temp_ = value;
}

// int32 hue = 5;
inline void NSPanelEntityState_Light::clear_hue() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.hue_ = 0;
}
inline ::int32_t NSPanelEntityState_Light::hue() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.hue)
  return _internal_hue();
}
inline void NSPanelEntityState_Light::set_hue(::int32_t value) {
  _internal_set_hue(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.hue)
}
inline ::int32_t NSPanelEntityState_Light::_internal_hue() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.hue_;
}
inline void NSPanelEntityState_Light::_internal_set_hue(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.hue_ = value;
}

// int32 saturation = 6;
inline void NSPanelEntityState_Light::clear_saturation() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.saturation_ = 0;
}
inline ::int32_t NSPanelEntityState_Light::saturation() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.saturation)
  return _internal_saturation();
}
inline void NSPanelEntityState_Light::set_saturation(::int32_t value) {
  _internal_set_saturation(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.saturation)
}
inline ::int32_t NSPanelEntityState_Light::_internal_saturation() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.saturation_;
}
inline void NSPanelEntityState_Light::_internal_set_saturation(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.saturation_ = value;
}

// bool can_color_temp = 7;
inline void NSPanelEntityState_Light::clear_can_color_temp() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temp_ = false;
}
inline bool NSPanelEntityState_Light::can_color_temp() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.can_color_temp)
  return _internal_can_color_temp();
}
inline void NSPanelEntityState_Light::set_can_color_temp(bool value) {
  _internal_set_can_color_temp(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.can_color_temp)
}
inline bool NSPanelEntityState_Light::_internal_can_color_temp() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_color_temp_;
}
inline void NSPanelEntityState_Light::_internal_set_can_color_temp(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_temp_ = value;
}

// bool can_color = 8;
inline void NSPanelEntityState_Light::clear_can_color() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_ = false;
}
inline bool NSPanelEntityState_Light::can_color() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.can_color)
  return _internal_can_color();
}
inline void NSPanelEntityState_Light::set_can_color(bool value) {
  _internal_set_can_color(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.can_color)
}
inline bool NSPanelEntityState_Light::_internal_can_color() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.can_color_;
}
inline void NSPanelEntityState_Light::_internal_set_can_color(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.can_color_ = value;
}

// .NSPanelEntityState.Light.LightMode current_light_mode = 9;
inline void NSPanelEntityState_Light::clear_current_light_mode() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.current_light_mode_ = 0;
}
inline ::NSPanelEntityState_Light_LightMode NSPanelEntityState_Light::current_light_mode() const {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.Light.current_light_mode)
  return _internal_current_light_mode();
}
inline void NSPanelEntityState_Light::set_current_light_mode(::NSPanelEntityState_Light_LightMode value) {
  _internal_set_current_light_mode(value);
  // @@protoc_insertion_point(field_set:NSPanelEntityState.Light.current_light_mode)
}
inline ::NSPanelEntityState_Light_LightMode NSPanelEntityState_Light::_internal_current_light_mode() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::NSPanelEntityState_Light_LightMode>(_impl_.current_light_mode_);
}
inline void NSPanelEntityState_Light::_internal_set_current_light_mode(::NSPanelEntityState_Light_LightMode value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.current_light_mode_ = value;
}

// -------------------------------------------------------------------

// NSPanelEntityState

// .NSPanelEntityState.Light light = 1;
inline bool NSPanelEntityState::has_light() const {
  return entity_case() == kLight;
}
inline bool NSPanelEntityState::_internal_has_light() const {
  return entity_case() == kLight;
}
inline void NSPanelEntityState::set_has_light() {
  _impl_._oneof_case_[0] = kLight;
}
inline void NSPanelEntityState::clear_light() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (entity_case() == kLight) {
    if (GetArena() == nullptr) {
      delete _impl_.entity_.light_;
    } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
      ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.entity_.light_);
    }
    clear_has_entity();
  }
}
inline ::NSPanelEntityState_Light* NSPanelEntityState::release_light() {
  // @@protoc_insertion_point(field_release:NSPanelEntityState.light)
  if (entity_case() == kLight) {
    clear_has_entity();
    auto* temp = _impl_.entity_.light_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.entity_.light_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::NSPanelEntityState_Light& NSPanelEntityState::_internal_light() const {
  return entity_case() == kLight ? *_impl_.entity_.light_ : reinterpret_cast<::NSPanelEntityState_Light&>(::_NSPanelEntityState_Light_default_instance_);
}
inline const ::NSPanelEntityState_Light& NSPanelEntityState::light() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:NSPanelEntityState.light)
  return _internal_light();
}
inline ::NSPanelEntityState_Light* NSPanelEntityState::unsafe_arena_release_light() {
  // @@protoc_insertion_point(field_unsafe_arena_release:NSPanelEntityState.light)
  if (entity_case() == kLight) {
    clear_has_entity();
    auto* temp = _impl_.entity_.light_;
    _impl_.entity_.light_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void NSPanelEntityState::unsafe_arena_set_allocated_light(::NSPanelEntityState_Light* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_entity();
  if (value) {
    set_has_light();
    _impl_.entity_.light_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:NSPanelEntityState.light)
}
inline ::NSPanelEntityState_Light* NSPanelEntityState::_internal_mutable_light() {
  if (entity_case() != kLight) {
    clear_entity();
    set_has_light();
    _impl_.entity_.light_ =
        ::google::protobuf::Message::DefaultConstruct<::NSPanelEntityState_Light>(GetArena());
  }
  return _impl_.entity_.light_;
}
inline ::NSPanelEntityState_Light* NSPanelEntityState::mutable_light() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::NSPanelEntityState_Light* _msg = _internal_mutable_light();
  // @@protoc_insertion_point(field_mutable:NSPanelEntityState.light)
  return _msg;
}

inline bool NSPanelEntityState::has_entity() const {
  return entity_case() != ENTITY_NOT_SET;
}
inline void NSPanelEntityState::clear_has_entity() {
  _impl_._oneof_case_[0] = ENTITY_NOT_SET;
}
inline NSPanelEntityState::EntityCase NSPanelEntityState::entity_case() const {
  return NSPanelEntityState::EntityCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::NSPanelEntityState_Light_LightMode> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::NSPanelEntityState_Light_LightMode>() {
  return ::NSPanelEntityState_Light_LightMode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protobuf_5fnspanel_5fentity_2eproto_2epb_2eh
