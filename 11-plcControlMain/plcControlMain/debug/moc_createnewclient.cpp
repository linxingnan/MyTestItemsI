/****************************************************************************
** Meta object code from reading C++ file 'createnewclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../update/createnewclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createnewclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateNewClient_t {
    QByteArrayData data[16];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateNewClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateNewClient_t qt_meta_stringdata_CreateNewClient = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CreateNewClient"
QT_MOC_LITERAL(1, 16, 6), // "newTcp"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "address"
QT_MOC_LITERAL(4, 32, 4), // "port"
QT_MOC_LITERAL(5, 37, 12), // "proGressItem"
QT_MOC_LITERAL(6, 50, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(7, 70, 8), // "theModel"
QT_MOC_LITERAL(8, 79, 11), // "connectSave"
QT_MOC_LITERAL(9, 91, 10), // "TcpThread*"
QT_MOC_LITERAL(10, 102, 6), // "socket"
QT_MOC_LITERAL(11, 109, 13), // "haveDataWrite"
QT_MOC_LITERAL(12, 123, 4), // "path"
QT_MOC_LITERAL(13, 128, 10), // "delConnect"
QT_MOC_LITERAL(14, 139, 14), // "connectSuccess"
QT_MOC_LITERAL(15, 154, 11) // "cleanThread"

    },
    "CreateNewClient\0newTcp\0\0address\0port\0"
    "proGressItem\0QStandardItemModel*\0"
    "theModel\0connectSave\0TcpThread*\0socket\0"
    "haveDataWrite\0path\0delConnect\0"
    "connectSuccess\0cleanThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateNewClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,
      13,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   60,    2, 0x08 /* Private */,
      15,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void CreateNewClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateNewClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTcp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QStandardItemModel*(*)>(_a[4]))); break;
        case 1: _t->connectSave((*reinterpret_cast< TcpThread*(*)>(_a[1]))); break;
        case 2: _t->haveDataWrite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->delConnect(); break;
        case 4: _t->connectSuccess((*reinterpret_cast< TcpThread*(*)>(_a[1]))); break;
        case 5: _t->cleanThread(); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TcpThread* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TcpThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateNewClient::*)(QString , quint16 , int , QStandardItemModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateNewClient::newTcp)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CreateNewClient::*)(TcpThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateNewClient::connectSave)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CreateNewClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateNewClient::haveDataWrite)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CreateNewClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateNewClient::delConnect)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateNewClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CreateNewClient.data,
    qt_meta_data_CreateNewClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateNewClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateNewClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateNewClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CreateNewClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CreateNewClient::newTcp(QString _t1, quint16 _t2, int _t3, QStandardItemModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CreateNewClient::connectSave(TcpThread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CreateNewClient::haveDataWrite(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CreateNewClient::delConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
