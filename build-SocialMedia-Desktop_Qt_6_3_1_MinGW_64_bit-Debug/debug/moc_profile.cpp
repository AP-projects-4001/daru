/****************************************************************************
** Meta object code from reading C++ file 'profile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SocialMedia/profile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Profile_t {
    const uint offsetsAndSize[20];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Profile_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Profile_t qt_meta_stringdata_Profile = {
    {
QT_MOC_LITERAL(0, 7), // "Profile"
QT_MOC_LITERAL(8, 28), // "on_usernameChangebtn_clicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 22), // "on_IDChangebtn_clicked"
QT_MOC_LITERAL(61, 25), // "on_phoneChangebtn_clicked"
QT_MOC_LITERAL(87, 24), // "on_passChangebtn_clicked"
QT_MOC_LITERAL(112, 30), // "on_profileChangeButton_clicked"
QT_MOC_LITERAL(143, 16), // "on_check_clicked"
QT_MOC_LITERAL(160, 1), // "x"
QT_MOC_LITERAL(162, 2) // "id"

    },
    "Profile\0on_usernameChangebtn_clicked\0"
    "\0on_IDChangebtn_clicked\0"
    "on_phoneChangebtn_clicked\0"
    "on_passChangebtn_clicked\0"
    "on_profileChangeButton_clicked\0"
    "on_check_clicked\0x\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Profile[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    2,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    8,    9,

       0        // eod
};

void Profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Profile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_usernameChangebtn_clicked(); break;
        case 1: _t->on_IDChangebtn_clicked(); break;
        case 2: _t->on_phoneChangebtn_clicked(); break;
        case 3: _t->on_passChangebtn_clicked(); break;
        case 4: _t->on_profileChangeButton_clicked(); break;
        case 5: _t->on_check_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Profile::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Profile.offsetsAndSize,
    qt_meta_data_Profile,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Profile_t
, QtPrivate::TypeAndForceComplete<Profile, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Profile.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
