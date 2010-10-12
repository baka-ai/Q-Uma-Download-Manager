/****************************************************************************
** Meta object code from reading C++ file 'batchdialog.h'
**
** Created: Wed Jul 7 23:17:14 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "batchdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatchDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   12,   12,   12, 0x0a,
      68,   12,   12,   12, 0x0a,
      76,   12,   12,   12, 0x0a,
      87,   12,   12,   12, 0x0a,
     110,  105,   12,   12, 0x0a,
     131,  129,   12,   12, 0x0a,
     148,   12,   12,   12, 0x0a,
     160,   12,   12,   12, 0x0a,
     172,   12,   12,   12, 0x0a,
     184,   12,   12,   12, 0x0a,
     197,   12,   12,   12, 0x0a,
     208,   12,   12,   12, 0x0a,
     217,   12,   12,   12, 0x0a,
     228,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BatchDialog[] = {
    "BatchDialog\0\0url,dir\0sendList(QStringList,QString)\0"
    "changeWildcard()\0pbOke()\0pbCancel()\0"
    "showHideFirstTo()\0stat\0toggleStatus(bool)\0"
    "w\0setWildcard(int)\0isiContoh()\0"
    "swapAngka()\0cekLetter()\0swapLetter()\0"
    "setMinTo()\0browse()\0setStart()\0setStop()\0"
};

const QMetaObject BatchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchDialog,
      qt_meta_data_BatchDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatchDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchDialog))
        return static_cast<void*>(const_cast< BatchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendList((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: changeWildcard(); break;
        case 2: pbOke(); break;
        case 3: pbCancel(); break;
        case 4: showHideFirstTo(); break;
        case 5: toggleStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: setWildcard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: isiContoh(); break;
        case 8: swapAngka(); break;
        case 9: cekLetter(); break;
        case 10: swapLetter(); break;
        case 11: setMinTo(); break;
        case 12: browse(); break;
        case 13: setStart(); break;
        case 14: setStop(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BatchDialog::sendList(QStringList _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
