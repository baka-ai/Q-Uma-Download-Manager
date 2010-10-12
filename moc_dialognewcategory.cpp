/****************************************************************************
** Meta object code from reading C++ file 'dialognewcategory.h'
**
** Created: Mon Jun 7 16:52:29 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialognewcategory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialognewcategory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogNewCategory[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   54,   18,   18, 0x0a,
      74,   18,   18,   18, 0x0a,
      81,   18,   18,   18, 0x0a,
      88,   18,   18,   18, 0x0a,
     102,   18,   97,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogNewCategory[] = {
    "DialogNewCategory\0\0,\0"
    "sendNewCategory(QString,QString)\0i\0"
    "stackChanged(int)\0next()\0back()\0"
    "finish()\0bool\0cekName()\0"
};

const QMetaObject DialogNewCategory::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogNewCategory,
      qt_meta_data_DialogNewCategory, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogNewCategory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogNewCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogNewCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogNewCategory))
        return static_cast<void*>(const_cast< DialogNewCategory*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogNewCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendNewCategory((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: stackChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: next(); break;
        case 3: back(); break;
        case 4: finish(); break;
        case 5: { bool _r = cekName();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DialogNewCategory::sendNewCategory(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
