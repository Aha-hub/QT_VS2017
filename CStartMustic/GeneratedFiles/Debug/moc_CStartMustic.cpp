/****************************************************************************
** Meta object code from reading C++ file 'CStartMustic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CStartMustic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CStartMustic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CStartMustic_t {
    QByteArrayData data[18];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CStartMustic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CStartMustic_t qt_meta_stringdata_CStartMustic = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CStartMustic"
QT_MOC_LITERAL(1, 13, 11), // "show1Widget"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "show2Widget"
QT_MOC_LITERAL(4, 38, 8), // "addMusic"
QT_MOC_LITERAL(5, 47, 9), // "playMusic"
QT_MOC_LITERAL(6, 57, 9), // "nextMusic"
QT_MOC_LITERAL(7, 67, 9), // "prevMusic"
QT_MOC_LITERAL(8, 77, 12), // "upDateSlider"
QT_MOC_LITERAL(9, 90, 7), // "postion"
QT_MOC_LITERAL(10, 98, 10), // "upDateVlol"
QT_MOC_LITERAL(11, 109, 3), // "val"
QT_MOC_LITERAL(12, 113, 9), // "clickPlay"
QT_MOC_LITERAL(13, 123, 1), // "i"
QT_MOC_LITERAL(14, 125, 1), // "j"
QT_MOC_LITERAL(15, 127, 14), // "upDatePlayTime"
QT_MOC_LITERAL(16, 142, 7), // "getTime"
QT_MOC_LITERAL(17, 150, 8) // "playtime"

    },
    "CStartMustic\0show1Widget\0\0show2Widget\0"
    "addMusic\0playMusic\0nextMusic\0prevMusic\0"
    "upDateSlider\0postion\0upDateVlol\0val\0"
    "clickPlay\0i\0j\0upDatePlayTime\0getTime\0"
    "playtime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CStartMustic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    2,   81,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::QString, QMetaType::Int,   17,

       0        // eod
};

void CStartMustic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CStartMustic *_t = static_cast<CStartMustic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show1Widget(); break;
        case 1: _t->show2Widget(); break;
        case 2: _t->addMusic(); break;
        case 3: _t->playMusic(); break;
        case 4: _t->nextMusic(); break;
        case 5: _t->prevMusic(); break;
        case 6: _t->upDateSlider((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->upDateVlol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->clickPlay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->upDatePlayTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: { QString _r = _t->getTime((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject CStartMustic::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CStartMustic.data,
      qt_meta_data_CStartMustic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CStartMustic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CStartMustic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CStartMustic.stringdata0))
        return static_cast<void*>(const_cast< CStartMustic*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CStartMustic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
