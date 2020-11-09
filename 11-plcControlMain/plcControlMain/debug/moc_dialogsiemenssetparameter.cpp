/****************************************************************************
** Meta object code from reading C++ file 'dialogsiemenssetparameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DiaLogSiemens/dialogsiemenssetparameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogsiemenssetparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogSiemensSetParameter_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogSiemensSetParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogSiemensSetParameter_t qt_meta_stringdata_DialogSiemensSetParameter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DialogSiemensSetParameter"
QT_MOC_LITERAL(1, 26, 8), // "upConfig"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "downConfig"
QT_MOC_LITERAL(4, 47, 21), // "on_tabWidgetTabChange"
QT_MOC_LITERAL(5, 69, 4), // "page"
QT_MOC_LITERAL(6, 74, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(7, 106, 10), // "currentRow"
QT_MOC_LITERAL(8, 117, 18) // "on_tableBtnClicked"

    },
    "DialogSiemensSetParameter\0upConfig\0\0"
    "downConfig\0on_tabWidgetTabChange\0page\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow\0on_tableBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogSiemensSetParameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void DialogSiemensSetParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogSiemensSetParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->upConfig(); break;
        case 1: _t->downConfig(); break;
        case 2: _t->on_tabWidgetTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_tableBtnClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogSiemensSetParameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogSiemensSetParameter::upConfig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogSiemensSetParameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogSiemensSetParameter::downConfig)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogSiemensSetParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogSiemensSetParameter.data,
    qt_meta_data_DialogSiemensSetParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogSiemensSetParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogSiemensSetParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSiemensSetParameter.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogSiemensSetParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void DialogSiemensSetParameter::upConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogSiemensSetParameter::downConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
