/****************************************************************************
** Meta object code from reading C++ file 'About.h'
**
** Created: Sun Nov 17 20:18:04 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../About.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'About.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_About[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      25,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_About[] = {
    "About\0\0onButtonClicked()\0contactByQQ()\0"
};

void About::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        About *_t = static_cast<About *>(_o);
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        case 1: _t->contactByQQ(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData About::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject About::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_About,
      qt_meta_data_About, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &About::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *About::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *About::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_About))
        return static_cast<void*>(const_cast< About*>(this));
    return QDialog::qt_metacast(_clname);
}

int About::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE