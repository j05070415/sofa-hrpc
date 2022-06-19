
set PROTO_INCLUDE=%~dp0

echo %PROTO_INCLUDE%

protoc --proto_path=. --proto_path=E:\Codes\protobuf-3.12.3\src --cpp_out=. sofa/pbrpc/rpc_meta.proto sofa/pbrpc/rpc_option.proto sofa/pbrpc/builtin_service.proto

