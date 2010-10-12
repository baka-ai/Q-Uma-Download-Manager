/****************************************************************************
** Meta object code from reading C++ file 'logreader.h'
**
** Created: Tue 12. Oct 18:48:57 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../logreader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogReader[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x05,
      38,   34,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   10,   10,   10, 0x0a,
      64,   10,   10,   10, 0x0a,
      76,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LogReader[] = {
    "LogReader\0\0line\0lastLine(QString)\0log\0"
    "allLog(QString)\0readLog()\0startRead()\0"
    "stopRead()\0"
};

const QMetaObject LogReader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogReader,
      qt_meta_data_LogReader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogReader))
        return static_cast<void*>(const_cast< LogReader*>(this));
    return QWidget::qt_metacast(_clname);
}

int LogReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lastLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: allLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: readLog(); break;
        case 3: startRead(); break;
        case 4: stopRead(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LogReader::lastLine(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReader::allLog(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
