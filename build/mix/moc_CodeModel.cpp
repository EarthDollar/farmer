/****************************************************************************
** Meta object code from reading C++ file 'CodeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/CodeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CodeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__BackgroundWorker_t {
    QByteArrayData data[4];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__BackgroundWorker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__BackgroundWorker_t qt_meta_stringdata_dev__mix__BackgroundWorker = {
    {
QT_MOC_LITERAL(0, 0, 26), // "dev::mix::BackgroundWorker"
QT_MOC_LITERAL(1, 27, 15), // "queueCodeChange"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6) // "_jobId"

    },
    "dev::mix::BackgroundWorker\0queueCodeChange\0"
    "\0_jobId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__BackgroundWorker[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void dev::mix::BackgroundWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BackgroundWorker *_t = static_cast<BackgroundWorker *>(_o);
        switch (_id) {
        case 0: _t->queueCodeChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dev::mix::BackgroundWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__BackgroundWorker.data,
      qt_meta_data_dev__mix__BackgroundWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::BackgroundWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::BackgroundWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__BackgroundWorker.stringdata))
        return static_cast<void*>(const_cast< BackgroundWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::BackgroundWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_dev__mix__CompiledContract_t {
    QByteArrayData data[6];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__CompiledContract_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__CompiledContract_t qt_meta_stringdata_dev__mix__CompiledContract = {
    {
QT_MOC_LITERAL(0, 0, 26), // "dev::mix::CompiledContract"
QT_MOC_LITERAL(1, 27, 8), // "contract"
QT_MOC_LITERAL(2, 36, 20), // "QContractDefinition*"
QT_MOC_LITERAL(3, 57, 17), // "contractInterface"
QT_MOC_LITERAL(4, 75, 7), // "codeHex"
QT_MOC_LITERAL(5, 83, 10) // "documentId"

    },
    "dev::mix::CompiledContract\0contract\0"
    "QContractDefinition*\0contractInterface\0"
    "codeHex\0documentId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__CompiledContract[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::CompiledContract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::CompiledContract::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__CompiledContract.data,
      qt_meta_data_dev__mix__CompiledContract,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::CompiledContract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::CompiledContract::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__CompiledContract.stringdata))
        return static_cast<void*>(const_cast< CompiledContract*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::CompiledContract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QContractDefinition**>(_v) = contract(); break;
        case 1: *reinterpret_cast< QString*>(_v) = contractInterface(); break;
        case 2: *reinterpret_cast< QString*>(_v) = codeHex(); break;
        case 3: *reinterpret_cast< QString*>(_v) = documentId(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__GasMap_t {
    QByteArrayData data[12];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__GasMap_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__GasMap_t qt_meta_stringdata_dev__mix__GasMap = {
    {
QT_MOC_LITERAL(0, 0, 16), // "dev::mix::GasMap"
QT_MOC_LITERAL(1, 17, 5), // "start"
QT_MOC_LITERAL(2, 23, 3), // "end"
QT_MOC_LITERAL(3, 27, 3), // "gas"
QT_MOC_LITERAL(4, 31, 10), // "isInfinite"
QT_MOC_LITERAL(5, 42, 13), // "codeBlockType"
QT_MOC_LITERAL(6, 56, 12), // "contractName"
QT_MOC_LITERAL(7, 69, 12), // "functionName"
QT_MOC_LITERAL(8, 82, 4), // "type"
QT_MOC_LITERAL(9, 87, 9), // "Statement"
QT_MOC_LITERAL(10, 97, 8), // "Function"
QT_MOC_LITERAL(11, 106, 11) // "Constructor"

    },
    "dev::mix::GasMap\0start\0end\0gas\0"
    "isInfinite\0codeBlockType\0contractName\0"
    "functionName\0type\0Statement\0Function\0"
    "Constructor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__GasMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       1,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,

 // enums: name, flags, count, data
       8, 0x0,    3,   39,

 // enum data: key, value
       9, uint(dev::mix::GasMap::Statement),
      10, uint(dev::mix::GasMap::Function),
      11, uint(dev::mix::GasMap::Constructor),

       0        // eod
};

void dev::mix::GasMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::GasMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__GasMap.data,
      qt_meta_data_dev__mix__GasMap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::GasMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::GasMap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__GasMap.stringdata))
        return static_cast<void*>(const_cast< GasMap*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::GasMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = m_start; break;
        case 1: *reinterpret_cast< int*>(_v) = m_end; break;
        case 2: *reinterpret_cast< QString*>(_v) = m_gas; break;
        case 3: *reinterpret_cast< bool*>(_v) = m_isInfinite; break;
        case 4: *reinterpret_cast< QString*>(_v) = codeBlockType(); break;
        case 5: *reinterpret_cast< QString*>(_v) = m_contractName; break;
        case 6: *reinterpret_cast< QString*>(_v) = m_functionName; break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__GasMapWrapper_t {
    QByteArrayData data[3];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__GasMapWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__GasMapWrapper_t qt_meta_stringdata_dev__mix__GasMapWrapper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dev::mix::GasMapWrapper"
QT_MOC_LITERAL(1, 24, 7), // "gasMaps"
QT_MOC_LITERAL(2, 32, 12) // "GasCostsMaps"

    },
    "dev::mix::GasMapWrapper\0gasMaps\0"
    "GasCostsMaps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__GasMapWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void dev::mix::GasMapWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::GasMapWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__GasMapWrapper.data,
      qt_meta_data_dev__mix__GasMapWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::GasMapWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::GasMapWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__GasMapWrapper.stringdata))
        return static_cast<void*>(const_cast< GasMapWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::GasMapWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GasCostsMaps*>(_v) = m_gasMaps; break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__CodeModel_t {
    QByteArrayData data[44];
    char stringdata[588];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__CodeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__CodeModel_t qt_meta_stringdata_dev__mix__CodeModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "dev::mix::CodeModel"
QT_MOC_LITERAL(1, 20, 24), // "compilationInternalError"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "_error"
QT_MOC_LITERAL(4, 53, 12), // "stateChanged"
QT_MOC_LITERAL(5, 66, 19), // "compilationComplete"
QT_MOC_LITERAL(6, 86, 16), // "compilationError"
QT_MOC_LITERAL(7, 103, 14), // "_firstErrorLoc"
QT_MOC_LITERAL(8, 118, 15), // "_secondErrorLoc"
QT_MOC_LITERAL(9, 134, 22), // "scheduleCompilationJob"
QT_MOC_LITERAL(10, 157, 6), // "_jobId"
QT_MOC_LITERAL(11, 164, 11), // "codeChanged"
QT_MOC_LITERAL(12, 176, 24), // "contractInterfaceChanged"
QT_MOC_LITERAL(13, 201, 5), // "_name"
QT_MOC_LITERAL(14, 207, 19), // "newContractCompiled"
QT_MOC_LITERAL(15, 227, 15), // "contractRenamed"
QT_MOC_LITERAL(16, 243, 11), // "_documentId"
QT_MOC_LITERAL(17, 255, 8), // "_oldName"
QT_MOC_LITERAL(18, 264, 8), // "_newName"
QT_MOC_LITERAL(19, 273, 18), // "registerCodeChange"
QT_MOC_LITERAL(20, 292, 5), // "_code"
QT_MOC_LITERAL(21, 298, 5), // "reset"
QT_MOC_LITERAL(22, 304, 20), // "contractByDocumentId"
QT_MOC_LITERAL(23, 325, 17), // "CompiledContract*"
QT_MOC_LITERAL(24, 343, 21), // "unregisterContractSrc"
QT_MOC_LITERAL(25, 365, 19), // "gasCostByDocumentId"
QT_MOC_LITERAL(26, 385, 9), // "gasCostBy"
QT_MOC_LITERAL(27, 395, 13), // "_contractName"
QT_MOC_LITERAL(28, 409, 13), // "_functionName"
QT_MOC_LITERAL(29, 423, 15), // "setOptimizeCode"
QT_MOC_LITERAL(30, 439, 6), // "_value"
QT_MOC_LITERAL(31, 446, 4), // "sha3"
QT_MOC_LITERAL(32, 451, 7), // "_source"
QT_MOC_LITERAL(33, 459, 10), // "locationOf"
QT_MOC_LITERAL(34, 470, 9), // "_contract"
QT_MOC_LITERAL(35, 480, 13), // "linkLibraries"
QT_MOC_LITERAL(36, 494, 18), // "_deployedLibraries"
QT_MOC_LITERAL(37, 513, 9), // "contracts"
QT_MOC_LITERAL(38, 523, 9), // "compiling"
QT_MOC_LITERAL(39, 533, 11), // "hasContract"
QT_MOC_LITERAL(40, 545, 12), // "optimizeCode"
QT_MOC_LITERAL(41, 558, 11), // "callStipend"
QT_MOC_LITERAL(42, 570, 5), // "txGas"
QT_MOC_LITERAL(43, 576, 11) // "txCreateGas"

    },
    "dev::mix::CodeModel\0compilationInternalError\0"
    "\0_error\0stateChanged\0compilationComplete\0"
    "compilationError\0_firstErrorLoc\0"
    "_secondErrorLoc\0scheduleCompilationJob\0"
    "_jobId\0codeChanged\0contractInterfaceChanged\0"
    "_name\0newContractCompiled\0contractRenamed\0"
    "_documentId\0_oldName\0_newName\0"
    "registerCodeChange\0_code\0reset\0"
    "contractByDocumentId\0CompiledContract*\0"
    "unregisterContractSrc\0gasCostByDocumentId\0"
    "gasCostBy\0_contractName\0_functionName\0"
    "setOptimizeCode\0_value\0sha3\0_source\0"
    "locationOf\0_contract\0linkLibraries\0"
    "_deployedLibraries\0contracts\0compiling\0"
    "hasContract\0optimizeCode\0callStipend\0"
    "txGas\0txCreateGas"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__CodeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       7,  172, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    0,  112,    2, 0x06 /* Public */,
       5,    0,  113,    2, 0x06 /* Public */,
       6,    3,  114,    2, 0x06 /* Public */,
       9,    1,  121,    2, 0x06 /* Public */,
      11,    0,  124,    2, 0x06 /* Public */,
      12,    1,  125,    2, 0x06 /* Public */,
      14,    1,  128,    2, 0x06 /* Public */,
      15,    3,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    2,  138,    2, 0x0a /* Public */,
      21,    0,  143,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    1,  144,    2, 0x02 /* Public */,
      24,    1,  147,    2, 0x02 /* Public */,
      25,    1,  150,    2, 0x02 /* Public */,
      26,    2,  153,    2, 0x02 /* Public */,
      29,    1,  158,    2, 0x02 /* Public */,
      31,    1,  161,    2, 0x02 /* Public */,
      33,    1,  164,    2, 0x02 /* Public */,
      35,    2,  167,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QVariantList,    3,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   20,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 23, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::QVariantList, QMetaType::QString,   16,
    QMetaType::QVariantList, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::QString, QMetaType::QString,   32,
    QMetaType::QVariantMap, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   27,   36,

 // properties: name, type, flags
      37, QMetaType::QVariantMap, 0x00495001,
      38, QMetaType::Bool, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00095103,
      41, QMetaType::Int, 0x00095001,
      42, QMetaType::Int, 0x00095001,
      43, QMetaType::Int, 0x00095001,

 // properties: notify_signal_id
       5,
       1,
       5,
       0,
       0,
       0,
       0,

       0        // eod
};

void dev::mix::CodeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CodeModel *_t = static_cast<CodeModel *>(_o);
        switch (_id) {
        case 0: _t->compilationInternalError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stateChanged(); break;
        case 2: _t->compilationComplete(); break;
        case 3: _t->compilationError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariantMap(*)>(_a[2])),(*reinterpret_cast< QVariantList(*)>(_a[3]))); break;
        case 4: _t->scheduleCompilationJob((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->codeChanged(); break;
        case 6: _t->contractInterfaceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->newContractCompiled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->contractRenamed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->registerCodeChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->reset(); break;
        case 11: { CompiledContract* _r = _t->contractByDocumentId((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< CompiledContract**>(_a[0]) = _r; }  break;
        case 12: _t->unregisterContractSrc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: { QVariantList _r = _t->gasCostByDocumentId((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 14: { QVariantList _r = _t->gasCostBy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 15: _t->setOptimizeCode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { QString _r = _t->sha3((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QVariantMap _r = _t->locationOf((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        case 18: _t->linkLibraries((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CodeModel::*_t)(QString ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::compilationInternalError)) {
                *result = 0;
            }
        }
        {
            typedef void (CodeModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::stateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (CodeModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::compilationComplete)) {
                *result = 2;
            }
        }
        {
            typedef void (CodeModel::*_t)(QString , QVariantMap , QVariantList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::compilationError)) {
                *result = 3;
            }
        }
        {
            typedef void (CodeModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::scheduleCompilationJob)) {
                *result = 4;
            }
        }
        {
            typedef void (CodeModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::codeChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (CodeModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::contractInterfaceChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (CodeModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::newContractCompiled)) {
                *result = 7;
            }
        }
        {
            typedef void (CodeModel::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CodeModel::contractRenamed)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject dev::mix::CodeModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__CodeModel.data,
      qt_meta_data_dev__mix__CodeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::CodeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::CodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__CodeModel.stringdata))
        return static_cast<void*>(const_cast< CodeModel*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::CodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = contracts(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isCompiling(); break;
        case 2: *reinterpret_cast< bool*>(_v) = hasContract(); break;
        case 3: *reinterpret_cast< bool*>(_v) = m_optimizeCode; break;
        case 4: *reinterpret_cast< int*>(_v) = callStipend(); break;
        case 5: *reinterpret_cast< int*>(_v) = txGas(); break;
        case 6: *reinterpret_cast< int*>(_v) = txCreateGas(); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: setOptimizeCode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void dev::mix::CodeModel::compilationInternalError(QString _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< dev::mix::CodeModel *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dev::mix::CodeModel::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void dev::mix::CodeModel::compilationComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void dev::mix::CodeModel::compilationError(QString _t1, QVariantMap _t2, QVariantList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dev::mix::CodeModel::scheduleCompilationJob(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dev::mix::CodeModel::codeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void dev::mix::CodeModel::contractInterfaceChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void dev::mix::CodeModel::newContractCompiled(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void dev::mix::CodeModel::contractRenamed(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
