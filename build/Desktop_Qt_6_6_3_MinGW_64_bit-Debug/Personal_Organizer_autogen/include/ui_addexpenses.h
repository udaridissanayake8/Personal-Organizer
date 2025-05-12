/********************************************************************************
** Form generated from reading UI file 'addexpenses.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXPENSES_H
#define UI_ADDEXPENSES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddExpenses
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *ExpenAmount;
    QLabel *label_3;
    QComboBox *Category;
    QLabel *label_4;
    QDateEdit *ExpenDate;
    QLabel *label_5;
    QTextEdit *ExpenDesc;
    QTableView *ExpenTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveExpen;
    QPushButton *ResetExpen;
    QLabel *label_6;
    QPushButton *Backbtn;

    void setupUi(QDialog *AddExpenses)
    {
        if (AddExpenses->objectName().isEmpty())
            AddExpenses->setObjectName("AddExpenses");
        AddExpenses->resize(800, 700);
        AddExpenses->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        AddExpenses->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddExpenses->setWindowIcon(icon);
        label = new QLabel(AddExpenses);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 341, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(AddExpenses);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(99, 89, 591, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        ExpenAmount = new QLineEdit(formLayoutWidget);
        ExpenAmount->setObjectName("ExpenAmount");
        ExpenAmount->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, ExpenAmount);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        Category = new QComboBox(formLayoutWidget);
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->setObjectName("Category");
        Category->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, Category);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        ExpenDate = new QDateEdit(formLayoutWidget);
        ExpenDate->setObjectName("ExpenDate");
        ExpenDate->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, ExpenDate);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        ExpenDesc = new QTextEdit(formLayoutWidget);
        ExpenDesc->setObjectName("ExpenDesc");

        formLayout->setWidget(3, QFormLayout::FieldRole, ExpenDesc);

        ExpenTable = new QTableView(AddExpenses);
        ExpenTable->setObjectName("ExpenTable");
        ExpenTable->setGeometry(QRect(100, 380, 591, 271));
        layoutWidget = new QWidget(AddExpenses);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(460, 330, 231, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SaveExpen = new QPushButton(layoutWidget);
        SaveExpen->setObjectName("SaveExpen");
        SaveExpen->setFont(font2);
        SaveExpen->setCursor(QCursor(Qt::PointingHandCursor));
        SaveExpen->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SaveExpen);

        ResetExpen = new QPushButton(layoutWidget);
        ResetExpen->setObjectName("ResetExpen");
        ResetExpen->setFont(font2);
        ResetExpen->setCursor(QCursor(Qt::PointingHandCursor));
        ResetExpen->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ResetExpen);

        label_6 = new QLabel(AddExpenses);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-30, -50, 1141, 771));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        Backbtn = new QPushButton(AddExpenses);
        Backbtn->setObjectName("Backbtn");
        Backbtn->setGeometry(QRect(20, 20, 81, 41));
        Backbtn->setCursor(QCursor(Qt::PointingHandCursor));
        Backbtn->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_6->raise();
        label->raise();
        formLayoutWidget->raise();
        ExpenTable->raise();
        layoutWidget->raise();
        Backbtn->raise();

        retranslateUi(AddExpenses);

        QMetaObject::connectSlotsByName(AddExpenses);
    } // setupUi

    void retranslateUi(QDialog *AddExpenses)
    {
        AddExpenses->setWindowTitle(QCoreApplication::translate("AddExpenses", "AddExpenses", nullptr));
        label->setText(QCoreApplication::translate("AddExpenses", "Add Expenses", nullptr));
        label_2->setText(QCoreApplication::translate("AddExpenses", "Amount", nullptr));
        label_3->setText(QCoreApplication::translate("AddExpenses", "Category", nullptr));
        Category->setItemText(0, QCoreApplication::translate("AddExpenses", "Food", nullptr));
        Category->setItemText(1, QCoreApplication::translate("AddExpenses", "Entertainment", nullptr));
        Category->setItemText(2, QCoreApplication::translate("AddExpenses", "Traveling", nullptr));
        Category->setItemText(3, QCoreApplication::translate("AddExpenses", "Clothing", nullptr));
        Category->setItemText(4, QCoreApplication::translate("AddExpenses", "Education equipment", nullptr));
        Category->setItemText(5, QCoreApplication::translate("AddExpenses", "University fees", nullptr));
        Category->setItemText(6, QCoreApplication::translate("AddExpenses", "Other", nullptr));

        label_4->setText(QCoreApplication::translate("AddExpenses", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("AddExpenses", "Description", nullptr));
        SaveExpen->setText(QCoreApplication::translate("AddExpenses", "Save", nullptr));
        ResetExpen->setText(QCoreApplication::translate("AddExpenses", "Reset", nullptr));
        label_6->setText(QString());
        Backbtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddExpenses: public Ui_AddExpenses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXPENSES_H
