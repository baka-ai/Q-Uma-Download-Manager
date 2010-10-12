/****************************************************************************
** Meta object code from reading C++ file 'dialogeditor.h'
**
** Created: Sun Aug 8 20:35:10 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogEditor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      26,   13,   13,   13, 0x08,
      35,   13,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogEditor[] = {
    "DialogEditor\0\0clearText()\0backUp()\0"
    "saveRC()\0closeDialog()\0"
};

const QMetaObject DialogEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DialogEditor,
      qt_meta_data_DialogEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogEditor))
        return static_cast<void*>(const_cast< DialogEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int DialogEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearText(); break;
        case 1: backUp(); break;
        case 2: saveRC(); break;
        case 3: closeDialog(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
