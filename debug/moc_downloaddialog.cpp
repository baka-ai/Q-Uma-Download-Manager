/****************************************************************************
** Meta object code from reading C++ file 'downloaddialog.h'
**
** Created: Tue 12. Oct 18:48:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../downloaddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloaddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DownloadDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      63,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     143,   15,   15,   15, 0x08,
     152,   15,   15,   15, 0x08,
     163,   15,   15,   15, 0x08,
     172,   15,   15,   15, 0x08,
     188,   15,   15,   15, 0x08,
     201,   15,   15,   15, 0x08,
     214,   15,   15,   15, 0x08,
     223,   15,   15,   15, 0x08,
     237,   15,   15,   15, 0x08,
     258,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DownloadDialog[] = {
    "DownloadDialog\0\0"
    "url,saveAs,fileName,dl,acc,uname,pass,kat,size\0"
    "sendDownload(QString,QString,QString,bool,bool,QString,QString,QString"
    ",QString)\0"
    "browse()\0download()\0cancle()\0"
    "showWidgetAdv()\0saveConfig()\0loadConfig()\0"
    "cekUrl()\0getFileName()\0categoryChanged(int)\0"
    "readSTO()\0"
};

const QMetaObject DownloadDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DownloadDialog,
      qt_meta_data_DownloadDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownloadDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadDialog))
        return static_cast<void*>(const_cast< DownloadDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendDownload((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 1: browse(); break;
        case 2: download(); break;
        case 3: cancle(); break;
        case 4: showWidgetAdv(); break;
        case 5: saveConfig(); break;
        case 6: loadConfig(); break;
        case 7: cekUrl(); break;
        case 8: getFileName(); break;
        case 9: categoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: readSTO(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DownloadDialog::sendDownload(QString _t1, QString _t2, QString _t3, bool _t4, bool _t5, QString _t6, QString _t7, QString _t8, QString _t9)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
