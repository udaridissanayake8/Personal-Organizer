/********************************************************************************
** Form generated from reading UI file 'addincome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINCOME_H
#define UI_ADDINCOME_H

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

class Ui_AddIncome
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *Amount;
    QLabel *label_3;
    QComboBox *IncomeSource;
    QLabel *label_4;
    QDateEdit *DateIncome;
    QLabel *label_5;
    QTextEdit *IncomeDesc;
    QTableView *IncomeTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveIncome;
    QPushButton *ResetIncome;
    QLabel *label_6;
    QPushButton *BackInc;

    void setupUi(QDialog *AddIncome)
    {
        if (AddIncome->objectName().isEmpty())
            AddIncome->setObjectName("AddIncome");
        AddIncome->resize(800, 700);
        AddIncome->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        AddIncome->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddIncome->setWindowIcon(icon);
        label = new QLabel(AddIncome);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 10, 361, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayoutWidget = new QWidget(AddIncome);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(119, 69, 561, 261));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(0, 0, 0, 8);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Amount = new QLineEdit(formLayoutWidget);
        Amount->setObjectName("Amount");
        Amount->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, Amount);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        IncomeSource = new QComboBox(formLayoutWidget);
        IncomeSource->addItem(QString());
        IncomeSource->addItem(QString());
        IncomeSource->addItem(QString());
        IncomeSource->addItem(QString());
        IncomeSource->setObjectName("IncomeSource");
        IncomeSource->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, IncomeSource);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        DateIncome = new QDateEdit(formLayoutWidget);
        DateIncome->setObjectName("DateIncome");
        DateIncome->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, DateIncome);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        IncomeDesc = new QTextEdit(formLayoutWidget);
        IncomeDesc->setObjectName("IncomeDesc");
        IncomeDesc->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, IncomeDesc);

        IncomeTable = new QTableView(AddIncome);
        IncomeTable->setObjectName("IncomeTable");
        IncomeTable->setGeometry(QRect(120, 430, 551, 231));
        layoutWidget = new QWidget(AddIncome);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(440, 370, 231, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SaveIncome = new QPushButton(layoutWidget);
        SaveIncome->setObjectName("SaveIncome");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Banner")});
        font3.setPointSize(14);
        SaveIncome->setFont(font3);
        SaveIncome->setCursor(QCursor(Qt::PointingHandCursor));
        SaveIncome->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SaveIncome);

        ResetIncome = new QPushButton(layoutWidget);
        ResetIncome->setObjectName("ResetIncome");
        ResetIncome->setFont(font3);
        ResetIncome->setCursor(QCursor(Qt::PointingHandCursor));
        ResetIncome->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(ResetIncome);

        label_6 = new QLabel(AddIncome);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-230, -10, 1291, 711));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackInc = new QPushButton(AddIncome);
        BackInc->setObjectName("BackInc");
        BackInc->setGeometry(QRect(20, 20, 91, 41));
        BackInc->setCursor(QCursor(Qt::PointingHandCursor));
        BackInc->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_6->raise();
        label->raise();
        formLayoutWidget->raise();
        IncomeTable->raise();
        layoutWidget->raise();
        BackInc->raise();

        retranslateUi(AddIncome);

        QMetaObject::connectSlotsByName(AddIncome);
    } // setupUi

    void retranslateUi(QDialog *AddIncome)
    {
        AddIncome->setWindowTitle(QCoreApplication::translate("AddIncome", "AddIncome", nullptr));
        label->setText(QCoreApplication::translate("AddIncome", "Add Incomes", nullptr));
        label_2->setText(QCoreApplication::translate("AddIncome", "Amount", nullptr));
        label_3->setText(QCoreApplication::translate("AddIncome", "Income Source", nullptr));
        IncomeSource->setItemText(0, QCoreApplication::translate("AddIncome", "Job", nullptr));
        IncomeSource->setItemText(1, QCoreApplication::translate("AddIncome", "Allowance from parents", nullptr));
        IncomeSource->setItemText(2, QCoreApplication::translate("AddIncome", "Scholarships", nullptr));
        IncomeSource->setItemText(3, QCoreApplication::translate("AddIncome", "Student aid", nullptr));

        label_4->setText(QCoreApplication::translate("AddIncome", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("AddIncome", "Description", nullptr));
        SaveIncome->setText(QCoreApplication::translate("AddIncome", "Save", nullptr));
        ResetIncome->setText(QCoreApplication::translate("AddIncome", "Reset", nullptr));
        label_6->setText(QString());
        BackInc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddIncome: public Ui_AddIncome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINCOME_H
