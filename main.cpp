#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "QChart.h"
#include "QChart_Enum.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<QChart>("CustomChart", 1, 0, "QChart");
    qmlRegisterUncreatableType<QChart_Enum>("CustomChart", 1, 0, "Chart", "uncreateble");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
