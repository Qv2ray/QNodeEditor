#pragma once

#include <NodeDataModel.hpp>
#include <QtCore/QObject>
#include <QtWidgets/QLabel>
#include <iostream>

using QtNodes::NodeData;
using QtNodes::NodeDataModel;
using QtNodes::NodeDataType;
using QtNodes::NodeValidationState;
using QtNodes::PortIndex;
using QtNodes::PortType;

/// The model dictates the number of inputs and outputs for the Node.
/// In this example it has no logic.
class NumberDisplayDataModel : public NodeDataModel
{
    Q_OBJECT

  public:
    NumberDisplayDataModel();

    virtual ~NumberDisplayDataModel() {}

  public:
    QString caption() const override { return QStringLiteral("Result"); }

    bool captionVisible() const override { return false; }

    QString name() const override { return QStringLiteral("Result"); }

  public:
    unsigned int nPorts(PortType portType) const override;

    NodeDataType dataType(PortType portType, PortIndex portIndex) const override;

    std::shared_ptr<NodeData> outData(PortIndex port) override;

    void setInData(std::shared_ptr<NodeData> data, int) override;

    QWidget *embeddedWidget() override { return _label; }

    NodeValidationState validationState() const override;

    QString validationMessage() const override;

  private:
    NodeValidationState modelValidationState = NodeValidationState::Warning;
    QString modelValidationError = QStringLiteral("Missing or incorrect inputs");

    QLabel *_label;
};
