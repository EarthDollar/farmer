/****************************************************************************
** Meta object code from reading C++ file 'AlethWhisper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/AlethWhisper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlethWhisper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__AlethWhisper_t {
    QByteArrayData data[4];
    char stringdata[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__AlethWhisper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__AlethWhisper_t qt_meta_stringdata_dev__aleth__AlethWhisper = {
    {
QT_MOC_LITERAL(0, 0, 24), // "dev::aleth::AlethWhisper"
QT_MOC_LITERAL(1, 25, 7), // "onNewId"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2) // "_s"

    },
    "dev::aleth::AlethWhisper\0onNewId\0\0_s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__AlethWhisper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void dev::aleth::AlethWhisper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlethWhisper *_t = static_cast<AlethWhisper *>(_o);
        switch (_id) {
        case 0: _t->onNewId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlethWhisper::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethWhisper::onNewId)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject dev::aleth::AlethWhisper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__AlethWhisper.data,
      qt_meta_data_dev__aleth__AlethWhisper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::AlethWhisper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::AlethWhisper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__AlethWhisper.stringdata))
        return static_cast<void*>(const_cast< AlethWhisper*>(this));
    if (!strcmp(_clname, "rpc::Whisper"))
        return static_cast< rpc::Whisper*>(const_cast< AlethWhisper*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::AlethWhisper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dev::aleth::AlethWhisper::onNewId(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
