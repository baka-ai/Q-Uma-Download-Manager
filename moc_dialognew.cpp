/****************************************************************************
** Meta object code from reading C++ file 'dialognew.h'
**
** Created: Wed Jun 30 19:16:48 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialognew.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialognew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogNew[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,
      53,   51,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   10,   10,   10, 0x0a,
      90,   10,   10,   10, 0x0a,
      97,   10,   10,   10, 0x0a,
     108,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogNew[] = {
    "DialogNew\0\0a,u,p\0diterima(QString,QString,QString)\0"
    "a\0diterima(QString)\0getFromClipboard()\0"
    "pbOk()\0pbCancel()\0getAuth()\0"
};

const QMetaObject DialogNew::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogNew,
      qt_meta_data_DialogNew, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogNew::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogNew::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogNew))
        return static_cast<void*>(const_cast< DialogNew*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: diterima((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: diterima((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: getFromClipboard(); break;
        case 3: pbOk(); break;
        case 4: pbCancel(); break;
        case 5: getAuth(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DialogNew::diterima(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogNew::diterima(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
