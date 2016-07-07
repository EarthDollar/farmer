/****************************************************************************
** Meta object code from reading C++ file 'AlethFace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/AlethFace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlethFace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__AlethFace_t {
    QByteArrayData data[7];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__AlethFace_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__AlethFace_t qt_meta_stringdata_dev__aleth__AlethFace = {
    {
QT_MOC_LITERAL(0, 0, 21), // "dev::aleth::AlethFace"
QT_MOC_LITERAL(1, 22, 21), // "knownAddressesChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 19), // "addressNamesChanged"
QT_MOC_LITERAL(4, 65, 18), // "beneficiaryChanged"
QT_MOC_LITERAL(5, 84, 11), // "keysChanged"
QT_MOC_LITERAL(6, 96, 15) // "settingsChanged"

    },
    "dev::aleth::AlethFace\0knownAddressesChanged\0"
    "\0addressNamesChanged\0beneficiaryChanged\0"
    "keysChanged\0settingsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__AlethFace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::AlethFace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlethFace *_t = static_cast<AlethFace *>(_o);
        switch (_id) {
        case 0: _t->knownAddressesChanged(); break;
        case 1: _t->addressNamesChanged(); break;
        case 2: _t->beneficiaryChanged(); break;
        case 3: _t->keysChanged(); break;
        case 4: _t->settingsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlethFace::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethFace::knownAddressesChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AlethFace::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethFace::addressNamesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (AlethFace::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethFace::beneficiaryChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (AlethFace::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethFace::keysChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (AlethFace::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlethFace::settingsChanged)) {
                *result = 4;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dev::aleth::AlethFace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__AlethFace.data,
      qt_meta_data_dev__aleth__AlethFace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::AlethFace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::AlethFace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__AlethFace.stringdata))
        return static_cast<void*>(const_cast< AlethFace*>(this));
    if (!strcmp(_clname, "Context"))
        return static_cast< Context*>(const_cast< AlethFace*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::AlethFace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dev::aleth::AlethFace::knownAddressesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void dev::aleth::AlethFace::addressNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void dev::aleth::AlethFace::beneficiaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void dev::aleth::AlethFace::keysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void dev::aleth::AlethFace::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
