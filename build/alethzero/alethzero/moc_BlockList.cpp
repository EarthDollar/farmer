/****************************************************************************
** Meta object code from reading C++ file 'BlockList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/alethzero/plugins/blockchain/BlockList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__zero__BlockList_t {
    QByteArrayData data[6];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__zero__BlockList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__zero__BlockList_t qt_meta_stringdata_dev__aleth__zero__BlockList = {
    {
QT_MOC_LITERAL(0, 0, 27), // "dev::aleth::zero::BlockList"
QT_MOC_LITERAL(1, 28, 13), // "refreshBlocks"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "refreshInfo"
QT_MOC_LITERAL(4, 55, 12), // "debugCurrent"
QT_MOC_LITERAL(5, 68, 13) // "filterChanged"

    },
    "dev::aleth::zero::BlockList\0refreshBlocks\0"
    "\0refreshInfo\0debugCurrent\0filterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__zero__BlockList[] = {

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
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::zero::BlockList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockList *_t = static_cast<BlockList *>(_o);
        switch (_id) {
        case 0: _t->refreshBlocks(); break;
        case 1: _t->refreshInfo(); break;
        case 2: _t->debugCurrent(); break;
        case 3: _t->filterChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dev::aleth::zero::BlockList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__zero__BlockList.data,
      qt_meta_data_dev__aleth__zero__BlockList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::zero::BlockList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::zero::BlockList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__zero__BlockList.stringdata))
        return static_cast<void*>(const_cast< BlockList*>(this));
    if (!strcmp(_clname, "Plugin"))
        return static_cast< Plugin*>(const_cast< BlockList*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::zero::BlockList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
