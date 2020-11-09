/****************************************************************************
** Meta object code from reading C++ file 'handleredata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../handleredata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'handleredata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HandleReData_t {
    QByteArrayData data[24];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HandleReData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HandleReData_t qt_meta_stringdata_HandleReData = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HandleReData"
QT_MOC_LITERAL(1, 13, 14), // "findEquMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "list"
QT_MOC_LITERAL(4, 34, 16), // "haveIpNeedChange"
QT_MOC_LITERAL(5, 51, 4), // "data"
QT_MOC_LITERAL(6, 56, 6), // "ipAddr"
QT_MOC_LITERAL(7, 63, 4), // "port"
QT_MOC_LITERAL(8, 68, 15), // "getParameterMod"
QT_MOC_LITERAL(9, 84, 10), // "QList<int>"
QT_MOC_LITERAL(10, 95, 10), // "listComBox"
QT_MOC_LITERAL(11, 106, 7), // "netData"
QT_MOC_LITERAL(12, 114, 8), // "dataDown"
QT_MOC_LITERAL(13, 123, 3), // "str"
QT_MOC_LITERAL(14, 127, 2), // "ip"
QT_MOC_LITERAL(15, 130, 17), // "checkDataHandleOk"
QT_MOC_LITERAL(16, 148, 8), // "dataList"
QT_MOC_LITERAL(17, 157, 10), // "ipChangeOk"
QT_MOC_LITERAL(18, 168, 10), // "dataDownOk"
QT_MOC_LITERAL(19, 179, 24), // "dataDownSiemensModbusMap"
QT_MOC_LITERAL(20, 204, 12), // "getModbusMap"
QT_MOC_LITERAL(21, 217, 16), // "QVector<QString>"
QT_MOC_LITERAL(22, 234, 6), // "vecStr"
QT_MOC_LITERAL(23, 241, 25) // "dataForSiemensNetDataDown"

    },
    "HandleReData\0findEquMessage\0\0list\0"
    "haveIpNeedChange\0data\0ipAddr\0port\0"
    "getParameterMod\0QList<int>\0listComBox\0"
    "netData\0dataDown\0str\0ip\0checkDataHandleOk\0"
    "dataList\0ipChangeOk\0dataDownOk\0"
    "dataDownSiemensModbusMap\0getModbusMap\0"
    "QVector<QString>\0vecStr\0"
    "dataForSiemensNetDataDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HandleReData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    3,   77,    2, 0x06 /* Public */,
       4,    2,   84,    2, 0x26 /* Public | MethodCloned */,
       4,    1,   89,    2, 0x26 /* Public | MethodCloned */,
       8,    2,   92,    2, 0x06 /* Public */,
      12,    3,   97,    2, 0x06 /* Public */,
      15,    1,  104,    2, 0x06 /* Public */,
      17,    0,  107,    2, 0x06 /* Public */,
      18,    0,  108,    2, 0x06 /* Public */,
      19,    0,  109,    2, 0x06 /* Public */,
      20,    1,  110,    2, 0x06 /* Public */,
      23,    3,  113,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UShort,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QStringList,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UShort,   13,   14,    7,
    QMetaType::Void, QMetaType::QStringList,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UShort,    5,   14,    7,

       0        // eod
};

void HandleReData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HandleReData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findEquMessage((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->haveIpNeedChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 2: _t->haveIpNeedChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->haveIpNeedChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->getParameterMod((*reinterpret_cast< QList<int>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 5: _t->dataDown((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 6: _t->checkDataHandleOk((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->ipChangeOk(); break;
        case 8: _t->dataDownOk(); break;
        case 9: _t->dataDownSiemensModbusMap(); break;
        case 10: _t->getModbusMap((*reinterpret_cast< QVector<QString>(*)>(_a[1]))); break;
        case 11: _t->dataForSiemensNetDataDown((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HandleReData::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::findEquMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QString , QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::haveIpNeedChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QList<int> , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::getParameterMod)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QString , QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::dataDown)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::checkDataHandleOk)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::ipChangeOk)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::dataDownOk)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::dataDownSiemensModbusMap)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::getModbusMap)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (HandleReData::*)(QString , QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HandleReData::dataForSiemensNetDataDown)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HandleReData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_HandleReData.data,
    qt_meta_data_HandleReData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HandleReData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HandleReData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HandleReData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HandleReData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HandleReData::findEquMessage(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HandleReData::haveIpNeedChange(QString _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void HandleReData::getParameterMod(QList<int> _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HandleReData::dataDown(QString _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HandleReData::checkDataHandleOk(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HandleReData::ipChangeOk()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void HandleReData::dataDownOk()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void HandleReData::dataDownSiemensModbusMap()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void HandleReData::getModbusMap(QVector<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HandleReData::dataForSiemensNetDataDown(QString _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
