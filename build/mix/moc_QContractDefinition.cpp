/****************************************************************************
** Meta object code from reading C++ file 'QContractDefinition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/QContractDefinition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QContractDefinition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__QContractDefinition_t {
    QByteArrayData data[8];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QContractDefinition_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QContractDefinition_t qt_meta_stringdata_dev__mix__QContractDefinition = {
    {
QT_MOC_LITERAL(0, 0, 29), // "dev::mix::QContractDefinition"
QT_MOC_LITERAL(1, 30, 9), // "isLibrary"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "functions"
QT_MOC_LITERAL(4, 51, 47), // "QQmlListProperty<dev::mix::QF..."
QT_MOC_LITERAL(5, 99, 11), // "constructor"
QT_MOC_LITERAL(6, 111, 30), // "dev::mix::QFunctionDefinition*"
QT_MOC_LITERAL(7, 142, 6) // "events"

    },
    "dev::mix::QContractDefinition\0isLibrary\0"
    "\0functions\0QQmlListProperty<dev::mix::QFunctionDefinition>\0"
    "constructor\0dev::mix::QFunctionDefinition*\0"
    "events"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QContractDefinition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 6, 0x00095409,
       7, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void dev::mix::QContractDefinition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QContractDefinition *_t = static_cast<QContractDefinition *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->isLibrary();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< dev::mix::QFunctionDefinition* >(); break;
        }
    }

}

const QMetaObject dev::mix::QContractDefinition::staticMetaObject = {
    { &QBasicNodeDefinition::staticMetaObject, qt_meta_stringdata_dev__mix__QContractDefinition.data,
      qt_meta_data_dev__mix__QContractDefinition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QContractDefinition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QContractDefinition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QContractDefinition.stringdata))
        return static_cast<void*>(const_cast< QContractDefinition*>(this));
    return QBasicNodeDefinition::qt_metacast(_clname);
}

int dev::mix::QContractDefinition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBasicNodeDefinition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<dev::mix::QFunctionDefinition>*>(_v) = functions(); break;
        case 1: *reinterpret_cast< dev::mix::QFunctionDefinition**>(_v) = constructor(); break;
        case 2: *reinterpret_cast< QQmlListProperty<dev::mix::QFunctionDefinition>*>(_v) = events(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
