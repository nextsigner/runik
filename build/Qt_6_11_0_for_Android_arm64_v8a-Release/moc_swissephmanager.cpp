/****************************************************************************
** Meta object code from reading C++ file 'swissephmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../swissephmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'swissephmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15SwissEphManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto SwissEphManager::qt_create_metaobjectdata<qt_meta_tag_ZN15SwissEphManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SwissEphManager",
        "setSwePath",
        "",
        "swePath",
        "getBodiePosJson",
        "bi",
        "a",
        "m",
        "d",
        "h",
        "min",
        "gmt",
        "lat",
        "lon",
        "alt",
        "getHousesPos",
        "hsys",
        "getSolarReturn",
        "QList<int>",
        "targetSunLong",
        "targetYear",
        "birthMonth",
        "birthDay",
        "getLunarEvents",
        "year",
        "findMoonPhase",
        "startJd",
        "targetPhase",
        "searchAspsBodieFromLong",
        "QJsonObject",
        "di",
        "mi",
        "ai",
        "planeta_num_ignorado",
        "longitud_objetivo",
        "df",
        "mf",
        "af",
        "tol",
        "aaBodiesIndexs",
        "jdToDateTimeJson",
        "jdUT"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'setSwePath'
        QtMocHelpers::MethodData<void(const QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'getBodiePosJson'
        QtMocHelpers::MethodData<QString(int, int, int, int, int, int, int, double, double, double)>(4, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 5 }, { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
            { QMetaType::Int, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Double, 12 },
            { QMetaType::Double, 13 }, { QMetaType::Double, 14 },
        }}),
        // Method 'getHousesPos'
        QtMocHelpers::MethodData<QString(int, int, int, int, int, int, double, double, int, QString)>(15, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { QMetaType::Int, 8 }, { QMetaType::Int, 9 },
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Double, 12 }, { QMetaType::Double, 13 },
            { QMetaType::Int, 14 }, { QMetaType::QString, 16 },
        }}),
        // Method 'getSolarReturn'
        QtMocHelpers::MethodData<QVector<int>(double, int, int, int, double)>(17, 2, QMC::AccessPublic, 0x80000000 | 18, {{
            { QMetaType::Double, 19 }, { QMetaType::Int, 20 }, { QMetaType::Int, 21 }, { QMetaType::Int, 22 },
            { QMetaType::Double, 11 },
        }}),
        // Method 'getLunarEvents'
        QtMocHelpers::MethodData<QString(int, double)>(23, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 24 }, { QMetaType::Double, 11 },
        }}),
        // Method 'findMoonPhase'
        QtMocHelpers::MethodData<double(double, double)>(25, 2, QMC::AccessPublic, QMetaType::Double, {{
            { QMetaType::Double, 26 }, { QMetaType::Double, 27 },
        }}),
        // Method 'searchAspsBodieFromLong'
        QtMocHelpers::MethodData<QJsonObject(int, int, int, int, double, int, int, int, double, QStringList)>(28, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::Int, 30 }, { QMetaType::Int, 31 }, { QMetaType::Int, 32 }, { QMetaType::Int, 33 },
            { QMetaType::Double, 34 }, { QMetaType::Int, 35 }, { QMetaType::Int, 36 }, { QMetaType::Int, 37 },
            { QMetaType::Double, 38 }, { QMetaType::QStringList, 39 },
        }}),
        // Method 'jdToDateTimeJson'
        QtMocHelpers::MethodData<QJsonObject(double, double)>(40, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::Double, 41 }, { QMetaType::Double, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SwissEphManager, qt_meta_tag_ZN15SwissEphManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SwissEphManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SwissEphManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SwissEphManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15SwissEphManagerE_t>.metaTypes,
    nullptr
} };

void SwissEphManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SwissEphManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setSwePath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QString _r = _t->getBodiePosJson((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getHousesPos((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QList<int> _r = _t->getSolarReturn((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])));
            if (_a[0]) *reinterpret_cast<QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getLunarEvents((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->findMoonPhase((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])));
            if (_a[0]) *reinterpret_cast<double*>(_a[0]) = std::move(_r); }  break;
        case 6: { QJsonObject _r = _t->searchAspsBodieFromLong((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[7])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[8])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[9])),(*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[10])));
            if (_a[0]) *reinterpret_cast<QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 7: { QJsonObject _r = _t->jdToDateTimeJson((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<double>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QJsonObject*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *SwissEphManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwissEphManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SwissEphManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SwissEphManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
