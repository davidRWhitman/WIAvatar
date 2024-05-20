// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ai/inworld/studio/v1alpha/impression_event_data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
#include "google/api/annotations.pb.h"
#include "google/api/resource.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto;
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {
class ImpressionEventData;
class ImpressionEventDataDefaultTypeInternal;
extern ImpressionEventDataDefaultTypeInternal _ImpressionEventData_default_instance_;
}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::studio::v1alpha::ImpressionEventData* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::ImpressionEventData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {

// ===================================================================

class ImpressionEventData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.ImpressionEventData) */ {
 public:
  inline ImpressionEventData() : ImpressionEventData(nullptr) {}
  virtual ~ImpressionEventData();

  ImpressionEventData(const ImpressionEventData& from);
  ImpressionEventData(ImpressionEventData&& from) noexcept
    : ImpressionEventData() {
    *this = ::std::move(from);
  }

  inline ImpressionEventData& operator=(const ImpressionEventData& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImpressionEventData& operator=(ImpressionEventData&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ImpressionEventData& default_instance();

  static inline const ImpressionEventData* internal_default_instance() {
    return reinterpret_cast<const ImpressionEventData*>(
               &_ImpressionEventData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImpressionEventData& a, ImpressionEventData& b) {
    a.Swap(&b);
  }
  inline void Swap(ImpressionEventData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImpressionEventData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ImpressionEventData* New() const final {
    return CreateMaybeMessage<ImpressionEventData>(nullptr);
  }

  ImpressionEventData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ImpressionEventData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ImpressionEventData& from);
  void MergeFrom(const ImpressionEventData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ImpressionEventData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.ImpressionEventData";
  }
  protected:
  explicit ImpressionEventData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto);
    return ::descriptor_table_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFeatureFieldNumber = 1,
    kVariantFieldNumber = 2,
    kPayloadFieldNumber = 3,
    kStickinessFieldNumber = 4,
    kWorkspaceIdFieldNumber = 6,
    kEventTimeFieldNumber = 5,
  };
  // string feature = 1;
  void clear_feature();
  const std::string& feature() const;
  void set_feature(const std::string& value);
  void set_feature(std::string&& value);
  void set_feature(const char* value);
  void set_feature(const char* value, size_t size);
  std::string* mutable_feature();
  std::string* release_feature();
  void set_allocated_feature(std::string* feature);
  private:
  const std::string& _internal_feature() const;
  void _internal_set_feature(const std::string& value);
  std::string* _internal_mutable_feature();
  public:

  // string variant = 2;
  void clear_variant();
  const std::string& variant() const;
  void set_variant(const std::string& value);
  void set_variant(std::string&& value);
  void set_variant(const char* value);
  void set_variant(const char* value, size_t size);
  std::string* mutable_variant();
  std::string* release_variant();
  void set_allocated_variant(std::string* variant);
  private:
  const std::string& _internal_variant() const;
  void _internal_set_variant(const std::string& value);
  std::string* _internal_mutable_variant();
  public:

  // string payload = 3;
  void clear_payload();
  const std::string& payload() const;
  void set_payload(const std::string& value);
  void set_payload(std::string&& value);
  void set_payload(const char* value);
  void set_payload(const char* value, size_t size);
  std::string* mutable_payload();
  std::string* release_payload();
  void set_allocated_payload(std::string* payload);
  private:
  const std::string& _internal_payload() const;
  void _internal_set_payload(const std::string& value);
  std::string* _internal_mutable_payload();
  public:

  // string stickiness = 4;
  void clear_stickiness();
  const std::string& stickiness() const;
  void set_stickiness(const std::string& value);
  void set_stickiness(std::string&& value);
  void set_stickiness(const char* value);
  void set_stickiness(const char* value, size_t size);
  std::string* mutable_stickiness();
  std::string* release_stickiness();
  void set_allocated_stickiness(std::string* stickiness);
  private:
  const std::string& _internal_stickiness() const;
  void _internal_set_stickiness(const std::string& value);
  std::string* _internal_mutable_stickiness();
  public:

  // string workspace_id = 6;
  void clear_workspace_id();
  const std::string& workspace_id() const;
  void set_workspace_id(const std::string& value);
  void set_workspace_id(std::string&& value);
  void set_workspace_id(const char* value);
  void set_workspace_id(const char* value, size_t size);
  std::string* mutable_workspace_id();
  std::string* release_workspace_id();
  void set_allocated_workspace_id(std::string* workspace_id);
  private:
  const std::string& _internal_workspace_id() const;
  void _internal_set_workspace_id(const std::string& value);
  std::string* _internal_mutable_workspace_id();
  public:

  // .google.protobuf.Timestamp event_time = 5;
  bool has_event_time() const;
  private:
  bool _internal_has_event_time() const;
  public:
  void clear_event_time();
  const PROTOBUF_NAMESPACE_ID::Timestamp& event_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* release_event_time();
  PROTOBUF_NAMESPACE_ID::Timestamp* mutable_event_time();
  void set_allocated_event_time(PROTOBUF_NAMESPACE_ID::Timestamp* event_time);
  private:
  const PROTOBUF_NAMESPACE_ID::Timestamp& _internal_event_time() const;
  PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_event_time();
  public:
  void unsafe_arena_set_allocated_event_time(
      PROTOBUF_NAMESPACE_ID::Timestamp* event_time);
  PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_event_time();

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.ImpressionEventData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr feature_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr variant_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr payload_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stickiness_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr workspace_id_;
  PROTOBUF_NAMESPACE_ID::Timestamp* event_time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImpressionEventData

// string feature = 1;
inline void ImpressionEventData::clear_feature() {
  feature_.ClearToEmpty();
}
inline const std::string& ImpressionEventData::feature() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
  return _internal_feature();
}
inline void ImpressionEventData::set_feature(const std::string& value) {
  _internal_set_feature(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
}
inline std::string* ImpressionEventData::mutable_feature() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
  return _internal_mutable_feature();
}
inline const std::string& ImpressionEventData::_internal_feature() const {
  return feature_.Get();
}
inline void ImpressionEventData::_internal_set_feature(const std::string& value) {
  
  feature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ImpressionEventData::set_feature(std::string&& value) {
  
  feature_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
}
inline void ImpressionEventData::set_feature(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  feature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
}
inline void ImpressionEventData::set_feature(const char* value,
    size_t size) {
  
  feature_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
}
inline std::string* ImpressionEventData::_internal_mutable_feature() {
  
  return feature_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ImpressionEventData::release_feature() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
  return feature_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ImpressionEventData::set_allocated_feature(std::string* feature) {
  if (feature != nullptr) {
    
  } else {
    
  }
  feature_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), feature,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.feature)
}

// string variant = 2;
inline void ImpressionEventData::clear_variant() {
  variant_.ClearToEmpty();
}
inline const std::string& ImpressionEventData::variant() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
  return _internal_variant();
}
inline void ImpressionEventData::set_variant(const std::string& value) {
  _internal_set_variant(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
}
inline std::string* ImpressionEventData::mutable_variant() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
  return _internal_mutable_variant();
}
inline const std::string& ImpressionEventData::_internal_variant() const {
  return variant_.Get();
}
inline void ImpressionEventData::_internal_set_variant(const std::string& value) {
  
  variant_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ImpressionEventData::set_variant(std::string&& value) {
  
  variant_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
}
inline void ImpressionEventData::set_variant(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  variant_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
}
inline void ImpressionEventData::set_variant(const char* value,
    size_t size) {
  
  variant_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
}
inline std::string* ImpressionEventData::_internal_mutable_variant() {
  
  return variant_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ImpressionEventData::release_variant() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
  return variant_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ImpressionEventData::set_allocated_variant(std::string* variant) {
  if (variant != nullptr) {
    
  } else {
    
  }
  variant_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), variant,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.variant)
}

// string payload = 3;
inline void ImpressionEventData::clear_payload() {
  payload_.ClearToEmpty();
}
inline const std::string& ImpressionEventData::payload() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
  return _internal_payload();
}
inline void ImpressionEventData::set_payload(const std::string& value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
}
inline std::string* ImpressionEventData::mutable_payload() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
  return _internal_mutable_payload();
}
inline const std::string& ImpressionEventData::_internal_payload() const {
  return payload_.Get();
}
inline void ImpressionEventData::_internal_set_payload(const std::string& value) {
  
  payload_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ImpressionEventData::set_payload(std::string&& value) {
  
  payload_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
}
inline void ImpressionEventData::set_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  payload_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
}
inline void ImpressionEventData::set_payload(const char* value,
    size_t size) {
  
  payload_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
}
inline std::string* ImpressionEventData::_internal_mutable_payload() {
  
  return payload_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ImpressionEventData::release_payload() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
  return payload_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ImpressionEventData::set_allocated_payload(std::string* payload) {
  if (payload != nullptr) {
    
  } else {
    
  }
  payload_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), payload,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.payload)
}

// string stickiness = 4;
inline void ImpressionEventData::clear_stickiness() {
  stickiness_.ClearToEmpty();
}
inline const std::string& ImpressionEventData::stickiness() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
  return _internal_stickiness();
}
inline void ImpressionEventData::set_stickiness(const std::string& value) {
  _internal_set_stickiness(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
}
inline std::string* ImpressionEventData::mutable_stickiness() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
  return _internal_mutable_stickiness();
}
inline const std::string& ImpressionEventData::_internal_stickiness() const {
  return stickiness_.Get();
}
inline void ImpressionEventData::_internal_set_stickiness(const std::string& value) {
  
  stickiness_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ImpressionEventData::set_stickiness(std::string&& value) {
  
  stickiness_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
}
inline void ImpressionEventData::set_stickiness(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  stickiness_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
}
inline void ImpressionEventData::set_stickiness(const char* value,
    size_t size) {
  
  stickiness_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
}
inline std::string* ImpressionEventData::_internal_mutable_stickiness() {
  
  return stickiness_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ImpressionEventData::release_stickiness() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
  return stickiness_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ImpressionEventData::set_allocated_stickiness(std::string* stickiness) {
  if (stickiness != nullptr) {
    
  } else {
    
  }
  stickiness_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stickiness,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.stickiness)
}

// .google.protobuf.Timestamp event_time = 5;
inline bool ImpressionEventData::_internal_has_event_time() const {
  return this != internal_default_instance() && event_time_ != nullptr;
}
inline bool ImpressionEventData::has_event_time() const {
  return _internal_has_event_time();
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ImpressionEventData::_internal_event_time() const {
  const PROTOBUF_NAMESPACE_ID::Timestamp* p = event_time_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Timestamp&>(
      PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Timestamp& ImpressionEventData::event_time() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.event_time)
  return _internal_event_time();
}
inline void ImpressionEventData::unsafe_arena_set_allocated_event_time(
    PROTOBUF_NAMESPACE_ID::Timestamp* event_time) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(event_time_);
  }
  event_time_ = event_time;
  if (event_time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.event_time)
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ImpressionEventData::release_event_time() {
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = event_time_;
  event_time_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ImpressionEventData::unsafe_arena_release_event_time() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.event_time)
  
  PROTOBUF_NAMESPACE_ID::Timestamp* temp = event_time_;
  event_time_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ImpressionEventData::_internal_mutable_event_time() {
  
  if (event_time_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Timestamp>(GetArena());
    event_time_ = p;
  }
  return event_time_;
}
inline PROTOBUF_NAMESPACE_ID::Timestamp* ImpressionEventData::mutable_event_time() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.event_time)
  return _internal_mutable_event_time();
}
inline void ImpressionEventData::set_allocated_event_time(PROTOBUF_NAMESPACE_ID::Timestamp* event_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(event_time_);
  }
  if (event_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(event_time)->GetArena();
    if (message_arena != submessage_arena) {
      event_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, event_time, submessage_arena);
    }
    
  } else {
    
  }
  event_time_ = event_time;
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.event_time)
}

// string workspace_id = 6;
inline void ImpressionEventData::clear_workspace_id() {
  workspace_id_.ClearToEmpty();
}
inline const std::string& ImpressionEventData::workspace_id() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
  return _internal_workspace_id();
}
inline void ImpressionEventData::set_workspace_id(const std::string& value) {
  _internal_set_workspace_id(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
}
inline std::string* ImpressionEventData::mutable_workspace_id() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
  return _internal_mutable_workspace_id();
}
inline const std::string& ImpressionEventData::_internal_workspace_id() const {
  return workspace_id_.Get();
}
inline void ImpressionEventData::_internal_set_workspace_id(const std::string& value) {
  
  workspace_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ImpressionEventData::set_workspace_id(std::string&& value) {
  
  workspace_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
}
inline void ImpressionEventData::set_workspace_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  workspace_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
}
inline void ImpressionEventData::set_workspace_id(const char* value,
    size_t size) {
  
  workspace_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
}
inline std::string* ImpressionEventData::_internal_mutable_workspace_id() {
  
  return workspace_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ImpressionEventData::release_workspace_id() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
  return workspace_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ImpressionEventData::set_allocated_workspace_id(std::string* workspace_id) {
  if (workspace_id != nullptr) {
    
  } else {
    
  }
  workspace_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), workspace_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.ImpressionEventData.workspace_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ai_2finworld_2fstudio_2fv1alpha_2fimpression_5fevent_5fdata_2eproto