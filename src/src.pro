#-------------------------------------------------
#
# Project created by QtCreator 2015-06-30T14:43:15
TEMPLATE = lib
CONFIG += staticlib c++11
CONFIG -= app_bundle qt

include(src.pri)

CONFIG(debug, debug|release) {
        TARGET = sofa-hrpcd
} else {
        TARGET = sofa-hrpc
}

#DEFINES += SOFA_PBRPC_ENABLE_FUNCTION_TRACE

DESTDIR = $$PWD/../../src/bin
HEADERS += \
    sofa/pbrpc/http-agent/http_agent.h \
    sofa/pbrpc/ascii.h \
    sofa/pbrpc/bin2ascii.h \
    sofa/pbrpc/binary_rpc_request.h \
    sofa/pbrpc/binary_rpc_request_parser.h \
    sofa/pbrpc/block_wrappers.h \
    sofa/pbrpc/buf_handle.h \
    sofa/pbrpc/buffer.h \
    sofa/pbrpc/builtin_service_impl.h \
    sofa/pbrpc/closure.h \
    sofa/pbrpc/closure_helper.h \
    sofa/pbrpc/common.h \
    sofa/pbrpc/common_internal.h \
    sofa/pbrpc/compressed_stream.h \
    sofa/pbrpc/condition_variable.h \
    sofa/pbrpc/counter.h \
    sofa/pbrpc/dynamic_rpc_channel_impl.h \
    sofa/pbrpc/ext_closure.h \
    sofa/pbrpc/flow_controller.h \
    sofa/pbrpc/func_tracer.h \
    sofa/pbrpc/gzip_stream.h \
    sofa/pbrpc/http.h \
    sofa/pbrpc/http_rpc_request.h \
    sofa/pbrpc/http_rpc_request_parser.h \
    sofa/pbrpc/io_service.h \
    sofa/pbrpc/io_service_pool.h \
    sofa/pbrpc/atomic.h \
    sofa/pbrpc/locks.h \
    sofa/pbrpc/lz4.h \
    sofa/pbrpc/mock_test_helper.h \
    sofa/pbrpc/mock_test_helper_impl.h \
    sofa/pbrpc/murmurhash.h \
    sofa/pbrpc/pbjson.h \
    sofa/pbrpc/pbrpc.h \
    sofa/pbrpc/pprof_perl.h \
    sofa/pbrpc/profiling.h \
    sofa/pbrpc/profiling_linker.h \
    sofa/pbrpc/ptime.h \
    sofa/pbrpc/rpc_byte_stream.h \
    sofa/pbrpc/rpc_channel.h \
    sofa/pbrpc/rpc_channel_impl.h \
    sofa/pbrpc/rpc_client.h \
    sofa/pbrpc/rpc_client_impl.h \
    sofa/pbrpc/rpc_client_stream.h \
    sofa/pbrpc/rpc_controller.h \
    sofa/pbrpc/rpc_controller_impl.h \
    sofa/pbrpc/rpc_endpoint.h \
    sofa/pbrpc/rpc_error_code.h \
    sofa/pbrpc/rpc_listener.h \
    sofa/pbrpc/rpc_message_header.h \
    sofa/pbrpc/rpc_message_stream.h \
    sofa/pbrpc/rpc_request.h \
    sofa/pbrpc/rpc_request_parser.h \
    sofa/pbrpc/rpc_server.h \
    sofa/pbrpc/rpc_server_impl.h \
    sofa/pbrpc/rpc_server_message_stream.h \
    sofa/pbrpc/rpc_server_stream.h \
    sofa/pbrpc/rpc_timeout_manager.h \
    sofa/pbrpc/service_pool.h \
    sofa/pbrpc/simple_rpc_channel_impl.h \
    sofa/pbrpc/string_utils.h \
    sofa/pbrpc/thread_group.h \
    sofa/pbrpc/thread_group_impl.h \
    sofa/pbrpc/timeout_manager.h \
    sofa/pbrpc/timeout_manager_impl.h \
    sofa/pbrpc/timer_worker.h \
    sofa/pbrpc/tran_buf_pool.h \
    sofa/pbrpc/viz_min_js.h \
    sofa/pbrpc/wait_event.h \
    sofa/pbrpc/web_service.h \
    sofa/pbrpc/builtin_service.pb.h \
    sofa/pbrpc/rpc_meta.pb.h \
    sofa/pbrpc/rpc_option.pb.h

SOURCES += \
    sofa/pbrpc/http-agent/http_agent.cc \
    sofa/pbrpc/http-agent/sofa_pbrpc_client.cc \
    sofa/pbrpc/binary_rpc_request.cc \
    sofa/pbrpc/binary_rpc_request_parser.cc \
    sofa/pbrpc/block_wrappers.cc \
    sofa/pbrpc/boost_system_error_code.cc \
    sofa/pbrpc/buffer.cc \
    sofa/pbrpc/builtin_service_impl.cc \
    sofa/pbrpc/common.cc \
    sofa/pbrpc/common_internal.cc \
    sofa/pbrpc/compressed_stream.cc \
    sofa/pbrpc/dynamic_rpc_channel_impl.cc \
    sofa/pbrpc/gzip_stream.cc \
    sofa/pbrpc/http_rpc_request.cc \
    sofa/pbrpc/http_rpc_request_parser.cc \
    sofa/pbrpc/io_service_pool.cc \
    sofa/pbrpc/lz4.cc \
    sofa/pbrpc/mock_test_helper.cc \
    sofa/pbrpc/pbjson.cc \
    sofa/pbrpc/profiling.cc \
    sofa/pbrpc/rpc_channel.cc \
    sofa/pbrpc/rpc_client.cc \
    sofa/pbrpc/rpc_client_impl.cc \
    sofa/pbrpc/rpc_controller.cc \
    sofa/pbrpc/rpc_endpoint.cc \
    sofa/pbrpc/rpc_error_code.cc \
    sofa/pbrpc/rpc_request.cc \
    sofa/pbrpc/rpc_request_parser.cc \
    sofa/pbrpc/rpc_server.cc \
    sofa/pbrpc/rpc_server_impl.cc \
    sofa/pbrpc/simple_rpc_channel_impl.cc \
    sofa/pbrpc/string_utils.cc \
    sofa/pbrpc/tcmalloc_extension_helper.cc \
    sofa/pbrpc/thread_group.cc \
    sofa/pbrpc/timeout_manager.cc \
    sofa/pbrpc/timeout_manager_impl.cc \
    sofa/pbrpc/web_service.cc \
    sofa/pbrpc/builtin_service.pb.cc \
    sofa/pbrpc/rpc_meta.pb.cc \
    sofa/pbrpc/rpc_option.pb.cc
