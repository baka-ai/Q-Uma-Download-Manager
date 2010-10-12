/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jul 12 16:17:42 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     106,   11,   11,   11, 0x08,
     120,   11,   11,   11, 0x08,
     141,  134,   11,   11, 0x08,
     199,  190,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     304,   11,   11,   11, 0x08,
     315,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,
     355,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     375,   11,   11,   11, 0x08,
     387,   11,   11,   11, 0x08,
     398,   11,   11,   11, 0x08,
     420,   11,   11,   11, 0x08,
     432,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     459,   11,   11,   11, 0x08,
     474,   11,   11,   11, 0x08,
     488,   11,   11,   11, 0x08,
     508,   11,   11,   11, 0x08,
     527,   11,   11,   11, 0x08,
     541,   11,   11,   11, 0x08,
     562,   11,   11,   11, 0x08,
     581,   11,   11,   11, 0x08,
     594,   11,   11,   11, 0x08,
     609,  607,   11,   11, 0x08,
     645,  641,   11,   11, 0x08,
     708,   11,  696,   11, 0x08,
     739,  726,   11,   11, 0x08,
     764,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0,,\0"
    "spiderNewDownload(QString,QString,QString)\0"
    "spiderNewDownload(QString)\0"
    "showDownloadDialog()\0readSetting()\0"
    "saveSetting()\0reason\0"
    "iconActivated(QSystemTrayIcon::ActivationReason)\0"
    ",,,,,,,,\0"
    "dlAddNew(QString,QString,QString,bool,bool,QString,QString,QString,QSt"
    "ring)\0"
    "dlAddBatch()\0dlSiteGrabber()\0dlImport()\0"
    "dlExport()\0dlCloseWindow()\0dlQuitApps()\0"
    "jsResume()\0jsStop()\0jsStopAll()\0"
    "jsRemove()\0jsRemoveAllComplete()\0"
    "jsRestart()\0queStartQue()\0queStopQue()\0"
    "queManageQue()\0queSchedule()\0"
    "settingPreference()\0settingConfigure()\0"
    "settingView()\0toolsScriptManager()\0"
    "toolsSpeedMapper()\0helpManual()\0"
    "helpCredit()\0,\0terimaList(QStringList,QString)\0"
    ",,,\0terimaGrabber(QString,QString,QString,QStringList)\0"
    "QStringList\0generateOptions()\0"
    "jobNum,state\0getItemStat(int,QString)\0"
    "deactiveMenu()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: spiderNewDownload((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: spiderNewDownload((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: showDownloadDialog(); break;
        case 3: readSetting(); break;
        case 4: saveSetting(); break;
        case 5: iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 6: dlAddNew((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 7: dlAddBatch(); break;
        case 8: dlSiteGrabber(); break;
        case 9: dlImport(); break;
        case 10: dlExport(); break;
        case 11: dlCloseWindow(); break;
        case 12: dlQuitApps(); break;
        case 13: jsResume(); break;
        case 14: jsStop(); break;
        case 15: jsStopAll(); break;
        case 16: jsRemove(); break;
        case 17: jsRemoveAllComplete(); break;
        case 18: jsRestart(); break;
        case 19: queStartQue(); break;
        case 20: queStopQue(); break;
        case 21: queManageQue(); break;
        case 22: queSchedule(); break;
        case 23: settingPreference(); break;
        case 24: settingConfigure(); break;
        case 25: settingView(); break;
        case 26: toolsScriptManager(); break;
        case 27: toolsSpeedMapper(); break;
        case 28: helpManual(); break;
        case 29: helpCredit(); break;
        case 30: terimaList((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: terimaGrabber((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 32: { QStringList _r = generateOptions();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 33: getItemStat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: deactiveMenu(); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
