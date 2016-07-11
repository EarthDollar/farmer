/****************************************************************************
** Meta object code from reading C++ file 'AllAccounts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/alethzero/plugins/accounts/AllAccounts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AllAccounts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__zero__AllAccounts_t {
    QByteArrayData data[7];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__zero__AllAccounts_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__zero__AllAccounts_t qt_meta_stringdata_dev__aleth__zero__AllAccounts = {
    {
QT_MOC_LITERAL(0, 0, 29), // "dev::aleth::zero::AllAccounts"
QT_MOC_LITERAL(1, 30, 30), // "on_accounts_currentItemChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 6), // "create"
QT_MOC_LITERAL(4, 69, 7), // "refresh"
QT_MOC_LITERAL(5, 77, 17), // "filterAndUpdateUi"
QT_MOC_LITERAL(6, 95, 4) // "save"

    },
    "dev::aleth::zero::AllAccounts\0"
    "on_accounts_currentItemChanged\0\0create\0"
    "refresh\0filterAndUpdateUi\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__zero__AllAccounts[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::zero::AllAccounts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AllAccounts *_t = static_cast<AllAccounts *>(_o);
        switch (_id) {
        case 0: _t->on_accounts_currentItemChanged(); break;
        case 1: _t->create(); break;
        case 2: _t->refresh(); break;
        case 3: _t->filterAndUpdateUi(); break;
        case 4: _t->save(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dev::aleth::zero::AllAccounts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__zero__AllAccounts.data,
      qt_meta_data_dev__aleth__zero__AllAccounts,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::zero::AllAccounts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::zero::AllAccounts::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__zero__AllAccounts.stringdata))
        return static_cast<void*>(const_cast< AllAccounts*>(this));
    if (!strcmp(_clname, "Plugin"))
        return static_cast< Plugin*>(const_cast< AllAccounts*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::zero::AllAccounts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
