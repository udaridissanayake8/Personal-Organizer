/****************************************************************************
** Meta object code from reading C++ file 'setbudgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../setbudgets.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setbudgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSetBudgetsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSetBudgetsENDCLASS = QtMocHelpers::stringData(
    "SetBudgets",
    "on_SaveBud_clicked",
    "",
    "on_DisplayBud_clicked",
    "on_ResetBud_clicked",
    "on_BackBud_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSetBudgetsENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[20];
    char stringdata5[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSetBudgetsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSetBudgetsENDCLASS_t qt_meta_stringdata_CLASSSetBudgetsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "SetBudgets"
        QT_MOC_LITERAL(11, 18),  // "on_SaveBud_clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 21),  // "on_DisplayBud_clicked"
        QT_MOC_LITERAL(53, 19),  // "on_ResetBud_clicked"
        QT_MOC_LITERAL(73, 18)   // "on_BackBud_clicked"
    },
    "SetBudgets",
    "on_SaveBud_clicked",
    "",
    "on_DisplayBud_clicked",
    "on_ResetBud_clicked",
    "on_BackBud_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSetBudgetsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SetBudgets::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSetBudgetsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSetBudgetsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSetBudgetsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SetBudgets, std::true_type>,
        // method 'on_SaveBud_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DisplayBud_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ResetBud_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BackBud_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SetBudgets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetBudgets *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_SaveBud_clicked(); break;
        case 1: _t->on_DisplayBud_clicked(); break;
        case 2: _t->on_ResetBud_clicked(); break;
        case 3: _t->on_BackBud_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SetBudgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetBudgets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSetBudgetsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SetBudgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
