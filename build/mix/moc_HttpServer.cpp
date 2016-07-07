/****************************************************************************
** Meta object code from reading C++ file 'HttpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/HttpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__HttpRequest_t {
    QByteArrayData data[9];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__HttpRequest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__HttpRequest_t qt_meta_stringdata_dev__mix__HttpRequest = {
    {
QT_MOC_LITERAL(0, 0, 21), // "dev::mix::HttpRequest"
QT_MOC_LITERAL(1, 22, 11), // "setResponse"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "_response"
QT_MOC_LITERAL(4, 45, 22), // "setResponseContentType"
QT_MOC_LITERAL(5, 68, 12), // "_contentType"
QT_MOC_LITERAL(6, 81, 3), // "url"
QT_MOC_LITERAL(7, 85, 7), // "content"
QT_MOC_LITERAL(8, 93, 7) // "headers"

    },
    "dev::mix::HttpRequest\0setResponse\0\0"
    "_response\0setResponseContentType\0"
    "_contentType\0url\0content\0headers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__HttpRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       4,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       6, QMetaType::QUrl, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QVariantMap, 0x00095401,

       0        // eod
};

void dev::mix::HttpRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpRequest *_t = static_cast<HttpRequest *>(_o);
        switch (_id) {
        case 0: _t->setResponse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setResponseContentType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dev::mix::HttpRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__HttpRequest.data,
      qt_meta_data_dev__mix__HttpRequest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::HttpRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::HttpRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__HttpRequest.stringdata))
        return static_cast<void*>(const_cast< HttpRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::HttpRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = m_url; break;
        case 1: *reinterpret_cast< QString*>(_v) = m_content; break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = m_headers; break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__HttpServer_t {
    QByteArrayData data[21];
    char stringdata[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__HttpServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__HttpServer_t qt_meta_stringdata_dev__mix__HttpServer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "dev::mix::HttpServer"
QT_MOC_LITERAL(1, 21, 15), // "clientConnected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "HttpRequest*"
QT_MOC_LITERAL(4, 51, 8), // "_request"
QT_MOC_LITERAL(5, 60, 18), // "errorStringChanged"
QT_MOC_LITERAL(6, 79, 10), // "urlChanged"
QT_MOC_LITERAL(7, 90, 4), // "_url"
QT_MOC_LITERAL(8, 95, 11), // "portChanged"
QT_MOC_LITERAL(9, 107, 5), // "_port"
QT_MOC_LITERAL(10, 113, 13), // "listenChanged"
QT_MOC_LITERAL(11, 127, 7), // "_listen"
QT_MOC_LITERAL(12, 135, 13), // "acceptChanged"
QT_MOC_LITERAL(13, 149, 7), // "_accept"
QT_MOC_LITERAL(14, 157, 10), // "readClient"
QT_MOC_LITERAL(15, 168, 13), // "discardClient"
QT_MOC_LITERAL(16, 182, 3), // "url"
QT_MOC_LITERAL(17, 186, 4), // "port"
QT_MOC_LITERAL(18, 191, 6), // "listen"
QT_MOC_LITERAL(19, 198, 6), // "accept"
QT_MOC_LITERAL(20, 205, 11) // "errorString"

    },
    "dev::mix::HttpServer\0clientConnected\0"
    "\0HttpRequest*\0_request\0errorStringChanged\0"
    "urlChanged\0_url\0portChanged\0_port\0"
    "listenChanged\0_listen\0acceptChanged\0"
    "_accept\0readClient\0discardClient\0url\0"
    "port\0listen\0accept\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__HttpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      12,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   70,    2, 0x08 /* Private */,
      15,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QUrl, 0x00495001,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       1,

       0        // eod
};

void dev::mix::HttpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpServer *_t = static_cast<HttpServer *>(_o);
        switch (_id) {
        case 0: _t->clientConnected((*reinterpret_cast< HttpRequest*(*)>(_a[1]))); break;
        case 1: _t->errorStringChanged(); break;
        case 2: _t->urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->listenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->acceptChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->readClient(); break;
        case 7: _t->discardClient(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HttpRequest* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpServer::*_t)(HttpRequest * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::clientConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (HttpServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::errorStringChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (HttpServer::*_t)(QUrl const & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::urlChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (HttpServer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::portChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (HttpServer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::listenChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (HttpServer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpServer::acceptChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject dev::mix::HttpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_dev__mix__HttpServer.data,
      qt_meta_data_dev__mix__HttpServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::HttpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::HttpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__HttpServer.stringdata))
        return static_cast<void*>(const_cast< HttpServer*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< HttpServer*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< HttpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int dev::mix::HttpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = url(); break;
        case 1: *reinterpret_cast< int*>(_v) = port(); break;
        case 2: *reinterpret_cast< bool*>(_v) = listen(); break;
        case 3: *reinterpret_cast< bool*>(_v) = accept(); break;
        case 4: *reinterpret_cast< QString*>(_v) = errorString(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setPort(*reinterpret_cast< int*>(_v)); break;
        case 2: setListen(*reinterpret_cast< bool*>(_v)); break;
        case 3: setAccept(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
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

// SIGNAL 0
void dev::mix::HttpServer::clientConnected(HttpRequest * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dev::mix::HttpServer::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void dev::mix::HttpServer::urlChanged(QUrl const & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dev::mix::HttpServer::portChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dev::mix::HttpServer::listenChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dev::mix::HttpServer::acceptChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
