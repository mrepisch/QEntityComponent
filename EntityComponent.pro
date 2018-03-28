#-------------------------------------------------
#
# Project created by QtCreator 2018-03-26T08:27:46
#
#-------------------------------------------------


QT       -= gui

TARGET = EntityComponent
TEMPLATE = lib

DEFINES += ENTITYCOMPONENT_LIBRARY

SOURCES += Component.cpp \
    Entity.cpp \
    System.cpp \
    Event.cpp \
    Systemcontainer.cpp

HEADERS += Component.h\
        entitycomponent_global.h \
    Entity.h \
    System.h \
    Event.h \
    Systemcontainer.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
