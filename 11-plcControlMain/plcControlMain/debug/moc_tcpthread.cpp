/****************************************************************************
** Meta object code from reading C++ file 'tcpthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../update/tcpthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpThread_t {
    QByteArrayData data[14];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpThread_t qt_meta_stringdata_TcpThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpThread"
QT_MOC_LITERAL(1, 10, 14), // "connectSuccess"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "disConnect"
QT_MOC_LITERAL(4, 37, 8), // "receData"
QT_MOC_LITERAL(5, 46, 4), // "data"
QT_MOC_LITERAL(6, 51, 12), // "writeByteNum"
QT_MOC_LITERAL(7, 64, 5), // "bytes"
QT_MOC_LITERAL(8, 70, 12), // "fromMainData"
QT_MOC_LITERAL(9, 83, 9), // "byteArray"
QT_MOC_LITERAL(10, 93, 13), // "finishDataget"
QT_MOC_LITERAL(11, 107, 7), // "getData"
QT_MOC_LITERAL(12, 115, 13), // "time_sendFile"
QT_MOC_LITERAL(13, 129, 15) // "bytesWrittenSum"

    },
    "TcpThread\0connectSuccess\0\0disConnect\0"
    "receData\0data\0writeByteNum\0bytes\0"
    "fromMainData\0byteArray\0finishDataget\0"
    "getData\0time_sendFile\0bytesWrittenSum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,
      10,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,

       0        // eod
};

void TcpThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectSuccess(); break;
        case 1: _t->disConnect(); break;
        case 2: _t->receData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->writeByteNum((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->fromMainData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->finishDataget(); break;
        case 6: _t->getData(); break;
        case 7: _t->time_sendFile(); break;
        case 8: _t->bytesWrittenSum((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::connectSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TcpThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::disConnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TcpThread::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::receData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TcpThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::writeByteNum)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TcpThread::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::fromMainData)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TcpThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpThread::finishDataget)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TcpThread.data,
    qt_meta_data_TcpThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TcpThread::connectSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TcpThread::disConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TcpThread::receData(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpThread::writeByteNum(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TcpThread::fromMainData(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TcpThread::finishDataget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
