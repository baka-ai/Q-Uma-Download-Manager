/****************************************************************************
** Meta object code from reading C++ file 'dialogwgetrc.h'
**
** Created: Tue 12. Oct 18:48:55 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogwgetrc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogwgetrc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogWgetrc[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      24,   13,   13,   13, 0x0a,
      32,   13,   13,   13, 0x0a,
      37,   13,   13,   13, 0x0a,
      46,   13,   13,   13, 0x0a,
      59,   13,   13,   13, 0x0a,
      73,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogWgetrc[] = {
    "DialogWgetrc\0\0Default()\0Apply()\0Ok()\0"
    "Cancel()\0readWgetRc()\0writeWgetRc()\0"
    "change(int)\0"
};

const QMetaObject DialogWgetrc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogWgetrc,
      qt_meta_data_DialogWgetrc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogWgetrc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogWgetrc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogWgetrc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogWgetrc))
        return static_cast<void*>(const_cast< DialogWgetrc*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogWgetrc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Default(); break;
        case 1: Apply(); break;
        case 2: Ok(); break;
        case 3: Cancel(); break;
        case 4: readWgetRc(); break;
        case 5: writeWgetRc(); break;
        case 6: change((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
