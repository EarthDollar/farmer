/****************************************************************************
** Meta object code from reading C++ file 'SortFilterProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mix/src/SortFilterProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SortFilterProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dev__mix__SortFilterProxyModel_t {
    QByteArrayData data[19];
    char stringdata[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dev__mix__SortFilterProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dev__mix__SortFilterProxyModel_t qt_meta_stringdata_dev__mix__SortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "dev::mix::SortFilterProxyModel"
QT_MOC_LITERAL(1, 31, 12), // "countChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 3), // "get"
QT_MOC_LITERAL(4, 49, 8), // "QJSValue"
QT_MOC_LITERAL(5, 58, 6), // "_index"
QT_MOC_LITERAL(6, 65, 5), // "count"
QT_MOC_LITERAL(7, 71, 6), // "source"
QT_MOC_LITERAL(8, 78, 8), // "sortRole"
QT_MOC_LITERAL(9, 87, 9), // "sortOrder"
QT_MOC_LITERAL(10, 97, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(11, 111, 13), // "filterContent"
QT_MOC_LITERAL(12, 125, 10), // "filterType"
QT_MOC_LITERAL(13, 136, 12), // "filterString"
QT_MOC_LITERAL(14, 149, 12), // "filterSyntax"
QT_MOC_LITERAL(15, 162, 12), // "FilterSyntax"
QT_MOC_LITERAL(16, 175, 6), // "RegExp"
QT_MOC_LITERAL(17, 182, 8), // "Wildcard"
QT_MOC_LITERAL(18, 191, 11) // "FixedString"

    },
    "dev::mix::SortFilterProxyModel\0"
    "countChanged\0\0get\0QJSValue\0_index\0"
    "count\0source\0sortRole\0sortOrder\0"
    "Qt::SortOrder\0filterContent\0filterType\0"
    "filterString\0filterSyntax\0FilterSyntax\0"
    "RegExp\0Wildcard\0FixedString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dev__mix__SortFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       8,   28, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::Int,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::QObjectStar, 0x00095103,
       8, QMetaType::QByteArray, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      15, 0x0,    3,   64,

 // enum data: key, value
      16, uint(dev::mix::SortFilterProxyModel::RegExp),
      17, uint(dev::mix::SortFilterProxyModel::Wildcard),
      18, uint(dev::mix::SortFilterProxyModel::FixedString),

       0        // eod
};

void dev::mix::SortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SortFilterProxyModel *_t = static_cast<SortFilterProxyModel *>(_o);
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: { QJSValue _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SortFilterProxyModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SortFilterProxyModel::countChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject dev::mix::SortFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_dev__mix__SortFilterProxyModel.data,
      qt_meta_data_dev__mix__SortFilterProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dev::mix::SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dev::mix::SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dev__mix__SortFilterProxyModel.stringdata))
        return static_cast<void*>(const_cast< SortFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int dev::mix::SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< int*>(_v) = count(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = source(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = sortRole(); break;
        case 3: *reinterpret_cast< Qt::SortOrder*>(_v) = sortOrder(); break;
        case 4: *reinterpret_cast< QString*>(_v) = filterContent(); break;
        case 5: *reinterpret_cast< QString*>(_v) = filterType(); break;
        case 6: *reinterpret_cast< QString*>(_v) = filterString(); break;
        case 7: *reinterpret_cast< FilterSyntax*>(_v) = filterSyntax(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setSource(*reinterpret_cast< QObject**>(_v)); break;
        case 2: setSortRole(*reinterpret_cast< QByteArray*>(_v)); break;
        case 3: setSortOrder(*reinterpret_cast< Qt::SortOrder*>(_v)); break;
        case 4: setFilterContent(*reinterpret_cast< QString*>(_v)); break;
        case 5: setFilterType(*reinterpret_cast< QString*>(_v)); break;
        case 6: setFilterString(*reinterpret_cast< QString*>(_v)); break;
        case 7: setFilterSyntax(*reinterpret_cast< FilterSyntax*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void dev::mix::SortFilterProxyModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
