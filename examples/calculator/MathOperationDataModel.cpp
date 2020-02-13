#include "MathOperationDataModel.hpp"
#include "DecimalData.hpp"

unsigned int MathOperationModel::nPorts(PortType portType) const
{
    unsigned int result;

    if (portType == PortType::In)
        result = 2;
    else
        result = 1;

    return result;
}


NodeDataType
MathOperationModel::
dataType(PortType, PortIndex) const
{
    return DecimalData().type();
}


std::shared_ptr<NodeData>
MathOperationModel::
outData(PortIndex)
{
    return std::static_pointer_cast<NodeData>(_result);
}


void
MathOperationModel::
setInData(std::shared_ptr<NodeData> data, PortIndex portIndex)
{
    auto numberData =
        std::dynamic_pointer_cast<DecimalData>(data);

    if (portIndex == 0) {
        _number1 = numberData;
    } else {
        _number2 = numberData;
    }

    compute();
}


NodeValidationState
MathOperationModel::
validationState() const
{
    return modelValidationState;
}


QString
MathOperationModel::
validationMessage() const
{
    return modelValidationError;
}
