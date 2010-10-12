/****************************************************************************
** Meta object code from reading C++ file 'downloadchild.h'
**
** Created: Wed Jun 30 19:16:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "downloadchild.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadchild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DownloadChild[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   14,   14,   14, 0x0a,
      41,   37,   14,   14, 0x0a,
      67,   14,   58,   14, 0x0a,
      81,   76,   14,   14, 0x0a,
     103,   14,   58,   14, 0x0a,
     121,  117,   14,   14, 0x0a,
     138,   14,   58,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DownloadChild[] = {
    "DownloadChild\0\0finished()\0download()\0"
    "url\0setURL(QString*)\0QString*\0getURL()\0"
    "file\0setSaveFile(QString*)\0getSaveFile()\0"
    "opt\0setOpt(QString*)\0getOpt()\0"
};

const QMetaObject DownloadChild::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DownloadChild,
      qt_meta_data_DownloadChild, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownloadChild::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownloadChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownloadChild::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadChild))
        return static_cast<void*>(const_cast< DownloadChild*>(this));
    return QWidget::qt_metacast(_clname);
}

int DownloadChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finished(); break;
        case 1: download(); break;
        case 2: setURL((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 3: { QString* _r = getURL();
            if (_a[0]) *reinterpret_cast< QString**>(_a[0]) = _r; }  break;
        case 4: setSaveFile((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 5: { QString* _r = getSaveFile();
            if (_a[0]) *reinterpret_cast< QString**>(_a[0]) = _r; }  break;
        case 6: setOpt((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 7: { QString* _r = getOpt();
            if (_a[0]) *reinterpret_cast< QString**>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DownloadChild::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
