
include(depends.pri)

win32 {
DEFINES -= UNICODE
CONFIG(debug, debug|release) {
        QMAKE_CXXFLAGS_DEBUG = -MDd
        LIBS += -llibprotobufd -lsnappyd -lzlibwapi
} else {
        QMAKE_CXXFLAGS_RELEASE = -Od -ZI -MD
        QMAKE_LFLAGS_RELEASE = /DEBUG /INCREMENTAL:NO

        LIBS += -llibprotobuf -lsnappy -lzlibwapi
}
}
