/****************************************************************************
** Meta object code from reading C++ file 'widgetutama.h'
**
** Created: Mon Jul 12 16:17:43 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgetutama.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetutama.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetUtama[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      48,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   12,   12,   12, 0x0a,
     106,   74,   12,   12, 0x0a,
     181,  163,   12,   12, 0x0a,
     229,   12,   12,   12, 0x0a,
     241,   12,   12,   12, 0x0a,
     259,   12,   12,   12, 0x0a,
     270,   12,   12,   12, 0x0a,
     292,   12,  288,   12, 0x0a,
     311,   12,  288,   12, 0x0a,
     332,  327,  288,   12, 0x0a,
     351,   12,  288,   12, 0x0a,
     366,   12,  288,   12, 0x0a,
     384,   12,  288,   12, 0x0a,
     394,   12,   12,   12, 0x0a,
     409,   12,   12,   12, 0x0a,
     426,   12,   12,   12, 0x0a,
     444,  442,   12,   12, 0x0a,
     474,  442,   12,   12, 0x0a,
     501,   12,   12,   12, 0x0a,
     511,   12,   12,   12, 0x0a,
     521,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetUtama[] = {
    "WidgetUtama\0\0pos,stat\0itemSelected(int,QString)\0"
    "itemUnselected()\0addRow()\0"
    "url,e,startnow,cat,saveDir,size\0"
    "addNew(QString,QStringList,bool,QString,QString,QString)\0"
    "name,dir,url,opts\0"
    "addGrabber(QString,QString,QString,QStringList)\0"
    "removeRow()\0categoryChanged()\0complete()\0"
    "updateInterface()\0int\0saveDownloadStat()\0"
    "startDownload()\0pNum\0startDownload(int)\0"
    "stopDownload()\0restartDownload()\0"
    "readLog()\0updateStatus()\0startScheduled()\0"
    "stopScheduled()\0i\0categorySelected(QModelIndex)\0"
    "cellActivated(QModelIndex)\0bacaLog()\0"
    "stopAll()\0removeALL()\0"
};

const QMetaObject WidgetUtama::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetUtama,
      qt_meta_data_WidgetUtama, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetUtama::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetUtama::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetUtama::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetUtama))
        return static_cast<void*>(const_cast< WidgetUtama*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetUtama::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: itemSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: itemUnselected(); break;
        case 2: addRow(); break;
        case 3: addNew((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 4: addGrabber((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 5: removeRow(); break;
        case 6: categoryChanged(); break;
        case 7: complete(); break;
        case 8: updateInterface(); break;
        case 9: { int _r = saveDownloadStat();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = startDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = startDownload((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = stopDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = restartDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = readLog();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: updateStatus(); break;
        case 16: startScheduled(); break;
        case 17: stopScheduled(); break;
        case 18: categorySelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 19: cellActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 20: bacaLog(); break;
        case 21: stopAll(); break;
        case 22: removeALL(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void WidgetUtama::itemSelected(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetUtama::itemUnselected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
