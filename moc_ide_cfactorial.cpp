/****************************************************************************
** Meta object code from reading C++ file 'ide_cfactorial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "forms/ide_cfactorial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ide_cfactorial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IDE_CFactorial_t {
    QByteArrayData data[18];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IDE_CFactorial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IDE_CFactorial_t qt_meta_stringdata_IDE_CFactorial = {
    {
QT_MOC_LITERAL(0, 0, 14), // "IDE_CFactorial"
QT_MOC_LITERAL(1, 15, 20), // "on_RunButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "on_ClearStdOut_clicked"
QT_MOC_LITERAL(4, 60, 22), // "on_ClearAppLog_clicked"
QT_MOC_LITERAL(5, 83, 16), // "separarExpresion"
QT_MOC_LITERAL(6, 100, 6), // "string"
QT_MOC_LITERAL(7, 107, 4), // "code"
QT_MOC_LITERAL(8, 112, 21), // "on_StepButton_clicked"
QT_MOC_LITERAL(9, 134, 8), // "esNumero"
QT_MOC_LITERAL(10, 143, 5), // "valor"
QT_MOC_LITERAL(11, 149, 16), // "validarExpresion"
QT_MOC_LITERAL(12, 166, 4), // "tipo"
QT_MOC_LITERAL(13, 171, 6), // "nombre"
QT_MOC_LITERAL(14, 178, 11), // "generarJson"
QT_MOC_LITERAL(15, 190, 7), // "tamanio"
QT_MOC_LITERAL(16, 198, 20), // "dividirEnExpresiones"
QT_MOC_LITERAL(17, 219, 5) // "Texto"

    },
    "IDE_CFactorial\0on_RunButton_clicked\0"
    "\0on_ClearStdOut_clicked\0on_ClearAppLog_clicked\0"
    "separarExpresion\0string\0code\0"
    "on_StepButton_clicked\0esNumero\0valor\0"
    "validarExpresion\0tipo\0nombre\0generarJson\0"
    "tamanio\0dividirEnExpresiones\0Texto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IDE_CFactorial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      11,    3,   69,    2, 0x08 /* Private */,
      14,    4,   76,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6,   10,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,   12,   13,   10,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,   12,   13,   10,   15,
    QMetaType::Void, 0x80000000 | 6,   17,

       0        // eod
};

void IDE_CFactorial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IDE_CFactorial *_t = static_cast<IDE_CFactorial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_RunButton_clicked(); break;
        case 1: _t->on_ClearStdOut_clicked(); break;
        case 2: _t->on_ClearAppLog_clicked(); break;
        case 3: _t->separarExpresion((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 4: _t->on_StepButton_clicked(); break;
        case 5: { bool _r = _t->esNumero((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->validarExpresion((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< string(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->generarJson((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< string(*)>(_a[3])),(*reinterpret_cast< string(*)>(_a[4]))); break;
        case 8: _t->dividirEnExpresiones((*reinterpret_cast< string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject IDE_CFactorial::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_IDE_CFactorial.data,
      qt_meta_data_IDE_CFactorial,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IDE_CFactorial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IDE_CFactorial::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IDE_CFactorial.stringdata0))
        return static_cast<void*>(const_cast< IDE_CFactorial*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int IDE_CFactorial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
