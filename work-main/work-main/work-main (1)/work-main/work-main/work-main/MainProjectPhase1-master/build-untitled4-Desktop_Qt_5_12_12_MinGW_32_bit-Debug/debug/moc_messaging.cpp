/****************************************************************************
** Meta object code from reading C++ file 'messaging.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainProjectPhase1-main/messaging.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messaging.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Messaging_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Messaging_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Messaging_t qt_meta_stringdata_Messaging = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Messaging"
QT_MOC_LITERAL(1, 10, 15), // "on_home_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "on_job_clicked"
QT_MOC_LITERAL(4, 42, 13), // "on_me_clicked"
QT_MOC_LITERAL(5, 56, 18), // "on_network_clicked"
QT_MOC_LITERAL(6, 75, 19), // "onSendButtonClicked"
QT_MOC_LITERAL(7, 95, 21) // "onUploadButtonClicked"

    },
    "Messaging\0on_home_clicked\0\0on_job_clicked\0"
    "on_me_clicked\0on_network_clicked\0"
    "onSendButtonClicked\0onUploadButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Messaging[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Messaging::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Messaging *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_home_clicked(); break;
        case 1: _t->on_job_clicked(); break;
        case 2: _t->on_me_clicked(); break;
        case 3: _t->on_network_clicked(); break;
        case 4: _t->onSendButtonClicked(); break;
        case 5: _t->onUploadButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Messaging::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Messaging.data,
    qt_meta_data_Messaging,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Messaging::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Messaging::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Messaging.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Messaging::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
