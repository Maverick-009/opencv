// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: versions.proto

#ifndef PROTOBUF_versions_2eproto__INCLUDED
#define PROTOBUF_versions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_versions_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsVersionDefImpl();
void InitDefaultsVersionDef();
inline void InitDefaults() {
  InitDefaultsVersionDef();
}
}  // namespace protobuf_versions_2eproto
namespace tensorflow {
class VersionDef;
class VersionDefDefaultTypeInternal;
extern VersionDefDefaultTypeInternal _VersionDef_default_instance_;
}  // namespace tensorflow
namespace tensorflow {

// ===================================================================

class VersionDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.VersionDef) */ {
 public:
  VersionDef();
  virtual ~VersionDef();

  VersionDef(const VersionDef& from);

  inline VersionDef& operator=(const VersionDef& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VersionDef(VersionDef&& from) noexcept
    : VersionDef() {
    *this = ::std::move(from);
  }

  inline VersionDef& operator=(VersionDef&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const VersionDef& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VersionDef* internal_default_instance() {
    return reinterpret_cast<const VersionDef*>(
               &_VersionDef_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(VersionDef* other);
  void Swap(VersionDef* other);
  friend void swap(VersionDef& a, VersionDef& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VersionDef* New() const PROTOBUF_FINAL { return New(NULL); }

  VersionDef* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VersionDef& from);
  void MergeFrom(const VersionDef& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(VersionDef* other);
  protected:
  explicit VersionDef(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 bad_consumers = 3;
  int bad_consumers_size() const;
  void clear_bad_consumers();
  static const int kBadConsumersFieldNumber = 3;
  ::google::protobuf::int32 bad_consumers(int index) const;
  void set_bad_consumers(int index, ::google::protobuf::int32 value);
  void add_bad_consumers(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      bad_consumers() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_bad_consumers();

  // int32 producer = 1;
  void clear_producer();
  static const int kProducerFieldNumber = 1;
  ::google::protobuf::int32 producer() const;
  void set_producer(::google::protobuf::int32 value);

  // int32 min_consumer = 2;
  void clear_min_consumer();
  static const int kMinConsumerFieldNumber = 2;
  ::google::protobuf::int32 min_consumer() const;
  void set_min_consumer(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.VersionDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > bad_consumers_;
  mutable int _bad_consumers_cached_byte_size_;
  ::google::protobuf::int32 producer_;
  ::google::protobuf::int32 min_consumer_;
  mutable int _cached_size_;
  friend struct ::protobuf_versions_2eproto::TableStruct;
  friend void ::protobuf_versions_2eproto::InitDefaultsVersionDefImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VersionDef

// int32 producer = 1;
inline void VersionDef::clear_producer() {
  producer_ = 0;
}
inline ::google::protobuf::int32 VersionDef::producer() const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.producer)
  return producer_;
}
inline void VersionDef::set_producer(::google::protobuf::int32 value) {

  producer_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.producer)
}

// int32 min_consumer = 2;
inline void VersionDef::clear_min_consumer() {
  min_consumer_ = 0;
}
inline ::google::protobuf::int32 VersionDef::min_consumer() const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.min_consumer)
  return min_consumer_;
}
inline void VersionDef::set_min_consumer(::google::protobuf::int32 value) {

  min_consumer_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.min_consumer)
}

// repeated int32 bad_consumers = 3;
inline int VersionDef::bad_consumers_size() const {
  return bad_consumers_.size();
}
inline void VersionDef::clear_bad_consumers() {
  bad_consumers_.Clear();
}
inline ::google::protobuf::int32 VersionDef::bad_consumers(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.VersionDef.bad_consumers)
  return bad_consumers_.Get(index);
}
inline void VersionDef::set_bad_consumers(int index, ::google::protobuf::int32 value) {
  bad_consumers_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.VersionDef.bad_consumers)
}
inline void VersionDef::add_bad_consumers(::google::protobuf::int32 value) {
  bad_consumers_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.VersionDef.bad_consumers)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
VersionDef::bad_consumers() const {
  // @@protoc_insertion_point(field_list:tensorflow.VersionDef.bad_consumers)
  return bad_consumers_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
VersionDef::mutable_bad_consumers() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.VersionDef.bad_consumers)
  return &bad_consumers_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_versions_2eproto__INCLUDED