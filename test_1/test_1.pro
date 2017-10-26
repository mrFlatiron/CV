#-------------------------------------------------
#
# Project created by QtCreator 2017-10-26T17:01:35
#
#-------------------------------------------------


TARGET = test_1
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    utils.cpp

LIBS += `pkg-config opencv --cflags --libs`

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    utils.h
