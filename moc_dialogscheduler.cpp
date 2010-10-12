/****************************************************************************
** Meta object code from reading C++ file 'dialogscheduler.h'
**
** Created: Wed Jun 30 20:09:06 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogscheduler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogscheduler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogScheduler[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      28,   16,   16,   16, 0x05,
      38,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   16,   16,   16, 0x0a,
      69,   16,   16,   16, 0x0a,
      77,   16,   16,   16, 0x0a,
      85,   16,   16,   16, 0x0a,
      92,   16,   16,   16, 0x0a,
      97,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogScheduler[] = {
    "DialogScheduler\0\0startAll()\0stopAll()\0"
    "applyAll()\0queueItemSelected()\0apply()\0"
    "start()\0stop()\0up()\0down()\0"
};

const QMetaObject DialogScheduler::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogScheduler,
      qt_meta_data_DialogScheduler, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogScheduler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogScheduler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogScheduler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogScheduler))
        return static_cast<void*>(const_cast< DialogScheduler*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogScheduler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startAll(); break;
        case 1: stopAll(); break;
        case 2: applyAll(); break;
        case 3: queueItemSelected(); break;
        case 4: apply(); break;
        case 5: start(); break;
        case 6: stop(); break;
        case 7: up(); break;
        case 8: down(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DialogScheduler::startAll()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DialogScheduler::stopAll()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DialogScheduler::applyAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
