/****************************************************************************
** Meta object code from reading C++ file 'DebuggingStateWrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/DebuggingStateWrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggingStateWrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__QInstruction_t {
    QByteArrayData data[2];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QInstruction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QInstruction_t qt_meta_stringdata_dev__mix__QInstruction = {
    {
QT_MOC_LITERAL(0, 0, 22), // "dev::mix::QInstruction"
QT_MOC_LITERAL(1, 23, 4) // "line"

    },
    "dev::mix::QInstruction\0line"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QInstruction[] = {

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
       1, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::QInstruction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QInstruction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QInstruction.data,
      qt_meta_data_dev__mix__QInstruction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QInstruction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QInstruction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QInstruction.stringdata))
        return static_cast<void*>(const_cast< QInstruction*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QInstruction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = m_line; break;
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
struct qt_meta_stringdata_dev__mix__QSolState_t {
    QByteArrayData data[7];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QSolState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QSolState_t qt_meta_stringdata_dev__mix__QSolState = {
    {
QT_MOC_LITERAL(0, 0, 19), // "dev::mix::QSolState"
QT_MOC_LITERAL(1, 20, 7), // "storage"
QT_MOC_LITERAL(2, 28, 9), // "callStack"
QT_MOC_LITERAL(3, 38, 6), // "locals"
QT_MOC_LITERAL(4, 45, 5), // "start"
QT_MOC_LITERAL(5, 51, 3), // "end"
QT_MOC_LITERAL(6, 55, 10) // "sourceName"

    },
    "dev::mix::QSolState\0storage\0callStack\0"
    "locals\0start\0end\0sourceName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QSolState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariantMap, 0x00095401,
       2, QMetaType::QVariantList, 0x00095401,
       3, QMetaType::QVariantMap, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::QSolState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QSolState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QSolState.data,
      qt_meta_data_dev__mix__QSolState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QSolState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QSolState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QSolState.stringdata))
        return static_cast<void*>(const_cast< QSolState*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QSolState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = m_storage; break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = m_callStack; break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = m_locals; break;
        case 3: *reinterpret_cast< int*>(_v) = m_start; break;
        case 4: *reinterpret_cast< int*>(_v) = m_end; break;
        case 5: *reinterpret_cast< QString*>(_v) = m_sourceName; break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__QCode_t {
    QByteArrayData data[4];
    char stringdata[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QCode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QCode_t qt_meta_stringdata_dev__mix__QCode = {
    {
QT_MOC_LITERAL(0, 0, 15), // "dev::mix::QCode"
QT_MOC_LITERAL(1, 16, 12), // "instructions"
QT_MOC_LITERAL(2, 29, 7), // "address"
QT_MOC_LITERAL(3, 37, 10) // "documentId"

    },
    "dev::mix::QCode\0instructions\0address\0"
    "documentId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariantList, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::QCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QCode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QCode.data,
      qt_meta_data_dev__mix__QCode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QCode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QCode.stringdata))
        return static_cast<void*>(const_cast< QCode*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = m_instructions; break;
        case 1: *reinterpret_cast< QString*>(_v) = m_address; break;
        case 2: *reinterpret_cast< QString*>(_v) = m_document; break;
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
struct qt_meta_stringdata_dev__mix__QCallData_t {
    QByteArrayData data[2];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QCallData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QCallData_t qt_meta_stringdata_dev__mix__QCallData = {
    {
QT_MOC_LITERAL(0, 0, 19), // "dev::mix::QCallData"
QT_MOC_LITERAL(1, 20, 5) // "items"

    },
    "dev::mix::QCallData\0items"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QCallData[] = {

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
       1, QMetaType::QVariantList, 0x00095401,

       0        // eod
};

void dev::mix::QCallData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QCallData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QCallData.data,
      qt_meta_data_dev__mix__QCallData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QCallData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QCallData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QCallData.stringdata))
        return static_cast<void*>(const_cast< QCallData*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QCallData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = m_items; break;
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
struct qt_meta_stringdata_dev__mix__QDebugData_t {
    QByteArrayData data[3];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QDebugData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QDebugData_t qt_meta_stringdata_dev__mix__QDebugData = {
    {
QT_MOC_LITERAL(0, 0, 20), // "dev::mix::QDebugData"
QT_MOC_LITERAL(1, 21, 6), // "states"
QT_MOC_LITERAL(2, 28, 5) // "label"

    },
    "dev::mix::QDebugData\0states\0label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QDebugData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVariantList, 0x00095401,
       2, QMetaType::QString, 0x00095401,

       0        // eod
};

void dev::mix::QDebugData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject dev::mix::QDebugData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QDebugData.data,
      qt_meta_data_dev__mix__QDebugData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QDebugData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QDebugData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QDebugData.stringdata))
        return static_cast<void*>(const_cast< QDebugData*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QDebugData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = m_states; break;
        case 1: *reinterpret_cast< QString*>(_v) = m_label; break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_dev__mix__QMachineState_t {
    QByteArrayData data[19];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__QMachineState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__QMachineState_t qt_meta_stringdata_dev__mix__QMachineState = {
    {
QT_MOC_LITERAL(0, 0, 23), // "dev::mix::QMachineState"
QT_MOC_LITERAL(1, 24, 4), // "step"
QT_MOC_LITERAL(2, 29, 5), // "curPC"
QT_MOC_LITERAL(3, 35, 16), // "instructionIndex"
QT_MOC_LITERAL(4, 52, 7), // "gasCost"
QT_MOC_LITERAL(5, 60, 8), // "QBigInt*"
QT_MOC_LITERAL(6, 69, 3), // "gas"
QT_MOC_LITERAL(7, 73, 11), // "instruction"
QT_MOC_LITERAL(8, 85, 10), // "debugStack"
QT_MOC_LITERAL(9, 96, 12), // "debugStorage"
QT_MOC_LITERAL(10, 109, 11), // "debugMemory"
QT_MOC_LITERAL(11, 121, 4), // "code"
QT_MOC_LITERAL(12, 126, 8), // "callData"
QT_MOC_LITERAL(13, 135, 10), // "endOfDebug"
QT_MOC_LITERAL(14, 146, 10), // "newMemSize"
QT_MOC_LITERAL(15, 157, 6), // "levels"
QT_MOC_LITERAL(16, 164, 9), // "codeIndex"
QT_MOC_LITERAL(17, 174, 9), // "dataIndex"
QT_MOC_LITERAL(18, 184, 8) // "solidity"

    },
    "dev::mix::QMachineState\0step\0curPC\0"
    "instructionIndex\0gasCost\0QBigInt*\0gas\0"
    "instruction\0debugStack\0debugStorage\0"
    "debugMemory\0code\0callData\0endOfDebug\0"
    "newMemSize\0levels\0codeIndex\0dataIndex\0"
    "solidity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__QMachineState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      17,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::Int, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,
       6, 0x80000000 | 5, 0x00095409,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QStringList, 0x00095401,
       9, QMetaType::QStringList, 0x00095401,
      10, QMetaType::QVariantList, 0x00095401,
      11, QMetaType::QObjectStar, 0x00095401,
      12, QMetaType::QObjectStar, 0x00095401,
      13, QMetaType::QString, 0x00095401,
      14, 0x80000000 | 5, 0x00095409,
      15, QMetaType::QVariantList, 0x00095401,
      16, QMetaType::UInt, 0x00095401,
      17, QMetaType::UInt, 0x00095401,
      18, QMetaType::QObjectStar, 0x00095401,

       0        // eod
};

void dev::mix::QMachineState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBigInt* >(); break;
        }
    }

    Q_UNUSED(_o);
}

const QMetaObject dev::mix::QMachineState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dev__mix__QMachineState.data,
      qt_meta_data_dev__mix__QMachineState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::QMachineState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::QMachineState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__QMachineState.stringdata))
        return static_cast<void*>(const_cast< QMachineState*>(this));
    return QObject::qt_metacast(_clname);
}

int dev::mix::QMachineState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = step(); break;
        case 1: *reinterpret_cast< int*>(_v) = curPC(); break;
        case 2: *reinterpret_cast< int*>(_v) = m_instructionIndex; break;
        case 3: *reinterpret_cast< QBigInt**>(_v) = gasCost(); break;
        case 4: *reinterpret_cast< QBigInt**>(_v) = gas(); break;
        case 5: *reinterpret_cast< QString*>(_v) = instruction(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = debugStack(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = debugStorage(); break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = debugMemory(); break;
        case 9: *reinterpret_cast< QObject**>(_v) = m_code; break;
        case 10: *reinterpret_cast< QObject**>(_v) = m_callData; break;
        case 11: *reinterpret_cast< QString*>(_v) = endOfDebug(); break;
        case 12: *reinterpret_cast< QBigInt**>(_v) = newMemSize(); break;
        case 13: *reinterpret_cast< QVariantList*>(_v) = levels(); break;
        case 14: *reinterpret_cast< uint*>(_v) = codeIndex(); break;
        case 15: *reinterpret_cast< uint*>(_v) = dataIndex(); break;
        case 16: *reinterpret_cast< QObject**>(_v) = m_solState; break;
        default: break;
        }
        _id -= 17;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 17;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
