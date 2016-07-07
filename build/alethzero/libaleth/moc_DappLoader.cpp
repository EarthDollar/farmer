/****************************************************************************
** Meta object code from reading C++ file 'DappLoader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/DappLoader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DappLoader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__DappLoader_t {
    QByteArrayData data[13];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__DappLoader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__DappLoader_t qt_meta_stringdata_dev__aleth__DappLoader = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dev::aleth::DappLoader"
QT_MOC_LITERAL(1, 23, 9), // "dappReady"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "Dapp&"
QT_MOC_LITERAL(4, 40, 5), // "_dapp"
QT_MOC_LITERAL(5, 46, 9), // "pageReady"
QT_MOC_LITERAL(6, 56, 8), // "_content"
QT_MOC_LITERAL(7, 65, 9), // "_mimeType"
QT_MOC_LITERAL(8, 75, 4), // "_uri"
QT_MOC_LITERAL(9, 80, 9), // "dappError"
QT_MOC_LITERAL(10, 90, 16), // "downloadComplete"
QT_MOC_LITERAL(11, 107, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 122, 6) // "_reply"

    },
    "dev::aleth::DappLoader\0dappReady\0\0"
    "Dapp&\0_dapp\0pageReady\0_content\0_mimeType\0"
    "_uri\0dappError\0downloadComplete\0"
    "QNetworkReply*\0_reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__DappLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    3,   37,    2, 0x06 /* Public */,
       9,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString, QMetaType::QUrl,    6,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void dev::aleth::DappLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DappLoader *_t = static_cast<DappLoader *>(_o);
        switch (_id) {
        case 0: _t->dappReady((*reinterpret_cast< Dapp(*)>(_a[1]))); break;
        case 1: _t->pageReady((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 2: _t->dappError(); break;
        case 3: _t->downloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DappLoader::*_t)(Dapp & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DappLoader::dappReady)) {
                *result = 0;
            }
        }
        {
            typedef void (DappLoader::*_t)(QByteArray const & , QString const & , QUrl const & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DappLoader::pageReady)) {
                *result = 1;
            }
        }
        {
            typedef void (DappLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DappLoader::dappError)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject dev::aleth::DappLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__aleth__DappLoader.data,
      qt_meta_data_dev__aleth__DappLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::DappLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::DappLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__DappLoader.stringdata))
        return static_cast<void*>(const_cast< DappLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::aleth::DappLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void dev::aleth::DappLoader::dappReady(Dapp & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dev::aleth::DappLoader::pageReady(QByteArray const & _t1, QString const & _t2, QUrl const & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dev::aleth::DappLoader::dappError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
