// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sofa/pbrpc/rpc_meta.proto

#include "sofa/pbrpc/rpc_meta.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace sofa {
namespace pbrpc {
class RpcMetaDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RpcMeta> _instance;
} _RpcMeta_default_instance_;
}  // namespace pbrpc
}  // namespace sofa
static void InitDefaultsscc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sofa::pbrpc::_RpcMeta_default_instance_;
    new (ptr) ::sofa::pbrpc::RpcMeta();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sofa::pbrpc::RpcMeta::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sofa_2fpbrpc_2frpc_5fmeta_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sofa_2fpbrpc_2frpc_5fmeta_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sofa_2fpbrpc_2frpc_5fmeta_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sofa_2fpbrpc_2frpc_5fmeta_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, type_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, sequence_id_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, method_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, server_timeout_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, failed_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, error_code_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, reason_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, compress_type_),
  PROTOBUF_FIELD_OFFSET(::sofa::pbrpc::RpcMeta, expected_response_compress_type_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sofa::pbrpc::RpcMeta)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sofa::pbrpc::_RpcMeta_default_instance_),
};

const char descriptor_table_protodef_sofa_2fpbrpc_2frpc_5fmeta_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031sofa/pbrpc/rpc_meta.proto\022\nsofa.pbrpc\032"
  "\033sofa/pbrpc/rpc_option.proto\"\276\002\n\007RpcMeta"
  "\022&\n\004type\030\001 \001(\0162\030.sofa.pbrpc.RpcMeta.Type"
  "\022\023\n\013sequence_id\030\002 \001(\004\022\016\n\006method\030d \001(\t\022\026\n"
  "\016server_timeout\030e \001(\003\022\017\n\006failed\030\310\001 \001(\010\022\023"
  "\n\nerror_code\030\311\001 \001(\005\022\017\n\006reason\030\312\001 \001(\t\0220\n\r"
  "compress_type\030\254\002 \001(\0162\030.sofa.pbrpc.Compre"
  "ssType\022B\n\037expected_response_compress_typ"
  "e\030\255\002 \001(\0162\030.sofa.pbrpc.CompressType\"!\n\004Ty"
  "pe\022\013\n\007REQUEST\020\000\022\014\n\010RESPONSE\020\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_deps[1] = {
  &::descriptor_table_sofa_2fpbrpc_2frpc_5foption_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_sccs[1] = {
  &scc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto = {
  false, false, descriptor_table_protodef_sofa_2fpbrpc_2frpc_5fmeta_2eproto, "sofa/pbrpc/rpc_meta.proto", 397,
  &descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_once, descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_sccs, descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sofa_2fpbrpc_2frpc_5fmeta_2eproto::offsets,
  file_level_metadata_sofa_2fpbrpc_2frpc_5fmeta_2eproto, 1, file_level_enum_descriptors_sofa_2fpbrpc_2frpc_5fmeta_2eproto, file_level_service_descriptors_sofa_2fpbrpc_2frpc_5fmeta_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sofa_2fpbrpc_2frpc_5fmeta_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto)), true);
namespace sofa {
namespace pbrpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RpcMeta_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sofa_2fpbrpc_2frpc_5fmeta_2eproto);
  return file_level_enum_descriptors_sofa_2fpbrpc_2frpc_5fmeta_2eproto[0];
}
bool RpcMeta_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr RpcMeta_Type RpcMeta::REQUEST;
constexpr RpcMeta_Type RpcMeta::RESPONSE;
constexpr RpcMeta_Type RpcMeta::Type_MIN;
constexpr RpcMeta_Type RpcMeta::Type_MAX;
constexpr int RpcMeta::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void RpcMeta::InitAsDefaultInstance() {
}
class RpcMeta::_Internal {
 public:
};

RpcMeta::RpcMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:sofa.pbrpc.RpcMeta)
}
RpcMeta::RpcMeta(const RpcMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  method_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_method().empty()) {
    method_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_method(),
      GetArena());
  }
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_reason().empty()) {
    reason_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_reason(),
      GetArena());
  }
  ::memcpy(&sequence_id_, &from.sequence_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&compress_type_) -
    reinterpret_cast<char*>(&sequence_id_)) + sizeof(compress_type_));
  // @@protoc_insertion_point(copy_constructor:sofa.pbrpc.RpcMeta)
}

void RpcMeta::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto.base);
  method_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&sequence_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&compress_type_) -
      reinterpret_cast<char*>(&sequence_id_)) + sizeof(compress_type_));
}

RpcMeta::~RpcMeta() {
  // @@protoc_insertion_point(destructor:sofa.pbrpc.RpcMeta)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RpcMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  method_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  reason_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RpcMeta::ArenaDtor(void* object) {
  RpcMeta* _this = reinterpret_cast< RpcMeta* >(object);
  (void)_this;
}
void RpcMeta::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RpcMeta::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RpcMeta& RpcMeta::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RpcMeta_sofa_2fpbrpc_2frpc_5fmeta_2eproto.base);
  return *internal_default_instance();
}


void RpcMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:sofa.pbrpc.RpcMeta)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  method_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  reason_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&sequence_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&compress_type_) -
      reinterpret_cast<char*>(&sequence_id_)) + sizeof(compress_type_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RpcMeta::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .sofa.pbrpc.RpcMeta.Type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::sofa::pbrpc::RpcMeta_Type>(val));
        } else goto handle_unusual;
        continue;
      // uint64 sequence_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          sequence_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string method = 100;
      case 100:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_method();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "sofa.pbrpc.RpcMeta.method"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 server_timeout = 101;
      case 101:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          server_timeout_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool failed = 200;
      case 200:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          failed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 error_code = 201;
      case 201:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          error_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string reason = 202;
      case 202:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_reason();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "sofa.pbrpc.RpcMeta.reason"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .sofa.pbrpc.CompressType compress_type = 300;
      case 300:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_compress_type(static_cast<::sofa::pbrpc::CompressType>(val));
        } else goto handle_unusual;
        continue;
      // .sofa.pbrpc.CompressType expected_response_compress_type = 301;
      case 301:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 104)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_expected_response_compress_type(static_cast<::sofa::pbrpc::CompressType>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RpcMeta::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sofa.pbrpc.RpcMeta)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .sofa.pbrpc.RpcMeta.Type type = 1;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // uint64 sequence_id = 2;
  if (this->sequence_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_sequence_id(), target);
  }

  // string method = 100;
  if (this->method().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_method().data(), static_cast<int>(this->_internal_method().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "sofa.pbrpc.RpcMeta.method");
    target = stream->WriteStringMaybeAliased(
        100, this->_internal_method(), target);
  }

  // int64 server_timeout = 101;
  if (this->server_timeout() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(101, this->_internal_server_timeout(), target);
  }

  // bool failed = 200;
  if (this->failed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(200, this->_internal_failed(), target);
  }

  // int32 error_code = 201;
  if (this->error_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(201, this->_internal_error_code(), target);
  }

  // string reason = 202;
  if (this->reason().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_reason().data(), static_cast<int>(this->_internal_reason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "sofa.pbrpc.RpcMeta.reason");
    target = stream->WriteStringMaybeAliased(
        202, this->_internal_reason(), target);
  }

  // .sofa.pbrpc.CompressType compress_type = 300;
  if (this->compress_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      300, this->_internal_compress_type(), target);
  }

  // .sofa.pbrpc.CompressType expected_response_compress_type = 301;
  if (this->expected_response_compress_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      301, this->_internal_expected_response_compress_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sofa.pbrpc.RpcMeta)
  return target;
}

size_t RpcMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sofa.pbrpc.RpcMeta)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string method = 100;
  if (this->method().size() > 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_method());
  }

  // string reason = 202;
  if (this->reason().size() > 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_reason());
  }

  // uint64 sequence_id = 2;
  if (this->sequence_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sequence_id());
  }

  // .sofa.pbrpc.CompressType expected_response_compress_type = 301;
  if (this->expected_response_compress_type() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_expected_response_compress_type());
  }

  // .sofa.pbrpc.RpcMeta.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  // bool failed = 200;
  if (this->failed() != 0) {
    total_size += 2 + 1;
  }

  // int64 server_timeout = 101;
  if (this->server_timeout() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_server_timeout());
  }

  // int32 error_code = 201;
  if (this->error_code() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_error_code());
  }

  // .sofa.pbrpc.CompressType compress_type = 300;
  if (this->compress_type() != 0) {
    total_size += 2 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_compress_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RpcMeta::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sofa.pbrpc.RpcMeta)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcMeta* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RpcMeta>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sofa.pbrpc.RpcMeta)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sofa.pbrpc.RpcMeta)
    MergeFrom(*source);
  }
}

void RpcMeta::MergeFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sofa.pbrpc.RpcMeta)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.method().size() > 0) {
    _internal_set_method(from._internal_method());
  }
  if (from.reason().size() > 0) {
    _internal_set_reason(from._internal_reason());
  }
  if (from.sequence_id() != 0) {
    _internal_set_sequence_id(from._internal_sequence_id());
  }
  if (from.expected_response_compress_type() != 0) {
    _internal_set_expected_response_compress_type(from._internal_expected_response_compress_type());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.failed() != 0) {
    _internal_set_failed(from._internal_failed());
  }
  if (from.server_timeout() != 0) {
    _internal_set_server_timeout(from._internal_server_timeout());
  }
  if (from.error_code() != 0) {
    _internal_set_error_code(from._internal_error_code());
  }
  if (from.compress_type() != 0) {
    _internal_set_compress_type(from._internal_compress_type());
  }
}

void RpcMeta::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sofa.pbrpc.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMeta::CopyFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sofa.pbrpc.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMeta::IsInitialized() const {
  return true;
}

void RpcMeta::InternalSwap(RpcMeta* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  method_.Swap(&other->method_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  reason_.Swap(&other->reason_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RpcMeta, compress_type_)
      + sizeof(RpcMeta::compress_type_)
      - PROTOBUF_FIELD_OFFSET(RpcMeta, sequence_id_)>(
          reinterpret_cast<char*>(&sequence_id_),
          reinterpret_cast<char*>(&other->sequence_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RpcMeta::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pbrpc
}  // namespace sofa
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sofa::pbrpc::RpcMeta* Arena::CreateMaybeMessage< ::sofa::pbrpc::RpcMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sofa::pbrpc::RpcMeta >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
