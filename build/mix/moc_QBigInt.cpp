/****************************************************************************
** Meta object code from reading C++ file 'QBigInt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/QBigInt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QBigInt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__QBigInt_t {
    QByteArrayData data[14];
    char stringdata[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QBigInt_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QBigInt_t qt_meta_stringdata_dev__mix__QBigInt = {
    {
QT_MOC_LITERAL(0, 0, 17), // "dev::mix::QBigInt"
QT_MOC_LITERAL(1, 18, 5), // "value"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "hexValue"
QT_MOC_LITERAL(4, 34, 8), // "setValue"
QT_MOC_LITERAL(5, 43, 6), // "_value"
QT_MOC_LITERAL(6, 50, 9), // "setBigInt"
QT_MOC_LITERAL(7, 60, 8), // "subtract"
QT_MOC_LITERAL(8, 69, 8), // "QBigInt*"
QT_MOC_LITERAL(9, 78, 3), // "add"
QT_MOC_LITERAL(10, 82, 8), // "multiply"
QT_MOC_LITERAL(11, 91, 6), // "divide"
QT_MOC_LITERAL(12, 98, 12), // "checkAgainst"
QT_MOC_LITERAL(13, 111, 5) // "_type"

    },
    "dev::mix::QBigInt\0value\0\0hexValue\0"
    "setValue\0_value\0setBigInt\0subtract\0"
    "QBigInt*\0add\0multiply\0divide\0checkAgainst\0"
    "_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QBigInt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x02 /* Public */,
       3,    0,   60,    2, 0x02 /* Public */,
       4,    1,   61,    2, 0x02 /* Public */,
       6,    1,   64,    2, 0x02 /* Public */,
       7,    1,   67,    2, 0x02 /* Public */,
       9,    1,   70,    2, 0x02 /* Public */,
      10,    1,   73,    2, 0x02 /* Public */,
      11,    1,   76,    2, 0x02 /* Public */,
      12,    1,   79,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    0x80000000 | 8, 0x80000000 | 8,    5,
    0x80000000 | 8, 0x80000000 | 8,    5,
    0x80000000 | 8, 0x80000000 | 8,    5,
    0x80000000 | 8, 0x80000000 | 8,    5,
    QMetaType::QVariantMap, QMetaType::QString,   13,

       0        // eod
};

void dev::mix::QBigInt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBigInt *_t = static_cast<QBigInt *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->value();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->hexValue();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBigInt((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { QBigInt* _r = _t->subtract((*reinterpret_cast< QBigInt*const(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBigInt**>(_a[0]) = _r; }  break;
        case 5: { QBigInt* _r = _t->add((*reinterpret_cast< QBigInt*const(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBigInt**>(_a[0]) = _r; }  break;
        case 6: { QBigInt* _r = _t->multiply((*reinterpret_cast< QBigInt*const(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBigInt**>(_a[0]) = _r; }  break;
        case 7: { QBigInt* _r = _t->divide((*reinterpret_cast< QBigInt*const(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBigInt**>(_a[0]) = _r; }  break;
        case 8: { QVariantMap _r = _t->checkAgainst((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBigInt* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBigInt* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBigInt* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBigInt* >(); break;
            }
            break;
        }
    }
}

const QMetaObject dev::mix::QBigInt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QBigInt.data,
      qt_meta_data_dev__mix__QBigInt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QBigInt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QBigInt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QBigInt.stringdata))
        return static_cast<void*>(const_cast< QBigInt*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QBigInt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
