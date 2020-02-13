TARGET   = ConnectionColor
TEMPLATE = app

CONFIG += qt c++11
QT += gui

include(../../QNodeEditor.pri)

HEADERS +=  $$PWD/models.hpp

INCLUDEPATH += $$PWD

SOURCES +=  $$PWD/main.cpp \
            $$PWD/models.cpp
