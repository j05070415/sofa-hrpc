
include(depends.pri)
INCLUDEPATH += $$HRPC_ROOT/third/hrpc
LIBS += -L$$HRPC_ROOT/src/bin

win32 {
CONFIG(debug, debug|release) {
        QMAKE_CXXFLAGS_DEBUG = -MDd
        LIBS += -lsofa-hrpcd -llibprotobufd -lsnappyd -lzlibwapi
} else {
        QMAKE_CXXFLAGS_RELEASE = -Od -ZI -MD
        QMAKE_LFLAGS_RELEASE = /DEBUG /INCREMENTAL:NO

        LIBS += -lsofa-hrpc -llibprotobuf -lsnappy -lzlibwapi
}
}

linux {
LIBS +=
CONFIG(debug, debug|release) {
        LIBS += -lsofa-hrpcd -lprotobuf -lz -lsnappy -lboost_filesystem -lpthread
        TARGET = echod
} else {
        LIBS += -lsofa-hrpc -lprotobuf -lz -lsnappy -lboost_filesystem -lpthread
        TARGET = echo
}
}
