/********************************************************************************
** Form generated from reading UI file 'setbudgets.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETBUDGETS_H
#define UI_SETBUDGETS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_SetBudgets
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *CategoryBud;
    QLabel *label_3;
    QLineEdit *Budget;
    QTableView *BudgetTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveBud;
    QPushButton *ResetBud;
    QPushButton *DisplayBud;
    QLabel *label_4;
    QPushButton *BackBud;

    void setupUi(QDialog *SetBudgets)
    {
        if (SetBudgets->objectName().isEmpty())
            SetBudgets->setObjectName("SetBudgets");
        SetBudgets->resize(800, 700);
        SetBudgets->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        SetBudgets->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        SetBudgets->setWindowIcon(icon);
        label = new QLabel(SetBudgets);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 30, 231, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(SetBudgets);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(140, 110, 511, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(26);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        CategoryBud = new QComboBox(formLayoutWidget);
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->addItem(QString());
        CategoryBud->setObjectName("CategoryBud");
        CategoryBud->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, CategoryBud);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        Budget = new QLineEdit(formLayoutWidget);
        Budget->setObjectName("Budget");
        Budget->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, Budget);

        BudgetTable = new QTableView(SetBudgets);
        BudgetTable->setObjectName("BudgetTable");
        BudgetTable->setGeometry(QRect(145, 321, 501, 271));
        layoutWidget = new QWidget(SetBudgets);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 260, 343, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SaveBud = new QPushButton(layoutWidget);
        SaveBud->setObjectName("SaveBud");
        SaveBud->setFont(font2);
        SaveBud->setCursor(QCursor(Qt::PointingHandCursor));
        SaveBud->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SaveBud);

        ResetBud = new QPushButton(layoutWidget);
        ResetBud->setObjectName("ResetBud");
        ResetBud->setFont(font2);
        ResetBud->setCursor(QCursor(Qt::PointingHandCursor));
        ResetBud->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ResetBud);

        DisplayBud = new QPushButton(layoutWidget);
        DisplayBud->setObjectName("DisplayBud");
        DisplayBud->setFont(font2);
        DisplayBud->setCursor(QCursor(Qt::PointingHandCursor));
        DisplayBud->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(DisplayBud);

        label_4 = new QLabel(SetBudgets);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-90, 0, 1161, 701));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackBud = new QPushButton(SetBudgets);
        BackBud->setObjectName("BackBud");
        BackBud->setGeometry(QRect(40, 30, 71, 41));
        BackBud->setCursor(QCursor(Qt::PointingHandCursor));
        BackBud->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_4->raise();
        label->raise();
        formLayoutWidget->raise();
        BudgetTable->raise();
        layoutWidget->raise();
        BackBud->raise();

        retranslateUi(SetBudgets);

        QMetaObject::connectSlotsByName(SetBudgets);
    } // setupUi

    void retranslateUi(QDialog *SetBudgets)
    {
        SetBudgets->setWindowTitle(QCoreApplication::translate("SetBudgets", "SetBudgets", nullptr));
        label->setText(QCoreApplication::translate("SetBudgets", "Set Budgets", nullptr));
        label_2->setText(QCoreApplication::translate("SetBudgets", "Cetegory", nullptr));
        CategoryBud->setItemText(0, QCoreApplication::translate("SetBudgets", "Food", nullptr));
        CategoryBud->setItemText(1, QCoreApplication::translate("SetBudgets", "Entertainment", nullptr));
        CategoryBud->setItemText(2, QCoreApplication::translate("SetBudgets", "Traveling", nullptr));
        CategoryBud->setItemText(3, QCoreApplication::translate("SetBudgets", "Clothing", nullptr));
        CategoryBud->setItemText(4, QCoreApplication::translate("SetBudgets", "Education equipment", nullptr));
        CategoryBud->setItemText(5, QCoreApplication::translate("SetBudgets", "University fees", nullptr));
        CategoryBud->setItemText(6, QCoreApplication::translate("SetBudgets", "Other", nullptr));

        label_3->setText(QCoreApplication::translate("SetBudgets", "Budget", nullptr));
        Budget->setText(QCoreApplication::translate("SetBudgets", "4500", nullptr));
        SaveBud->setText(QCoreApplication::translate("SetBudgets", "Save", nullptr));
        ResetBud->setText(QCoreApplication::translate("SetBudgets", "Reset", nullptr));
        DisplayBud->setText(QCoreApplication::translate("SetBudgets", "Display Budgets", nullptr));
        label_4->setText(QString());
        BackBud->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SetBudgets: public Ui_SetBudgets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETBUDGETS_H
