/****************************************************************************
** Meta object code from reading C++ file 'browserwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../browser/browserwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrowserWindow_t {
    QByteArrayData data[15];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowserWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowserWindow_t qt_meta_stringdata_BrowserWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BrowserWindow"
QT_MOC_LITERAL(1, 14, 12), // "on_s_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "handleNewWindowTriggered"
QT_MOC_LITERAL(4, 53, 25), // "handleWebViewLoadProgress"
QT_MOC_LITERAL(5, 79, 25), // "handleWebViewTitleChanged"
QT_MOC_LITERAL(6, 105, 5), // "title"
QT_MOC_LITERAL(7, 111, 23), // "handleWebViewUrlChanged"
QT_MOC_LITERAL(8, 135, 3), // "url"
QT_MOC_LITERAL(9, 139, 24), // "handleWebViewIconChanged"
QT_MOC_LITERAL(10, 164, 4), // "icon"
QT_MOC_LITERAL(11, 169, 7), // "tologin"
QT_MOC_LITERAL(12, 177, 6), // "ywFunc"
QT_MOC_LITERAL(13, 184, 6), // "dyFunc"
QT_MOC_LITERAL(14, 191, 18) // "examination_Report"

    },
    "BrowserWindow\0on_s_clicked\0\0"
    "handleNewWindowTriggered\0"
    "handleWebViewLoadProgress\0"
    "handleWebViewTitleChanged\0title\0"
    "handleWebViewUrlChanged\0url\0"
    "handleWebViewIconChanged\0icon\0tologin\0"
    "ywFunc\0dyFunc\0examination_Report"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       7,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::QIcon,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BrowserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrowserWindow *_t = static_cast<BrowserWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_s_clicked(); break;
        case 1: _t->handleNewWindowTriggered(); break;
        case 2: _t->handleWebViewLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handleWebViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleWebViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->handleWebViewIconChanged((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 6: _t->tologin(); break;
        case 7: _t->ywFunc(); break;
        case 8: _t->dyFunc(); break;
        case 9: _t->examination_Report(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrowserWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrowserWindow::on_s_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BrowserWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BrowserWindow.data,
      qt_meta_data_BrowserWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BrowserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserWindow.stringdata0))
        return static_cast<void*>(const_cast< BrowserWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BrowserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void BrowserWindow::on_s_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
