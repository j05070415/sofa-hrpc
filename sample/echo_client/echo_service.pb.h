// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo_service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_echo_5fservice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_echo_5fservice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_echo_5fservice_2eproto;
namespace sofa {
namespace pbrpc {
namespace test {
class EchoRequest;
class EchoRequestDefaultTypeInternal;
extern EchoRequestDefaultTypeInternal _EchoRequest_default_instance_;
class EchoResponse;
class EchoResponseDefaultTypeInternal;
extern EchoResponseDefaultTypeInternal _EchoResponse_default_instance_;
}  // namespace test
}  // namespace pbrpc
}  // namespace sofa
PROTOBUF_NAMESPACE_OPEN
template<> ::sofa::pbrpc::test::EchoRequest* Arena::CreateMaybeMessage<::sofa::pbrpc::test::EchoRequest>(Arena*);
template<> ::sofa::pbrpc::test::EchoResponse* Arena::CreateMaybeMessage<::sofa::pbrpc::test::EchoResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sofa {
namespace pbrpc {
namespace test {

// ===================================================================

class EchoRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sofa.pbrpc.test.EchoRequest) */ {
 public:
  inline EchoRequest() : EchoRequest(nullptr) {};
  virtual ~EchoRequest();

  EchoRequest(const EchoRequest& from);
  EchoRequest(EchoRequest&& from) noexcept
    : EchoRequest() {
    *this = ::std::move(from);
  }

  inline EchoRequest& operator=(const EchoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoRequest& operator=(EchoRequest&& from) noexcept {
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
  static const EchoRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EchoRequest* internal_default_instance() {
    return reinterpret_cast<const EchoRequest*>(
               &_EchoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(EchoRequest& a, EchoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline EchoRequest* New() const final {
    return CreateMaybeMessage<EchoRequest>(nullptr);
  }

  EchoRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EchoRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EchoRequest& from);
  void MergeFrom(const EchoRequest& from);
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
  void InternalSwap(EchoRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sofa.pbrpc.test.EchoRequest";
  }
  protected:
  explicit EchoRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_echo_5fservice_2eproto);
    return ::descriptor_table_echo_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_message(
      std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:sofa.pbrpc.test.EchoRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_5fservice_2eproto;
};
// -------------------------------------------------------------------

class EchoResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sofa.pbrpc.test.EchoResponse) */ {
 public:
  inline EchoResponse() : EchoResponse(nullptr) {};
  virtual ~EchoResponse();

  EchoResponse(const EchoResponse& from);
  EchoResponse(EchoResponse&& from) noexcept
    : EchoResponse() {
    *this = ::std::move(from);
  }

  inline EchoResponse& operator=(const EchoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline EchoResponse& operator=(EchoResponse&& from) noexcept {
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
  static const EchoResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EchoResponse* internal_default_instance() {
    return reinterpret_cast<const EchoResponse*>(
               &_EchoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(EchoResponse& a, EchoResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(EchoResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(EchoResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline EchoResponse* New() const final {
    return CreateMaybeMessage<EchoResponse>(nullptr);
  }

  EchoResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<EchoResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const EchoResponse& from);
  void MergeFrom(const EchoResponse& from);
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
  void InternalSwap(EchoResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sofa.pbrpc.test.EchoResponse";
  }
  protected:
  explicit EchoResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_echo_5fservice_2eproto);
    return ::descriptor_table_echo_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_message();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_message(
      std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // @@protoc_insertion_point(class_scope:sofa.pbrpc.test.EchoResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_echo_5fservice_2eproto;
};
// ===================================================================

class EchoServer_Stub;

class EchoServer : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline EchoServer() {};
 public:
  virtual ~EchoServer();

  typedef EchoServer_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void Echo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::sofa::pbrpc::test::EchoRequest* request,
                       ::sofa::pbrpc::test::EchoResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoServer);
};

class EchoServer_Stub : public EchoServer {
 public:
  EchoServer_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  EchoServer_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~EchoServer_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements EchoServer ------------------------------------------

  void Echo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::sofa::pbrpc::test::EchoRequest* request,
                       ::sofa::pbrpc::test::EchoResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoServer_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EchoRequest

// string message = 1;
inline void EchoRequest::clear_message() {
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& EchoRequest::message() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.test.EchoRequest.message)
  return _internal_message();
}
inline void EchoRequest::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:sofa.pbrpc.test.EchoRequest.message)
}
inline std::string* EchoRequest::mutable_message() {
  // @@protoc_insertion_point(field_mutable:sofa.pbrpc.test.EchoRequest.message)
  return _internal_mutable_message();
}
inline const std::string& EchoRequest::_internal_message() const {
  return message_.Get();
}
inline void EchoRequest::_internal_set_message(const std::string& value) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void EchoRequest::set_message(std::string&& value) {
  
  message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:sofa.pbrpc.test.EchoRequest.message)
}
inline void EchoRequest::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:sofa.pbrpc.test.EchoRequest.message)
}
inline void EchoRequest::set_message(const char* value,
    size_t size) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:sofa.pbrpc.test.EchoRequest.message)
}
inline std::string* EchoRequest::_internal_mutable_message() {
  
  return message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* EchoRequest::release_message() {
  // @@protoc_insertion_point(field_release:sofa.pbrpc.test.EchoRequest.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void EchoRequest::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:sofa.pbrpc.test.EchoRequest.message)
}
inline std::string* EchoRequest::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:sofa.pbrpc.test.EchoRequest.message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void EchoRequest::unsafe_arena_set_allocated_message(
    std::string* message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (message != nullptr) {
    
  } else {
    
  }
  message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:sofa.pbrpc.test.EchoRequest.message)
}

// -------------------------------------------------------------------

// EchoResponse

// string message = 1;
inline void EchoResponse::clear_message() {
  message_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& EchoResponse::message() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.test.EchoResponse.message)
  return _internal_message();
}
inline void EchoResponse::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:sofa.pbrpc.test.EchoResponse.message)
}
inline std::string* EchoResponse::mutable_message() {
  // @@protoc_insertion_point(field_mutable:sofa.pbrpc.test.EchoResponse.message)
  return _internal_mutable_message();
}
inline const std::string& EchoResponse::_internal_message() const {
  return message_.Get();
}
inline void EchoResponse::_internal_set_message(const std::string& value) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void EchoResponse::set_message(std::string&& value) {
  
  message_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:sofa.pbrpc.test.EchoResponse.message)
}
inline void EchoResponse::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:sofa.pbrpc.test.EchoResponse.message)
}
inline void EchoResponse::set_message(const char* value,
    size_t size) {
  
  message_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:sofa.pbrpc.test.EchoResponse.message)
}
inline std::string* EchoResponse::_internal_mutable_message() {
  
  return message_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* EchoResponse::release_message() {
  // @@protoc_insertion_point(field_release:sofa.pbrpc.test.EchoResponse.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void EchoResponse::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:sofa.pbrpc.test.EchoResponse.message)
}
inline std::string* EchoResponse::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:sofa.pbrpc.test.EchoResponse.message)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return message_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void EchoResponse::unsafe_arena_set_allocated_message(
    std::string* message) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (message != nullptr) {
    
  } else {
    
  }
  message_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      message, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:sofa.pbrpc.test.EchoResponse.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace test
}  // namespace pbrpc
}  // namespace sofa

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_echo_5fservice_2eproto
