/****************************************************************************
** Meta object code from reading C++ file 'Debugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../alethzero/libaleth/Debugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Debugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__aleth__Debugger_t {
    QByteArrayData data[14];
    char stringdata[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__aleth__Debugger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__aleth__Debugger_t qt_meta_stringdata_dev__aleth__Debugger = {
    {
QT_MOC_LITERAL(0, 0, 20), // "dev::aleth::Debugger"
QT_MOC_LITERAL(1, 21, 31), // "on_callStack_currentItemChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 29), // "on_debugTimeline_valueChanged"
QT_MOC_LITERAL(4, 84, 19), // "on_stepOver_clicked"
QT_MOC_LITERAL(5, 104, 19), // "on_stepInto_clicked"
QT_MOC_LITERAL(6, 124, 18), // "on_stepOut_clicked"
QT_MOC_LITERAL(7, 143, 19), // "on_backOver_clicked"
QT_MOC_LITERAL(8, 163, 19), // "on_backInto_clicked"
QT_MOC_LITERAL(9, 183, 18), // "on_backOut_clicked"
QT_MOC_LITERAL(10, 202, 15), // "on_dump_clicked"
QT_MOC_LITERAL(11, 218, 21), // "on_dumpPretty_clicked"
QT_MOC_LITERAL(12, 240, 22), // "on_dumpStorage_clicked"
QT_MOC_LITERAL(13, 263, 16) // "on_close_clicked"

    },
    "dev::aleth::Debugger\0"
    "on_callStack_currentItemChanged\0\0"
    "on_debugTimeline_valueChanged\0"
    "on_stepOver_clicked\0on_stepInto_clicked\0"
    "on_stepOut_clicked\0on_backOver_clicked\0"
    "on_backInto_clicked\0on_backOut_clicked\0"
    "on_dump_clicked\0on_dumpPretty_clicked\0"
    "on_dumpStorage_clicked\0on_close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__aleth__Debugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x09 /* Protected */,
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    0,   77,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    0,   79,    2, 0x09 /* Protected */,
       8,    0,   80,    2, 0x09 /* Protected */,
       9,    0,   81,    2, 0x09 /* Protected */,
      10,    0,   82,    2, 0x09 /* Protected */,
      11,    0,   83,    2, 0x09 /* Protected */,
      12,    0,   84,    2, 0x09 /* Protected */,
      13,    0,   85,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dev::aleth::Debugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Debugger *_t = static_cast<Debugger *>(_o);
        switch (_id) {
        case 0: _t->on_callStack_currentItemChanged(); break;
        case 1: _t->on_debugTimeline_valueChanged(); break;
        case 2: _t->on_stepOver_clicked(); break;
        case 3: _t->on_stepInto_clicked(); break;
        case 4: _t->on_stepOut_clicked(); break;
        case 5: _t->on_backOver_clicked(); break;
        case 6: _t->on_backInto_clicked(); break;
        case 7: _t->on_backOut_clicked(); break;
        case 8: _t->on_dump_clicked(); break;
        case 9: _t->on_dumpPretty_clicked(); break;
        case 10: _t->on_dumpStorage_clicked(); break;
        case 11: _t->on_close_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject dev::aleth::Debugger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dev__aleth__Debugger.data,
      qt_meta_data_dev__aleth__Debugger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::aleth::Debugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::aleth::Debugger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__aleth__Debugger.stringdata))
        return static_cast<void*>(const_cast< Debugger*>(this));
    return QDialog::qt_metacast(_clname);
}

int dev::aleth::Debugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
