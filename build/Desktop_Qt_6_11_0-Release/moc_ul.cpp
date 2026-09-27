/****************************************************************************
** Meta object code from reading C++ file 'ul.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ul.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ul.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN2ULE_t {};
} // unnamed namespace

template <> constexpr inline auto UL::qt_create_metaobjectdata<qt_meta_tag_ZN2ULE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UL",
        "log",
        "",
        "uWarningChanged",
        "porcChanged",
        "uploadStateChanged",
        "ukStdChanged",
        "stdErrChanged",
        "debugLogChanged",
        "runCLChanged",
        "downloadProgress",
        "bytesReceived",
        "bytesTotal",
        "downloadFinished",
        "success",
        "filePath",
        "encPrivateData",
        "d",
        "user",
        "key",
        "decPrivateData",
        "d0",
        "compData",
        "desCompData",
        "setStdErr",
        "s",
        "getInitStdString",
        "setInitStdString",
        "setDebugLog",
        "b",
        "getDebugLog",
        "setEngine",
        "QQmlApplicationEngine*",
        "e",
        "clearComponentCache",
        "addImportPath",
        "p",
        "getUWarning",
        "setUWarning",
        "uw",
        "getPorc",
        "setPorc",
        "mode",
        "getUploadState",
        "setUploadState",
        "us",
        "getStdErr",
        "getRunCL",
        "setRunCL",
        "cd",
        "path",
        "deleteFolder",
        "currentFolderPath",
        "currentFolderName",
        "deleteFile",
        "f",
        "setFile",
        "fileName",
        "fileData",
        "codec",
        "getFile",
        "n",
        "folderExist",
        "fileExist",
        "getFileList",
        "folder",
        "types",
        "isStorageManagerGranted",
        "checkPermissions",
        "mkdir",
        "isFolder",
        "getFolderFileList",
        "sqliteInit",
        "pathName",
        "sqlQuery",
        "query",
        "getSqlData",
        "QList<QObject*>",
        "mysqlInit",
        "hostName",
        "dataBaseName",
        "userName",
        "password",
        "firtOrSecondDB",
        "setMySqlDatabase",
        "databaseName",
        "sqliteClose",
        "restart",
        "args",
        "newWorkingDirectory",
        "restartApp",
        "run",
        "commandLine",
        "waitingForFinished",
        "milliseconds",
        "writeRun",
        "data",
        "runOut",
        "lineaDeComando",
        "salidaRun",
        "salidaRunError",
        "finalizaRun",
        "htmlEscaped",
        "sleep",
        "ms",
        "getPath",
        "encData",
        "decData",
        "mainWindow",
        "QQuickWindow*",
        "setProperty",
        "name",
        "QVariant",
        "value",
        "getProperty",
        "getEngineObjectsCount",
        "isRPI",
        "getHttpFile",
        "url",
        "downloadGitHubZip",
        "outputFileName",
        "uncompressZip",
        "zipFilePath",
        "destinationDir",
        "sendFile",
        "file",
        "phpReceiver",
        "porc",
        "uploadState",
        "runCL",
        "debugLog",
        "ukStd",
        "stdErr",
        "initStdString",
        "uWarning"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'log'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'uWarningChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'porcChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'uploadStateChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ukStdChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stdErrChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'debugLogChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'runCLChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'downloadProgress'
        QtMocHelpers::SignalData<void(qint64, qint64)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 11 }, { QMetaType::LongLong, 12 },
        }}),
        // Signal 'downloadFinished'
        QtMocHelpers::SignalData<void(bool, QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 14 }, { QMetaType::QString, 15 },
        }}),
        // Slot 'encPrivateData'
        QtMocHelpers::SlotData<QString(QByteArray, QString, QString)>(16, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QByteArray, 17 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'decPrivateData'
        QtMocHelpers::SlotData<QString(QByteArray, QString, QString)>(20, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QByteArray, 21 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Slot 'compData'
        QtMocHelpers::SlotData<QString(QString)>(22, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'desCompData'
        QtMocHelpers::SlotData<QString(QString)>(23, 2, QMC::AccessPrivate, QMetaType::QString, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'setStdErr'
        QtMocHelpers::MethodData<void(QString)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Method 'getInitStdString'
        QtMocHelpers::MethodData<QString()>(26, 2, QMC::AccessPrivate, QMetaType::QString),
        // Method 'setInitStdString'
        QtMocHelpers::MethodData<void(QString)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Method 'setDebugLog'
        QtMocHelpers::MethodData<void(bool)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Method 'getDebugLog'
        QtMocHelpers::MethodData<bool()>(30, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Method 'setEngine'
        QtMocHelpers::MethodData<void(QQmlApplicationEngine *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Method 'clearComponentCache'
        QtMocHelpers::MethodData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'addImportPath'
        QtMocHelpers::MethodData<void(const QByteArray)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 36 },
        }}),
        // Method 'getUWarning'
        QtMocHelpers::MethodData<QString()>(37, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'setUWarning'
        QtMocHelpers::MethodData<void(QString)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 39 },
        }}),
        // Method 'getPorc'
        QtMocHelpers::MethodData<int()>(40, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'setPorc'
        QtMocHelpers::MethodData<void(int, int)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 36 }, { QMetaType::Int, 42 },
        }}),
        // Method 'getUploadState'
        QtMocHelpers::MethodData<QString()>(43, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'setUploadState'
        QtMocHelpers::MethodData<void(QString)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 45 },
        }}),
        // Method 'getStdErr'
        QtMocHelpers::MethodData<QString()>(46, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'getRunCL'
        QtMocHelpers::MethodData<bool()>(47, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'setRunCL'
        QtMocHelpers::MethodData<void(bool)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Method 'cd'
        QtMocHelpers::MethodData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 50 },
        }}),
        // Method 'deleteFolder'
        QtMocHelpers::MethodData<bool(const QString &)>(51, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 50 },
        }}),
        // Method 'currentFolderPath'
        QtMocHelpers::MethodData<QString()>(52, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'currentFolderName'
        QtMocHelpers::MethodData<QString()>(53, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'deleteFile'
        QtMocHelpers::MethodData<bool(QByteArray)>(54, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 55 },
        }}),
        // Method 'setFile'
        QtMocHelpers::MethodData<bool(QByteArray, QByteArray)>(56, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 57 }, { QMetaType::QByteArray, 58 },
        }}),
        // Method 'setFile'
        QtMocHelpers::MethodData<bool(QByteArray, QByteArray, QByteArray)>(56, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 57 }, { QMetaType::QByteArray, 58 }, { QMetaType::QByteArray, 59 },
        }}),
        // Method 'getFile'
        QtMocHelpers::MethodData<QString(QByteArray)>(60, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QByteArray, 61 },
        }}),
        // Method 'folderExist'
        QtMocHelpers::MethodData<bool(const QString &)>(62, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 50 },
        }}),
        // Method 'fileExist'
        QtMocHelpers::MethodData<bool(QByteArray)>(63, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 57 },
        }}),
        // Method 'getFileList'
        QtMocHelpers::MethodData<QList<QString>(QByteArray, const QStringList)>(64, 2, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::QByteArray, 65 }, { QMetaType::QStringList, 66 },
        }}),
        // Method 'isStorageManagerGranted'
        QtMocHelpers::MethodData<bool()>(67, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'checkPermissions'
        QtMocHelpers::MethodData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'mkdir'
        QtMocHelpers::MethodData<bool(const QString &)>(69, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 50 },
        }}),
        // Method 'isFolder'
        QtMocHelpers::MethodData<bool(const QString &)>(70, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 65 },
        }}),
        // Method 'getFolderFileList'
        QtMocHelpers::MethodData<QList<QString>(const QByteArray)>(71, 2, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::QByteArray, 65 },
        }}),
        // Method 'sqliteInit'
        QtMocHelpers::MethodData<bool(QString)>(72, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 73 },
        }}),
        // Method 'sqlQuery'
        QtMocHelpers::MethodData<bool(QString)>(74, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 75 },
        }}),
        // Method 'getSqlData'
        QtMocHelpers::MethodData<QList<QObject*>(QString)>(76, 2, QMC::AccessPublic, 0x80000000 | 77, {{
            { QMetaType::QString, 75 },
        }}),
        // Method 'mysqlInit'
        QtMocHelpers::MethodData<bool(QString, QString, QString, QString, int)>(78, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 79 }, { QMetaType::QString, 80 }, { QMetaType::QString, 81 }, { QMetaType::QString, 82 },
            { QMetaType::Int, 83 },
        }}),
        // Method 'setMySqlDatabase'
        QtMocHelpers::MethodData<void(QString, int)>(84, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 85 }, { QMetaType::Int, 83 },
        }}),
        // Method 'sqliteClose'
        QtMocHelpers::MethodData<void()>(86, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'restart'
        QtMocHelpers::MethodData<void(const QStringList &, const QString &)>(87, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 88 }, { QMetaType::QString, 89 },
        }}),
        // Method 'restartApp'
        QtMocHelpers::MethodData<void()>(90, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'restartApp'
        QtMocHelpers::MethodData<void(QString)>(90, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 88 },
        }}),
        // Method 'run'
        QtMocHelpers::MethodData<bool(QString)>(91, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 92 },
        }}),
        // Method 'run'
        QtMocHelpers::MethodData<bool(QString, bool, int)>(91, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 92 }, { QMetaType::Bool, 93 }, { QMetaType::Int, 94 },
        }}),
        // Method 'writeRun'
        QtMocHelpers::MethodData<void(QString)>(95, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 96 },
        }}),
        // Method 'runOut'
        QtMocHelpers::MethodData<bool(QString)>(97, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 98 },
        }}),
        // Method 'salidaRun'
        QtMocHelpers::MethodData<void()>(99, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'salidaRunError'
        QtMocHelpers::MethodData<void()>(100, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'finalizaRun'
        QtMocHelpers::MethodData<void(int)>(101, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 },
        }}),
        // Method 'log'
        QtMocHelpers::MethodData<void(QByteArray)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 17 },
        }}),
        // Method 'log'
        QtMocHelpers::MethodData<void(QByteArray, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 17 }, { QMetaType::Bool, 102 },
        }}),
        // Method 'sleep'
        QtMocHelpers::MethodData<void(int)>(103, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 104 },
        }}),
        // Method 'getPath'
        QtMocHelpers::MethodData<QString(int)>(105, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 50 },
        }}),
        // Method 'encData'
        QtMocHelpers::MethodData<QString(QByteArray, QString, QString)>(106, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QByteArray, 17 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Method 'decData'
        QtMocHelpers::MethodData<QString(QByteArray, QString, QString)>(107, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QByteArray, 21 }, { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Method 'mainWindow'
        QtMocHelpers::MethodData<QQuickWindow *(int)>(108, 2, QMC::AccessPublic, 0x80000000 | 109, {{
            { QMetaType::Int, 61 },
        }}),
        // Method 'setProperty'
        QtMocHelpers::MethodData<void(const QString, const QVariant &)>(110, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 111 }, { 0x80000000 | 112, 113 },
        }}),
        // Method 'getProperty'
        QtMocHelpers::MethodData<QVariant(const QString)>(114, 2, QMC::AccessPublic, 0x80000000 | 112, {{
            { QMetaType::QString, 111 },
        }}),
        // Method 'getEngineObjectsCount'
        QtMocHelpers::MethodData<int()>(115, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'isRPI'
        QtMocHelpers::MethodData<bool()>(116, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'getHttpFile'
        QtMocHelpers::MethodData<QByteArray(QByteArray)>(117, 2, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QByteArray, 118 },
        }}),
        // Method 'downloadGitHubZip'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(119, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 118 }, { QMetaType::QString, 120 },
        }}),
        // Method 'downloadGitHubZip'
        QtMocHelpers::MethodData<void(const QString &)>(119, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 118 },
        }}),
        // Method 'uncompressZip'
        QtMocHelpers::MethodData<bool(const QString &, const QString &)>(121, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 122 }, { QMetaType::QString, 123 },
        }}),
        // Method 'sendFile'
        QtMocHelpers::MethodData<void(QString, QString)>(124, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 125 }, { QMetaType::QString, 126 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'porc'
        QtMocHelpers::PropertyData<int>(127, QMetaType::Int, QMC::DefaultPropertyFlags, 2),
        // property 'uploadState'
        QtMocHelpers::PropertyData<QString>(128, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'runCL'
        QtMocHelpers::PropertyData<bool>(129, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'debugLog'
        QtMocHelpers::PropertyData<bool>(130, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 6),
        // property 'ukStd'
        QtMocHelpers::PropertyData<QString>(131, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'stdErr'
        QtMocHelpers::PropertyData<QString>(132, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'initStdString'
        QtMocHelpers::PropertyData<QString>(133, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'uWarning'
        QtMocHelpers::PropertyData<QString>(134, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UL, qt_meta_tag_ZN2ULE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UL::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2ULE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2ULE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN2ULE_t>.metaTypes,
    nullptr
} };

void UL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UL *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->log(); break;
        case 1: _t->uWarningChanged(); break;
        case 2: _t->porcChanged(); break;
        case 3: _t->uploadStateChanged(); break;
        case 4: _t->ukStdChanged(); break;
        case 5: _t->stdErrChanged(); break;
        case 6: _t->debugLogChanged(); break;
        case 7: _t->runCLChanged(); break;
        case 8: _t->downloadProgress((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 9: _t->downloadFinished((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: { QString _r = _t->encPrivateData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->decPrivateData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->compData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->desCompData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setStdErr((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: { QString _r = _t->getInitStdString();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->setInitStdString((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setDebugLog((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: { bool _r = _t->getDebugLog();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setEngine((*reinterpret_cast<std::add_pointer_t<QQmlApplicationEngine*>>(_a[1]))); break;
        case 20: _t->clearComponentCache(); break;
        case 21: _t->addImportPath((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 22: { QString _r = _t->getUWarning();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->setUWarning((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: { int _r = _t->getPorc();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setPorc((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 26: { QString _r = _t->getUploadState();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setUploadState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: { QString _r = _t->getStdErr();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->getRunCL();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setRunCL((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->cd((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: { bool _r = _t->deleteFolder((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { QString _r = _t->currentFolderPath();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 34: { QString _r = _t->currentFolderName();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->deleteFile((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->setFile((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->setFile((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->getFile((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->folderExist((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->fileExist((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { QList<QString> _r = _t->getFileList((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->isStorageManagerGranted();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->checkPermissions(); break;
        case 44: { bool _r = _t->mkdir((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->isFolder((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { QList<QString> _r = _t->getFolderFileList((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<QString>*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->sqliteInit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->sqlQuery((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { QList<QObject*> _r = _t->getSqlData((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->mysqlInit((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setMySqlDatabase((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 52: _t->sqliteClose(); break;
        case 53: _t->restart((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 54: _t->restartApp(); break;
        case 55: _t->restartApp((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: { bool _r = _t->run((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 57: { bool _r = _t->run((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->writeRun((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 59: { bool _r = _t->runOut((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->salidaRun(); break;
        case 61: _t->salidaRunError(); break;
        case 62: _t->finalizaRun((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 63: _t->log((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 64: _t->log((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 65: _t->sleep((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 66: { QString _r = _t->getPath((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->encData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 68: { QString _r = _t->decData((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 69: { QQuickWindow* _r = _t->mainWindow((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QQuickWindow**>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 71: { QVariant _r = _t->getProperty((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariant*>(_a[0]) = std::move(_r); }  break;
        case 72: { int _r = _t->getEngineObjectsCount();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 73: { bool _r = _t->isRPI();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 74: { QByteArray _r = _t->getHttpFile((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->downloadGitHubZip((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 76: _t->downloadGitHubZip((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 77: { bool _r = _t->uncompressZip((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->sendFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQmlApplicationEngine* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::log, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::uWarningChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::porcChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::uploadStateChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::ukStdChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::stdErrChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::debugLogChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)()>(_a, &UL::runCLChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)(qint64 , qint64 )>(_a, &UL::downloadProgress, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (UL::*)(bool , QString )>(_a, &UL::downloadFinished, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->getPorc(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getUploadState(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->getRunCL(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->getDebugLog(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->getUkStd(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->getStdErr(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->getInitStdString(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->getUWarning(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setUploadState(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setRunCL(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setDebugLog(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setUkStd(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setStdErr(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setInitStdString(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setUWarning(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *UL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN2ULE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UL::log()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UL::uWarningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UL::porcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UL::uploadStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UL::ukStdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UL::stdErrChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UL::debugLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void UL::runCLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void UL::downloadProgress(qint64 _t1, qint64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void UL::downloadFinished(bool _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}
QT_WARNING_POP
