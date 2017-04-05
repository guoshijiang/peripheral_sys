/****************************************************************************
** Meta object code from reading C++ file 'examination_report.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/report/examination_report.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'examination_report.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_examination_report_t {
    QByteArrayData data[10];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_examination_report_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_examination_report_t qt_meta_stringdata_examination_report = {
    {
QT_MOC_LITERAL(0, 0, 18), // "examination_report"
QT_MOC_LITERAL(1, 19, 13), // "createToolbar"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(4, 61, 26), // "on_pushButton_last_clicked"
QT_MOC_LITERAL(5, 88, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(6, 112, 4), // "arg1"
QT_MOC_LITERAL(7, 117, 27), // "on_pushButton_first_clicked"
QT_MOC_LITERAL(8, 145, 27), // "on_pushButton_print_clicked"
QT_MOC_LITERAL(9, 173, 25) // "on_pushButton_end_clicked"

    },
    "examination_report\0createToolbar\0\0"
    "on_pushButton_next_clicked\0"
    "on_pushButton_last_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_first_clicked\0"
    "on_pushButton_print_clicked\0"
    "on_pushButton_end_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_examination_report[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void examination_report::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        examination_report *_t = static_cast<examination_report *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createToolbar(); break;
        case 1: _t->on_pushButton_next_clicked(); break;
        case 2: _t->on_pushButton_last_clicked(); break;
        case 3: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_first_clicked(); break;
        case 5: _t->on_pushButton_print_clicked(); break;
        case 6: _t->on_pushButton_end_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject examination_report::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_examination_report.data,
      qt_meta_data_examination_report,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *examination_report::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *examination_report::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_examination_report.stringdata0))
        return static_cast<void*>(const_cast< examination_report*>(this));
    return QWidget::qt_metacast(_clname);
}

int examination_report::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
