/****************************************************************************
** Meta object code from reading C++ file 'Cursor2D.h'
**
** Created: Fri Apr 6 15:12:23 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Cursor2D.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cursor2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Cursor2D[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   20,    9,    9, 0x0a,
      51,   43,    9,    9, 0x0a,
      73,   66,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Cursor2D[] = {
    "Cursor2D\0\0Updated()\0color\0SetColor(QColor)\0"
    "nPixels\0SetRadius(int)\0nStyle\0"
    "SetStyle(int)\0"
};

const QMetaObject Cursor2D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cursor2D,
      qt_meta_data_Cursor2D, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Cursor2D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Cursor2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Cursor2D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cursor2D))
        return static_cast<void*>(const_cast< Cursor2D*>(this));
    return QObject::qt_metacast(_clname);
}

int Cursor2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Updated(); break;
        case 1: SetColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: SetRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: SetStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Cursor2D::Updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE