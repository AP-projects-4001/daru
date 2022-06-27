/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SocialMedia/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
<<<<<<< HEAD
<<<<<<< HEAD
    const uint offsetsAndSize[2];
    char stringdata0[11];
=======
    const uint offsetsAndSize[6];
    char stringdata0[39];
>>>>>>> loggin
=======
    const uint offsetsAndSize[8];
    char stringdata0[63];
>>>>>>> loggin
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
<<<<<<< HEAD
QT_MOC_LITERAL(0, 10) // "MainWindow"

    },
    "MainWindow"
=======
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_Register_Button_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 23) // "on_Login_Button_clicked"

    },
    "MainWindow\0on_Register_Button_clicked\0"
<<<<<<< HEAD
    ""
>>>>>>> loggin
=======
    "\0on_Login_Button_clicked"
>>>>>>> loggin
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
<<<<<<< HEAD
       0,    0, // methods
=======
       1,   14, // methods
>>>>>>> loggin
=======
       2,   14, // methods
>>>>>>> loggin
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

<<<<<<< HEAD
=======
 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

>>>>>>> loggin
       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
<<<<<<< HEAD
    (void)_o;
    (void)_id;
    (void)_c;
=======
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Register_Button_clicked(); break;
        case 1: _t->on_Login_Button_clicked(); break;
        default: ;
        }
    }
>>>>>>> loggin
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
<<<<<<< HEAD
<<<<<<< HEAD

=======
, QtPrivate::TypeAndForceComplete<void, std::false_type>
>>>>>>> loggin
=======
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
>>>>>>> loggin


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
<<<<<<< HEAD
=======
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
>>>>>>> loggin
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
