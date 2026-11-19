#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtMultimedia>
#include <QSurfaceFormat>
#include <QQuickWindow> // <-- Asegúrate de incluir esto

#include "ul.h"
#include "qmlclipboardadapter.h"
#include "qmlerrorlogger.h"
#include "swissephmanager.h"
#include "androidshare.h"

int main(int argc, char *argv[])
{
    // 1. FUERZA el backend gráfico de OpenGL para Quick3D ANTES de crear la app
    QQuickWindow::setGraphicsApi(QSGRendererInterface::OpenGL);

    // 2. Formato de superficie obligatorio para evitar el crash del contexto EGL
    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    format.setSamples(4);
    QSurfaceFormat::setDefaultFormat(format);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QCoreApplication::setOrganizationName("Unikode.org");
    QCoreApplication::setApplicationName("Runik");


    UL u;
    u.setEngine(&engine);
    if(!u.isStorageManagerGranted()){
        u.checkPermissions();
    }
    //-->Preset App Name
    QByteArray presetFilePath="";
    presetFilePath.append(qApp->applicationDirPath().toUtf8());
    presetFilePath.append("/preset");

    QString presetAppName="";
    if(u.fileExist(presetFilePath)){
        presetAppName.append(u.getFile(presetFilePath));
        presetAppName=presetAppName.replace("\n", "");
    }else{
        presetAppName.append("Runik");    }

    qDebug()<<"Runing "<<presetAppName<<"...";
    //<--Preset App Name

    //Clipboard function for GNU/Linux, Windows and Macos
//#ifndef Q_OS_ANDROID
    QmlClipboardAdapter clipboard;
    AndroidShare androidShare;
//#endif


    // Exponer la instancia al contexto raíz de QML
    QmlErrorLogger logger;
    engine.rootContext()->setContextProperty("qmlErrorLogger", &logger);
    engine.rootContext()->setContextProperty("errorDeQml", &logger);

    //<--Register Types
    qmlRegisterType<UL>("unik.Unik", 1, 0, "Unik");
    qmlRegisterType<UnikQProcess>("unik.UnikQProcess", 1, 0, "UnikQProcess");
    qmlRegisterType<SwissEphManager>("swe", 1, 0, "Swe");
    engine.rootContext()->setContextProperty("unik", &u);
    engine.rootContext()->setContextProperty("engine", &engine);
    engine.rootContext()->setContextProperty("clipboard", &clipboard);
    engine.rootContext()->setContextProperty("AndroidShare", &androidShare);
#ifdef Q_OS_ANDROID
    engine.addImportPath("assets:/modules");
#else
    engine.addImportPath("/home/ns/nsp/zoolandv2/android/assets/modules");
#endif
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    //engine.loadFromModule("zoolandv2", "Main");
    //engine.load("qrc:/Main.qml");
    // Reemplaza estas líneas al final de tu main.cpp:
    // engine.load("qrc:/Main.qml");

    // Utiliza la forma recomendada y segura para Qt 6.11 con módulos QML:
    const QUrl url(QStringLiteral("qrc:/qt/qml/org/unikode/runik/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    //engine.load(url);
    engine.load("qrc:/Main.qml");

    return QCoreApplication::exec();
}
