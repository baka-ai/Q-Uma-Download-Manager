/****************************************************************************
** Meta object code from reading C++ file 'dialoglinkchecker.h'
**
** Created: Tue 12. Oct 18:48:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialoglinkchecker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialoglinkchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogLinkChecker[] = {

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
      21,   19,   18,   18, 0x0a,
      43,   18,   18,   18, 0x0a,
      52,   18,   18,   18, 0x08,
      70,   18,   18,   18, 0x08,
      83,   18,   18,   18, 0x08,
      92,   18,   18,   18, 0x08,
      97,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogLinkChecker[] = {
    "DialogLinkChecker\0\0l\0setLinks(QStringList)\0"
    "tampil()\0checkSingleLink()\0selectLink()\0"
    "browse()\0ok()\0clOse()\0"
};

const QMetaObject DialogLinkChecker::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogLinkChecker,
      qt_meta_data_DialogLinkChecker, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogLinkChecker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogLinkChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogLinkChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogLinkChecker))
        return static_cast<void*>(const_cast< DialogLinkChecker*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogLinkChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setLinks((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: tampil(); break;
        case 2: checkSingleLink(); break;
        case 3: selectLink(); break;
        case 4: browse(); break;
        case 5: ok(); break;
        case 6: clOse(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
