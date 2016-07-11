/****************************************************************************
** Meta object code from reading C++ file 'SendDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/SendDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__SendDialog_t {
    QByteArrayData data[7];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__SendDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__SendDialog_t qt_meta_stringdata_dev__aleth__SendDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dev::aleth::SendDialog"
QT_MOC_LITERAL(1, 23, 15), // "on_send_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(4, 58, 20), // "on_value_textChanged"
QT_MOC_LITERAL(5, 79, 2), // "_s"
QT_MOC_LITERAL(6, 82, 17) // "on_to_textChanged"

    },
    "dev::aleth::SendDialog\0on_send_clicked\0"
    "\0on_cancel_clicked\0on_value_textChanged\0"
    "_s\0on_to_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__SendDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void dev::aleth::SendDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendDialog *_t = static_cast<SendDialog *>(_o);
        switch (_id) {
        case 0: _t->on_send_clicked(); break;
        case 1: _t->on_cancel_clicked(); break;
        case 2: _t->on_value_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_to_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dev::aleth::SendDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dev__aleth__SendDialog.data,
      qt_meta_data_dev__aleth__SendDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::SendDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::SendDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__SendDialog.stringdata))
        return static_cast<void*>(const_cast< SendDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int dev::aleth::SendDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
