/****************************************************************************
** Meta object code from reading C++ file 'ImportKey.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/alethzero/plugins/accounts/ImportKey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImportKey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__zero__ImportKey_t {
    QByteArrayData data[3];
    char stringdata[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__zero__ImportKey_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__zero__ImportKey_t qt_meta_stringdata_dev__aleth__zero__ImportKey = {
    {
QT_MOC_LITERAL(0, 0, 27), // "dev::aleth::zero::ImportKey"
QT_MOC_LITERAL(1, 28, 6), // "import"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "dev::aleth::zero::ImportKey\0import\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__zero__ImportKey[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void dev::aleth::zero::ImportKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImportKey *_t = static_cast<ImportKey *>(_o);
        switch (_id) {
        case 0: _t->import(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dev::aleth::zero::ImportKey::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__zero__ImportKey.data,
      qt_meta_data_dev__aleth__zero__ImportKey,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::zero::ImportKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::zero::ImportKey::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__zero__ImportKey.stringdata))
        return static_cast<void*>(const_cast< ImportKey*>(this));
    if (!strcmp(_clname, "Plugin"))
        return static_cast< Plugin*>(const_cast< ImportKey*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::zero::ImportKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
