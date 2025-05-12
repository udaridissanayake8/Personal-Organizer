/********************************************************************************
** Form generated from reading UI file 'addimportantdates.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDIMPORTANTDATES_H
#define UI_ADDIMPORTANTDATES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddImportantDates
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDateEdit *ImDate;
    QLabel *label_3;
    QLineEdit *ImDesc;
    QTableView *ImpotantDatesTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ImSave;
    QPushButton *ImReset;
    QLabel *label_4;
    QPushButton *BackIm;

    void setupUi(QDialog *AddImportantDates)
    {
        if (AddImportantDates->objectName().isEmpty())
            AddImportantDates->setObjectName("AddImportantDates");
        AddImportantDates->resize(800, 700);
        AddImportantDates->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        AddImportantDates->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddImportantDates->setWindowIcon(icon);
        label = new QLabel(AddImportantDates);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 301, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(AddImportantDates);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(79, 120, 631, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(28);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(15);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        ImDate = new QDateEdit(formLayoutWidget);
        ImDate->setObjectName("ImDate");
        ImDate->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, ImDate);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        ImDesc = new QLineEdit(formLayoutWidget);
        ImDesc->setObjectName("ImDesc");
        ImDesc->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, ImDesc);

        ImpotantDatesTable = new QTableView(AddImportantDates);
        ImpotantDatesTable->setObjectName("ImpotantDatesTable");
        ImpotantDatesTable->setGeometry(QRect(85, 341, 621, 291));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Banner")});
        font3.setPointSize(12);
        ImpotantDatesTable->setFont(font3);
        layoutWidget = new QWidget(AddImportantDates);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(510, 260, 201, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ImSave = new QPushButton(layoutWidget);
        ImSave->setObjectName("ImSave");
        ImSave->setFont(font3);
        ImSave->setCursor(QCursor(Qt::PointingHandCursor));
        ImSave->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ImSave);

        ImReset = new QPushButton(layoutWidget);
        ImReset->setObjectName("ImReset");
        ImReset->setFont(font3);
        ImReset->setCursor(QCursor(Qt::PointingHandCursor));
        ImReset->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ImReset);

        label_4 = new QLabel(AddImportantDates);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-40, -50, 1091, 791));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackIm = new QPushButton(AddImportantDates);
        BackIm->setObjectName("BackIm");
        BackIm->setGeometry(QRect(30, 40, 101, 41));
        BackIm->setCursor(QCursor(Qt::PointingHandCursor));
        BackIm->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_4->raise();
        label->raise();
        formLayoutWidget->raise();
        ImpotantDatesTable->raise();
        layoutWidget->raise();
        BackIm->raise();

        retranslateUi(AddImportantDates);

        QMetaObject::connectSlotsByName(AddImportantDates);
    } // setupUi

    void retranslateUi(QDialog *AddImportantDates)
    {
        AddImportantDates->setWindowTitle(QCoreApplication::translate("AddImportantDates", "ImportantDates", nullptr));
        label->setText(QCoreApplication::translate("AddImportantDates", "Important Dates", nullptr));
        label_2->setText(QCoreApplication::translate("AddImportantDates", "Date", nullptr));
        label_3->setText(QCoreApplication::translate("AddImportantDates", "Description", nullptr));
        ImDesc->setText(QCoreApplication::translate("AddImportantDates", "oop", nullptr));
        ImSave->setText(QCoreApplication::translate("AddImportantDates", "Save", nullptr));
        ImReset->setText(QCoreApplication::translate("AddImportantDates", "Rest", nullptr));
        label_4->setText(QString());
        BackIm->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddImportantDates: public Ui_AddImportantDates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDIMPORTANTDATES_H
