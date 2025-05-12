/********************************************************************************
** Form generated from reading UI file 'addlectureshedule.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLECTURESHEDULE_H
#define UI_ADDLECTURESHEDULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddLectureShedule
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QTimeEdit *StartTime;
    QLabel *label_3;
    QTimeEdit *EndTime;
    QLabel *label_4;
    QLineEdit *Monday;
    QLabel *label_5;
    QLineEdit *Tuesday;
    QLabel *label_6;
    QLineEdit *Wednesday;
    QLabel *label_7;
    QLineEdit *Thursday;
    QLabel *label_8;
    QLineEdit *Friday;
    QTableView *LecTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveLec;
    QPushButton *ResetLec;
    QLabel *label_9;
    QPushButton *BackLec;

    void setupUi(QDialog *AddLectureShedule)
    {
        if (AddLectureShedule->objectName().isEmpty())
            AddLectureShedule->setObjectName("AddLectureShedule");
        AddLectureShedule->resize(800, 800);
        AddLectureShedule->setMaximumSize(QSize(800, 800));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        AddLectureShedule->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddLectureShedule->setWindowIcon(icon);
        label = new QLabel(AddLectureShedule);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 10, 391, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(AddLectureShedule);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(140, 100, 511, 340));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(13);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        StartTime = new QTimeEdit(formLayoutWidget);
        StartTime->setObjectName("StartTime");
        StartTime->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, StartTime);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 15));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setMargin(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_3);

        EndTime = new QTimeEdit(formLayoutWidget);
        EndTime->setObjectName("EndTime");
        EndTime->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, EndTime);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        Monday = new QLineEdit(formLayoutWidget);
        Monday->setObjectName("Monday");
        Monday->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, Monday);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        Tuesday = new QLineEdit(formLayoutWidget);
        Tuesday->setObjectName("Tuesday");
        Tuesday->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, Tuesday);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        Wednesday = new QLineEdit(formLayoutWidget);
        Wednesday->setObjectName("Wednesday");
        Wednesday->setFont(font2);

        formLayout->setWidget(5, QFormLayout::FieldRole, Wednesday);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        Thursday = new QLineEdit(formLayoutWidget);
        Thursday->setObjectName("Thursday");
        Thursday->setFont(font2);

        formLayout->setWidget(6, QFormLayout::FieldRole, Thursday);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        Friday = new QLineEdit(formLayoutWidget);
        Friday->setObjectName("Friday");
        Friday->setFont(font2);

        formLayout->setWidget(7, QFormLayout::FieldRole, Friday);

        LecTable = new QTableView(AddLectureShedule);
        LecTable->setObjectName("LecTable");
        LecTable->setGeometry(QRect(40, 510, 721, 261));
        layoutWidget = new QWidget(AddLectureShedule);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(440, 460, 317, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SaveLec = new QPushButton(layoutWidget);
        SaveLec->setObjectName("SaveLec");
        SaveLec->setFont(font2);
        SaveLec->setCursor(QCursor(Qt::PointingHandCursor));
        SaveLec->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SaveLec);

        ResetLec = new QPushButton(layoutWidget);
        ResetLec->setObjectName("ResetLec");
        ResetLec->setFont(font2);
        ResetLec->setCursor(QCursor(Qt::PointingHandCursor));
        ResetLec->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ResetLec);

        label_9 = new QLabel(AddLectureShedule);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-100, -1, 1251, 801));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackLec = new QPushButton(AddLectureShedule);
        BackLec->setObjectName("BackLec");
        BackLec->setGeometry(QRect(40, 30, 83, 41));
        BackLec->setCursor(QCursor(Qt::PointingHandCursor));
        BackLec->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_9->raise();
        label->raise();
        formLayoutWidget->raise();
        LecTable->raise();
        layoutWidget->raise();
        BackLec->raise();

        retranslateUi(AddLectureShedule);

        QMetaObject::connectSlotsByName(AddLectureShedule);
    } // setupUi

    void retranslateUi(QDialog *AddLectureShedule)
    {
        AddLectureShedule->setWindowTitle(QCoreApplication::translate("AddLectureShedule", "AddLectureShedule", nullptr));
        label->setText(QCoreApplication::translate("AddLectureShedule", "Add Lecture Shedule", nullptr));
        label_2->setText(QCoreApplication::translate("AddLectureShedule", "Time", nullptr));
        label_3->setText(QCoreApplication::translate("AddLectureShedule", "To", nullptr));
        label_4->setText(QCoreApplication::translate("AddLectureShedule", "Monday", nullptr));
        label_5->setText(QCoreApplication::translate("AddLectureShedule", "Tuesday", nullptr));
        label_6->setText(QCoreApplication::translate("AddLectureShedule", "Wednesday", nullptr));
        label_7->setText(QCoreApplication::translate("AddLectureShedule", "Thursday", nullptr));
        label_8->setText(QCoreApplication::translate("AddLectureShedule", "Friday", nullptr));
        SaveLec->setText(QCoreApplication::translate("AddLectureShedule", "Save", nullptr));
        ResetLec->setText(QCoreApplication::translate("AddLectureShedule", "Reset", nullptr));
        label_9->setText(QString());
        BackLec->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddLectureShedule: public Ui_AddLectureShedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLECTURESHEDULE_H
