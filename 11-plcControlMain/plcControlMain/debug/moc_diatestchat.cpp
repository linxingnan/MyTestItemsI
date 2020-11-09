/****************************************************************************
** Meta object code from reading C++ file 'diatestchat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../diatestchat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diatestchat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiaTestChat_t {
    QByteArrayData data[18];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiaTestChat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiaTestChat_t qt_meta_stringdata_DiaTestChat = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DiaTestChat"
QT_MOC_LITERAL(1, 12, 6), // "newTcp"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "address"
QT_MOC_LITERAL(4, 28, 4), // "port"
QT_MOC_LITERAL(5, 33, 3), // "num"
QT_MOC_LITERAL(6, 37, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(7, 57, 8), // "theModel"
QT_MOC_LITERAL(8, 66, 13), // "disconnectTcp"
QT_MOC_LITERAL(9, 80, 8), // "sendData"
QT_MOC_LITERAL(10, 89, 4), // "data"
QT_MOC_LITERAL(11, 94, 12), // "onLinkModbus"
QT_MOC_LITERAL(12, 107, 34), // "on_cBoxPlcName_currentIndexCh..."
QT_MOC_LITERAL(13, 142, 5), // "index"
QT_MOC_LITERAL(14, 148, 18), // "on_puBSend_clicked"
QT_MOC_LITERAL(15, 167, 26), // "on_spBoxStart_valueChanged"
QT_MOC_LITERAL(16, 194, 4), // "arg1"
QT_MOC_LITERAL(17, 199, 25) // "on_puBPositioning_clicked"

    },
    "DiaTestChat\0newTcp\0\0address\0port\0num\0"
    "QStandardItemModel*\0theModel\0disconnectTcp\0"
    "sendData\0data\0onLinkModbus\0"
    "on_cBoxPlcName_currentIndexChanged\0"
    "index\0on_puBSend_clicked\0"
    "on_spBoxStart_valueChanged\0arg1\0"
    "on_puBPositioning_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiaTestChat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x06 /* Public */,
       1,    3,   73,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   80,    2, 0x26 /* Public | MethodCloned */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

       0        // eod
};

void DiaTestChat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiaTestChat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QStandardItemModel*(*)>(_a[4]))); break;
        case 1: _t->newTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->newTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 3: _t->disconnectTcp(); break;
        case 4: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onLinkModbus(); break;
        case 6: _t->on_cBoxPlcName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_puBSend_clicked(); break;
        case 8: _t->on_spBoxStart_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_puBPositioning_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiaTestChat::*)(QString , quint16 , int , QStandardItemModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiaTestChat::newTcp)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiaTestChat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiaTestChat::disconnectTcp)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DiaTestChat::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiaTestChat::sendData)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiaTestChat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DiaTestChat.data,
    qt_meta_data_DiaTestChat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DiaTestChat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiaTestChat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiaTestChat.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DiaTestChat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DiaTestChat::newTcp(QString _t1, quint16 _t2, int _t3, QStandardItemModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void DiaTestChat::disconnectTcp()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DiaTestChat::sendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
