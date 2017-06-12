#pragma once

#include <QtCore/QObject>

#include <nodes/NodeDataModel>

#include <iostream>
#include <type_traits>
#include <functional>

class ExpressionRangeData;

class QWidget;
class QLabel;
class QComboBox;

using QtNodes::PortType;
using QtNodes::PortIndex;
using QtNodes::NodeData;
using QtNodes::NodeDataType;
using QtNodes::NodeDataModel;
using QtNodes::NodeValidationState;

using FunctionPtr = std::function<double(double)>;
//std::add_pointer<double(double)>::type;

using NameAndFunction = std::tuple<QString, QString, FunctionPtr>;

/// The model dictates the number of inputs and outputs for the Node.
/// In this example it has no logic.
class MathFunctionModel
  : public NodeDataModel
{
  Q_OBJECT

public:
  MathFunctionModel();

  virtual
  ~MathFunctionModel() {}

public:

  QString
  caption() const override
  { return QStringLiteral("Math Function"); }

  bool
  captionVisible() const override
  { return true; }

  QString
  name() const override
  { return QStringLiteral("Math Function"); }

  std::unique_ptr<NodeDataModel>
  clone() const override
  { return std::make_unique<MathFunctionModel>(); }

public:

  QJsonObject
  save() const override;

  void
  restore(QJsonObject const &p) override;

public:

  unsigned int
  nPorts(PortType portType) const override;

  NodeDataType
  dataType(PortType portType, PortIndex portIndex) const override;

  std::shared_ptr<NodeData>
  outData(PortIndex port) override;

  void
  setInData(std::shared_ptr<NodeData>, PortIndex) override;

  QWidget *
  embeddedWidget() override;

private:

  QString
  convertRangeToText(std::vector<double> const &range) const;

  std::vector<double>
  applyFunction(std::vector<double> const &range) const;

  void
  processData();

  void
  createNameAndFunctions();

private slots:

  void
  onFunctionIndexChanged(int index);

private:

  std::weak_ptr<ExpressionRangeData> _inputExpression;
  std::shared_ptr<ExpressionRangeData> _expression;

  QWidget * _widget;

  QComboBox * _functionComboBox;

  QLabel * _variableLabel;
  QLabel * _rangeLabel;

  std::vector<NameAndFunction> _nameAndFunctions;
};
