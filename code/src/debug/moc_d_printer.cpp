/****************************************************************************
** Meta object code from reading C++ file 'd_printer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printer/d_printer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'd_printer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_d_printer_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_d_printer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_d_printer_t qt_meta_stringdata_d_printer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "d_printer"
QT_MOC_LITERAL(1, 10, 12), // "printPreview"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "QPrinter*"
QT_MOC_LITERAL(4, 34, 7), // "printer"
QT_MOC_LITERAL(5, 42, 9) // "createPdf"

    },
    "d_printer\0printPreview\0\0QPrinter*\0"
    "printer\0createPdf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_d_printer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void d_printer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        d_printer *_t = static_cast<d_printer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->createPdf(); break;
        default: ;
        }
    }
}

const QMetaObject d_printer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_d_printer.data,
      qt_meta_data_d_printer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *d_printer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *d_printer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_d_printer.stringdata0))
        return static_cast<void*>(const_cast< d_printer*>(this));
    return QWidget::qt_metacast(_clname);
}

int d_printer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE