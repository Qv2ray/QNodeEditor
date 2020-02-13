TARGET   = Calculator
TEMPLATE = app

CONFIG += qt c++11
QT += gui

include(../../QNodeEditor.pri)

HEADERS +=  $$PWD/AdditionModel.hpp                        \
            $$PWD/Converters.hpp                           \
            $$PWD/DecimalData.hpp                          \
            $$PWD/DivisionModel.hpp                        \
            $$PWD/IntegerData.hpp                          \
            $$PWD/ModuloModel.hpp                          \
            $$PWD/MathOperationDataModel.hpp               \
            $$PWD/MultiplicationModel.hpp                  \
            $$PWD/NumberDisplayDataModel.hpp               \
            $$PWD/NumberSourceDataModel.hpp                \
            $$PWD/SubtractionModel.hpp

INCLUDEPATH += $$PWD

SOURCES +=  $$PWD/Converters.cpp                           \
            $$PWD/main.cpp                                 \
            $$PWD/MathOperationDataModel.cpp               \
            $$PWD/ModuloModel.cpp                          \
            $$PWD/NumberDisplayDataModel.cpp               \
            $$PWD/NumberSourceDataModel.cpp
