/****************************************************************************
** Meta object code from reading C++ file 'widgetutama.h'
**
** Created: Tue 12. Oct 18:49:00 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgetutama.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetutama.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetUtama[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   13,   12,   12, 0x05,
      44,   12,   12,   12, 0x05,
      65,   61,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   12,   12,   12, 0x0a,
     124,   92,   12,   12, 0x0a,
     199,  181,   12,   12, 0x0a,
     247,   12,   12,   12, 0x0a,
     259,   12,   12,   12, 0x0a,
     276,   12,   12,   12, 0x0a,
     294,   12,   12,   12, 0x0a,
     305,   12,   12,   12, 0x0a,
     327,   12,  323,   12, 0x0a,
     346,   12,  323,   12, 0x0a,
     367,  362,  323,   12, 0x0a,
     386,   12,  323,   12, 0x0a,
     401,   12,  323,   12, 0x0a,
     419,   12,  323,   12, 0x0a,
     429,   12,   12,   12, 0x0a,
     444,   12,   12,   12, 0x0a,
     461,   12,   12,   12, 0x0a,
     479,  477,   12,   12, 0x0a,
     509,  477,   12,   12, 0x0a,
     536,   12,   12,   12, 0x0a,
     546,   12,   12,   12, 0x0a,
     556,   12,   12,   12, 0x0a,
     568,   12,   12,   12, 0x0a,
     581,   12,   12,   12, 0x0a,
     593,   12,   12,   12, 0x0a,
     604,   12,   12,   12, 0x0a,
     615,   12,   12,   12, 0x0a,
     629,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetUtama[] = {
    "WidgetUtama\0\0pos,stat\0itemSelected(int,int)\0"
    "itemUnselected()\0url\0finished(QString)\0"
    "addRow()\0url,e,startnow,cat,saveDir,size\0"
    "addNew(QString,QStringList,bool,QString,QString,QString)\0"
    "name,dir,url,opts\0"
    "addGrabber(QString,QString,QString,QStringList)\0"
    "removeRow()\0removeComplete()\0"
    "categoryChanged()\0complete()\0"
    "updateInterface()\0int\0saveDownloadStat()\0"
    "startDownload()\0pNum\0startDownload(int)\0"
    "stopDownload()\0restartDownload()\0"
    "readLog()\0updateStatus()\0startScheduled()\0"
    "stopScheduled()\0i\0categorySelected(QModelIndex)\0"
    "cellActivated(QModelIndex)\0bacaLog()\0"
    "stopAll()\0removeALL()\0checkQueue()\0"
    "checkTime()\0loadList()\0saveList()\0"
    "addItemList()\0removeItemList()\0"
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
        case 0: itemSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: itemUnselected(); break;
        case 2: finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: addRow(); break;
        case 4: addNew((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 5: addGrabber((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 6: removeRow(); break;
        case 7: removeComplete(); break;
        case 8: categoryChanged(); break;
        case 9: complete(); break;
        case 10: updateInterface(); break;
        case 11: { int _r = saveDownloadStat();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = startDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = startDownload((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = stopDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = restartDownload();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = readLog();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: updateStatus(); break;
        case 18: startScheduled(); break;
        case 19: stopScheduled(); break;
        case 20: categorySelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 21: cellActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 22: bacaLog(); break;
        case 23: stopAll(); break;
        case 24: removeALL(); break;
        case 25: checkQueue(); break;
        case 26: checkTime(); break;
        case 27: loadList(); break;
        case 28: saveList(); break;
        case 29: addItemList(); break;
        case 30: removeItemList(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void WidgetUtama::itemSelected(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetUtama::itemUnselected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WidgetUtama::finished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
