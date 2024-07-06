/****************************************************************************
** Meta object code from reading C++ file 'createjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainProjectPhase1-main/createjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_createjob_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createjob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createjob_t qt_meta_stringdata_createjob = {
    {
QT_MOC_LITERAL(0, 0, 9), // "createjob"
QT_MOC_LITERAL(1, 10, 15), // "on_home_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "on_network_clicked"
QT_MOC_LITERAL(4, 46, 14), // "on_job_clicked"
QT_MOC_LITERAL(5, 61, 20), // "on_messaging_clicked"
QT_MOC_LITERAL(6, 82, 13) // "on_me_clicked"

    },
    "createjob\0on_home_clicked\0\0"
    "on_network_clicked\0on_job_clicked\0"
    "on_messaging_clicked\0on_me_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createjob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void createjob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<createjob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_home_clicked(); break;
        case 1: _t->on_network_clicked(); break;
        case 2: _t->on_job_clicked(); break;
        case 3: _t->on_messaging_clicked(); break;
        case 4: _t->on_me_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject createjob::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_createjob.data,
    qt_meta_data_createjob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *createjob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createjob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_createjob.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int createjob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
