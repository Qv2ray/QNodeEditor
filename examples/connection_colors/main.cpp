#include <QtWidgets/QApplication>

#include <NodeData.hpp>
#include <FlowScene.hpp>
#include <FlowView.hpp>
#include <DataModelRegistry.hpp>
#include <ConnectionStyle.hpp>

#include "models.hpp"

using QtNodes::DataModelRegistry;
using QtNodes::FlowScene;
using QtNodes::FlowView;
using QtNodes::ConnectionStyle;

static std::shared_ptr<DataModelRegistry>
registerDataModels()
{
    auto ret = std::make_shared<DataModelRegistry>();
    ret->registerModel<NaiveDataModel>();
    /*
       We could have more models registered.
       All of them become items in the context meny of the scene.

       ret->registerModel<AnotherDataModel>();
       ret->registerModel<OneMoreDataModel>();

     */
    return ret;
}


static
void
setStyle()
{
    ConnectionStyle::setConnectionStyle(
        R"(
  {
    "ConnectionStyle": {
      "UseDataDefinedColors": true
    }
  }
  )");
}


//------------------------------------------------------------------------------

int
main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    setStyle();
    FlowScene scene(registerDataModels());
    FlowView view(&scene);
    view.setWindowTitle("Node-based flow editor");
    view.resize(800, 600);
    view.show();
    return app.exec();
}
