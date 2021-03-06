#include <QGuiApplication>
#include <QQuickView>
#include "Dashboard.h"
#include "Ringboard.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<Dashboard>("Boards", 1, 0, "Dashboard");
    qmlRegisterType<Ringboard>("Boards", 1, 0, "Ringboard");
//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
//    if (engine.rootObjects().isEmpty())
//        return -1;

    QQuickView view;
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view.show();
    return app.exec();
}
