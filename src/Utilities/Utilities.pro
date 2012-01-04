TARGET = utilities
TEMPLATE = lib
DESTDIR = ../../bin
DEFINES += SERVER_SIDE
DEFINES -= UNICODE
SOURCES += otherwidgets.cpp \
    mtrand.cpp \
    functions.cpp \
    CrossDynamicLib.cpp \
    contextswitch.cpp \
    coro.c \
    coreclasses.cpp
HEADERS += otherwidgets.h \
    mtrand.h \
    functions.h \
    CrossDynamicLib.h \
    coro.h \
    contextswitch.h \
    coreclasses.h
OTHER_FILES += 
QMAKE_CXXFLAGS += "-std=c++0x -U__STRICT_ANSI__"
