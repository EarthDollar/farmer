/****************************************************************************
** Meta object code from reading C++ file 'MixApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/MixApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MixApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__ApplicationService_t {
    QByteArrayData data[6];
    char stringdata[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__ApplicationService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__ApplicationService_t qt_meta_stringdata_dev__mix__ApplicationService = {
    {
QT_MOC_LITERAL(0, 0, 28), // "dev::mix::ApplicationService"
QT_MOC_LITERAL(1, 29, 15), // "systemPointSize"
QT_MOC_LITERAL(2, 45, 13), // "haveWebEngine"
QT_MOC_LITERAL(3, 59, 21), // "solidityVersionNumber"
QT_MOC_LITERAL(4, 81, 21), // "solidityVersionString"
QT_MOC_LITERAL(5, 103, 9) // "qtVersion"

    },
    "dev::mix::ApplicationService\0"
    "systemPointSize\0haveWebEngine\0"
    "solidityVersionNumber\0solidityVersionString\0"
    "qtVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__ApplicationService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Bool, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::ApplicationService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::ApplicationService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__ApplicationService.data,
      qt_meta_data_dev__mix__ApplicationService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::ApplicationService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::ApplicationService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__ApplicationService.stringdata))
        return static_cast<void*>(const_cast< ApplicationService*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::ApplicationService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = systemPointSize(); break;
        case 1: *reinterpret_cast< bool*>(_v) = haveWebEngine(); break;
        case 2: *reinterpret_cast< QString*>(_v) = solidityVersionNumber(); break;
        case 3: *reinterpret_cast< QString*>(_v) = solidityVersionString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = qtVersion(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__MixApplication_t {
    QByteArrayData data[1];
    char stringdata[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__MixApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__MixApplication_t qt_meta_stringdata_dev__mix__MixApplication = {
    {
QT_MOC_LITERAL(0, 0, 24) // "dev::mix::MixApplication"

    },
    "dev::mix::MixApplication"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__MixApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void dev::mix::MixApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::MixApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_dev__mix__MixApplication.data,
      qt_meta_data_dev__mix__MixApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::MixApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::MixApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__MixApplication.stringdata))
        return static_cast<void*>(const_cast< MixApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int dev::mix::MixApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
