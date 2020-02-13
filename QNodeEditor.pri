QT +=           core widgets gui

DEFINES +=      NODE_EDITOR_SHARED NODE_EDITOR_EXPORTS

SOURCES +=      $$PWD/src/Connection.cpp                                              \
                $$PWD/src/ConnectionBlurEffect.cpp                                    \
                $$PWD/src/ConnectionGeometry.cpp                                      \
                $$PWD/src/ConnectionGraphicsObject.cpp                                \
                $$PWD/src/ConnectionPainter.cpp                                       \
                $$PWD/src/ConnectionState.cpp                                         \
                $$PWD/src/ConnectionStyle.cpp                                         \
                $$PWD/src/DataModelRegistry.cpp                                       \
                $$PWD/src/FlowScene.cpp                                               \
                $$PWD/src/FlowView.cpp                                                \
                $$PWD/src/FlowViewStyle.cpp                                           \
                $$PWD/src/Node.cpp                                                    \
                $$PWD/src/NodeConnectionInteraction.cpp                               \
                $$PWD/src/NodeDataModel.cpp                                           \
                $$PWD/src/NodeGeometry.cpp                                            \
                $$PWD/src/NodeGraphicsObject.cpp                                      \
                $$PWD/src/NodePainter.cpp                                             \
                $$PWD/src/NodeState.cpp                                               \
                $$PWD/src/NodeStyle.cpp                                               \
                $$PWD/src/Properties.cpp                                              \
                $$PWD/src/StyleCollection.cpp

INCLUDEPATH +=  $$PWD/src/                                                            \
                $$PWD/include/                                                        \
                $$PWD/include/nodes/                                                  \
                $$PWD/include/nodes/internal

HEADERS +=      $$PWD/src/ConnectionBlurEffect.hpp                                    \
                $$PWD/src/ConnectionPainter.hpp                                       \
                $$PWD/src/NodeConnectionInteraction.hpp                               \
                $$PWD/src/NodePainter.hpp                                             \
                $$PWD/src/Properties.hpp                                              \
                $$PWD/src/StyleCollection.hpp                                         \
                $$PWD/include/nodes/internal/Compiler.hpp                             \
                $$PWD/include/nodes/internal/Connection.hpp                           \
                $$PWD/include/nodes/internal/ConnectionGeometry.hpp                   \
                $$PWD/include/nodes/internal/ConnectionGraphicsObject.hpp             \
                $$PWD/include/nodes/internal/ConnectionState.hpp                      \
                $$PWD/include/nodes/internal/ConnectionStyle.hpp                      \
                $$PWD/include/nodes/internal/DataModelRegistry.hpp                    \
                $$PWD/include/nodes/internal/Export.hpp                               \
                $$PWD/include/nodes/internal/FlowScene.hpp                            \
                $$PWD/include/nodes/internal/FlowView.hpp                             \
                $$PWD/include/nodes/internal/FlowViewStyle.hpp                        \
                $$PWD/include/nodes/internal/memory.hpp                               \
                $$PWD/include/nodes/internal/Node.hpp                                 \
                $$PWD/include/nodes/internal/NodeData.hpp                             \
                $$PWD/include/nodes/internal/NodeDataModel.hpp                        \
                $$PWD/include/nodes/internal/NodeGeometry.hpp                         \
                $$PWD/include/nodes/internal/NodeGraphicsObject.hpp                   \
                $$PWD/include/nodes/internal/NodePainterDelegate.hpp                  \
                $$PWD/include/nodes/internal/NodeState.hpp                            \
                $$PWD/include/nodes/internal/NodeStyle.hpp                            \
                $$PWD/include/nodes/internal/OperatingSystem.hpp                      \
                $$PWD/include/nodes/internal/PortType.hpp                             \
                $$PWD/include/nodes/internal/QStringStdHash.hpp                       \
                $$PWD/include/nodes/internal/QUuidStdHash.hpp                         \
                $$PWD/include/nodes/internal/Serializable.hpp                         \
                $$PWD/include/nodes/internal/Style.hpp                                \
                $$PWD/include/nodes/internal/TypeConverter.hpp

RESOURCES +=    \
    $$PWD/resources/QNodeEditor_resources.qrc
