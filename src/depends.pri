
linux {
CONFIG += c++17
HRPC_ROOT=/home/swj/Codes/hrpc
}

win32 {
CONFIG += c++11
HRPC_ROOT=$$PWD/..
}

RAPID_JSON=$$HRPC_ROOT/third/rapidjson
BOOST_DIR=$$HRPC_ROOT/third/boost
PROTOBUF_DIR=$$HRPC_ROOT/third/protobuf
SNAPPY_DIR=$$HRPC_ROOT/third/snappy
ZLIB_DIR=$$HRPC_ROOT/third/zlib

INCLUDEPATH += $$BOOST_DIR/include $$RAPID_JSON $$PROTOBUF_DIR/include \
        $$SNAPPY_DIR/include $$ZLIB_DIR/include

LIBS += -L$$BOOST_DIR/lib -L$$PROTOBUF_DIR/lib -L$$SNAPPY_DIR/lib \
    -L$$ZLIB_DIR/lib

