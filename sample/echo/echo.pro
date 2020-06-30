#-------------------------------------------------
#
# Project created by QtCreator 2015-06-30T14:43:15
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

include(../../src/hrpc.pri)

DESTDIR = $$PWD/../../bin
CONFIG(debug, debug|release) {
        TARGET = echod
} else {
        TARGET = echo
}

SOURCES += \
    server.cc \
    echo_service.pb.cc

HEADERS += \
    echo_service.pb.h
