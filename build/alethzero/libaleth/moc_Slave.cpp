/****************************************************************************
** Meta object code from reading C++ file 'Slave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/Slave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Slave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__SlaveAux_t {
    QByteArrayData data[8];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__SlaveAux_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__SlaveAux_t qt_meta_stringdata_dev__aleth__SlaveAux = {
    {
QT_MOC_LITERAL(0, 0, 20), // "dev::aleth::SlaveAux"
QT_MOC_LITERAL(1, 21, 13), // "generatingDAG"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "_pc"
QT_MOC_LITERAL(4, 40, 13), // "solutionFound"
QT_MOC_LITERAL(5, 54, 32), // "eth::EthashProofOfWork::Solution"
QT_MOC_LITERAL(6, 87, 4), // "_sol"
QT_MOC_LITERAL(7, 92, 19) // "dagGenerationFailed"

    },
    "dev::aleth::SlaveAux\0generatingDAG\0\0"
    "_pc\0solutionFound\0eth::EthashProofOfWork::Solution\0"
    "_sol\0dagGenerationFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__SlaveAux[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       7,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::SlaveAux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlaveAux *_t = static_cast<SlaveAux *>(_o);
        switch (_id) {
        case 0: _t->generatingDAG((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->solutionFound((*reinterpret_cast< eth::EthashProofOfWork::Solution(*)>(_a[1]))); break;
        case 2: _t->dagGenerationFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SlaveAux::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlaveAux::generatingDAG)) {
                *result = 0;
            }
        }
        {
            typedef void (SlaveAux::*_t)(eth::EthashProofOfWork::Solution );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlaveAux::solutionFound)) {
                *result = 1;
            }
        }
        {
            typedef void (SlaveAux::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlaveAux::dagGenerationFailed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject dev::aleth::SlaveAux::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__SlaveAux.data,
      qt_meta_data_dev__aleth__SlaveAux,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::SlaveAux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::SlaveAux::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__SlaveAux.stringdata))
        return static_cast<void*>(const_cast< SlaveAux*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::SlaveAux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void dev::aleth::SlaveAux::generatingDAG(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dev::aleth::SlaveAux::solutionFound(eth::EthashProofOfWork::Solution _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dev::aleth::SlaveAux::dagGenerationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_dev__aleth__Slave_t {
    QByteArrayData data[8];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__Slave_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__Slave_t qt_meta_stringdata_dev__aleth__Slave = {
    {
QT_MOC_LITERAL(0, 0, 17), // "dev::aleth::Slave"
QT_MOC_LITERAL(1, 18, 13), // "generatingDAG"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "_pc"
QT_MOC_LITERAL(4, 37, 13), // "solutionFound"
QT_MOC_LITERAL(5, 51, 32), // "eth::EthashProofOfWork::Solution"
QT_MOC_LITERAL(6, 84, 4), // "_sol"
QT_MOC_LITERAL(7, 89, 19) // "dagGenerationFailed"

    },
    "dev::aleth::Slave\0generatingDAG\0\0_pc\0"
    "solutionFound\0eth::EthashProofOfWork::Solution\0"
    "_sol\0dagGenerationFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__Slave[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       7,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::Slave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Slave *_t = static_cast<Slave *>(_o);
        switch (_id) {
        case 0: _t->generatingDAG((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->solutionFound((*reinterpret_cast< eth::EthashProofOfWork::Solution(*)>(_a[1]))); break;
        case 2: _t->dagGenerationFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Slave::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Slave::generatingDAG)) {
                *result = 0;
            }
        }
        {
            typedef void (Slave::*_t)(eth::EthashProofOfWork::Solution );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Slave::solutionFound)) {
                *result = 1;
            }
        }
        {
            typedef void (Slave::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Slave::dagGenerationFailed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject dev::aleth::Slave::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__Slave.data,
      qt_meta_data_dev__aleth__Slave,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::Slave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::Slave::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__Slave.stringdata))
        return static_cast<void*>(const_cast< Slave*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::Slave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void dev::aleth::Slave::generatingDAG(unsigned  _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dev::aleth::Slave::solutionFound(eth::EthashProofOfWork::Solution _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dev::aleth::Slave::dagGenerationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
