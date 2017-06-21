#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "src/datastore.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    DataStore dt;
    context->setContextProperty("dataStore", &dt);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}
