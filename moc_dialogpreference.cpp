/****************************************************************************
** Meta object code from reading C++ file 'dialogpreference.h'
**
** Created: Wed Jun 30 19:16:43 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogpreference.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogpreference.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogPreference[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      32,   17,   17,   17, 0x0a,
      46,   17,   17,   17, 0x0a,
      63,   17,   17,   17, 0x0a,
      87,   17,   17,   17, 0x0a,
      96,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogPreference[] = {
    "DialogPreference\0\0applyConfig()\0"
    "closeDialog()\0changeCategory()\0"
    "browseCategorySaveDir()\0leType()\0"
    "leSaveDir()\0"
};

const QMetaObject DialogPreference::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogPreference,
      qt_meta_data_DialogPreference, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogPreference::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogPreference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogPreference::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogPreference))
        return static_cast<void*>(const_cast< DialogPreference*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogPreference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: applyConfig(); break;
        case 1: closeDialog(); break;
        case 2: changeCategory(); break;
        case 3: browseCategorySaveDir(); break;
        case 4: leType(); break;
        case 5: leSaveDir(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
