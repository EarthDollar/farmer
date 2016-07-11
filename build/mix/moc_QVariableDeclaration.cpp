/****************************************************************************
** Meta object code from reading C++ file 'QVariableDeclaration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/QVariableDeclaration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVariableDeclaration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__QSolidityType_t {
    QByteArrayData data[16];
    char stringdata[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QSolidityType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QSolidityType_t qt_meta_stringdata_dev__mix__QSolidityType = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dev::mix::QSolidityType"
QT_MOC_LITERAL(1, 24, 8), // "category"
QT_MOC_LITERAL(2, 33, 4), // "size"
QT_MOC_LITERAL(3, 38, 4), // "name"
QT_MOC_LITERAL(4, 43, 7), // "members"
QT_MOC_LITERAL(5, 51, 5), // "array"
QT_MOC_LITERAL(6, 57, 7), // "QmlType"
QT_MOC_LITERAL(7, 65, 13), // "SignedInteger"
QT_MOC_LITERAL(8, 79, 15), // "UnsignedInteger"
QT_MOC_LITERAL(9, 95, 4), // "Hash"
QT_MOC_LITERAL(10, 100, 4), // "Bool"
QT_MOC_LITERAL(11, 105, 7), // "Address"
QT_MOC_LITERAL(12, 113, 5), // "Bytes"
QT_MOC_LITERAL(13, 119, 6), // "String"
QT_MOC_LITERAL(14, 126, 4), // "Enum"
QT_MOC_LITERAL(15, 131, 6) // "Struct"

    },
    "dev::mix::QSolidityType\0category\0size\0"
    "name\0members\0array\0QmlType\0SignedInteger\0"
    "UnsignedInteger\0Hash\0Bool\0Address\0"
    "Bytes\0String\0Enum\0Struct"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QSolidityType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QVariantList, 0x00095401,
       5, QMetaType::Bool, 0x00095401,

 // enums: name, flags, count, data
       6, 0x0,    9,   33,

 // enum data: key, value
       7, uint(dev::mix::QSolidityType::SignedInteger),
       8, uint(dev::mix::QSolidityType::UnsignedInteger),
       9, uint(dev::mix::QSolidityType::Hash),
      10, uint(dev::mix::QSolidityType::Bool),
      11, uint(dev::mix::QSolidityType::Address),
      12, uint(dev::mix::QSolidityType::Bytes),
      13, uint(dev::mix::QSolidityType::String),
      14, uint(dev::mix::QSolidityType::Enum),
      15, uint(dev::mix::QSolidityType::Struct),

       0        // eod
};

void dev::mix::QSolidityType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QSolidityType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QSolidityType.data,
      qt_meta_data_dev__mix__QSolidityType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QSolidityType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QSolidityType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QSolidityType.stringdata))
        return static_cast<void*>(const_cast< QSolidityType*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QSolidityType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = category(); break;
        case 1: *reinterpret_cast< int*>(_v) = size(); break;
        case 2: *reinterpret_cast< QString*>(_v) = name(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = members(); break;
        case 4: *reinterpret_cast< bool*>(_v) = array(); break;
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
struct qt_meta_stringdata_dev__mix__QVariableDeclaration_t {
    QByteArrayData data[3];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QVariableDeclaration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QVariableDeclaration_t qt_meta_stringdata_dev__mix__QVariableDeclaration = {
    {
QT_MOC_LITERAL(0, 0, 30), // "dev::mix::QVariableDeclaration"
QT_MOC_LITERAL(1, 31, 4), // "type"
QT_MOC_LITERAL(2, 36, 14) // "QSolidityType*"

    },
    "dev::mix::QVariableDeclaration\0type\0"
    "QSolidityType*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QVariableDeclaration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void dev::mix::QVariableDeclaration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSolidityType* >(); break;
        }
    }

    Q_UNUSED(_o);
}

const QMetaObject dev::mix::QVariableDeclaration::staticMetaObject = {
    { &QBasicNodeDefinition::staticMetaObject, qt_meta_stringdata_dev__mix__QVariableDeclaration.data,
      qt_meta_data_dev__mix__QVariableDeclaration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QVariableDeclaration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QVariableDeclaration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QVariableDeclaration.stringdata))
        return static_cast<void*>(const_cast< QVariableDeclaration*>(this));
    return QBasicNodeDefinition::qt_metacast(_clname);
}

int dev::mix::QVariableDeclaration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBasicNodeDefinition::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSolidityType**>(_v) = type(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
