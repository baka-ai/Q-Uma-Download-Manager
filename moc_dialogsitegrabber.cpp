/****************************************************************************
** Meta object code from reading C++ file 'dialogsitegrabber.h'
**
** Created: Wed Jun 30 19:16:47 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogsitegrabber.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogsitegrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogSiteGrabber[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   18,   18,   18, 0x0a,
      91,   18,   18,   18, 0x0a,
      98,   18,   18,   18, 0x0a,
     104,   18,   18,   18, 0x0a,
     113,   18,   18,   18, 0x0a,
     125,   18,   18,   18, 0x0a,
     139,  134,   18,   18, 0x0a,
     161,  156,   18,   18, 0x0a,
     180,  178,   18,   18, 0x0a,
     204,  178,   18,   18, 0x0a,
     227,  178,   18,   18, 0x0a,
     250,  178,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogSiteGrabber[] = {
    "DialogSiteGrabber\0\0name,dir,url,opt\0"
    "runProject(QString,QString,QString,QStringList)\0"
    "next()\0back()\0run()\0cancel()\0addFilter()\0"
    "browse()\0page\0pageChanged(int)\0type\0"
    "typeChanged(int)\0s\0lePNameChanged(QString)\0"
    "lePDirChanged(QString)\0lePURLChanged(QString)\0"
    "leFTPURLChanged(QString)\0"
};

const QMetaObject DialogSiteGrabber::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogSiteGrabber,
      qt_meta_data_DialogSiteGrabber, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogSiteGrabber::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogSiteGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogSiteGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSiteGrabber))
        return static_cast<void*>(const_cast< DialogSiteGrabber*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogSiteGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: runProject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 1: next(); break;
        case 2: back(); break;
        case 3: run(); break;
        case 4: cancel(); break;
        case 5: addFilter(); break;
        case 6: browse(); break;
        case 7: pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: lePNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: lePDirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: lePURLChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: leFTPURLChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DialogSiteGrabber::runProject(QString _t1, QString _t2, QString _t3, QStringList _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
