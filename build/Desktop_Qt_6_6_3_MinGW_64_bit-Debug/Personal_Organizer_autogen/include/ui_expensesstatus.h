/********************************************************************************
** Form generated from reading UI file 'expensesstatus.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSESSTATUS_H
#define UI_EXPENSESSTATUS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpensesStatus
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Barchart;
    QLabel *label;
    QLabel *label_2;
    QPushButton *BackSt;

    void setupUi(QDialog *ExpensesStatus)
    {
        if (ExpensesStatus->objectName().isEmpty())
            ExpensesStatus->setObjectName("ExpensesStatus");
        ExpensesStatus->resize(800, 700);
        ExpensesStatus->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        ExpensesStatus->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExpensesStatus->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(ExpensesStatus);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 120, 671, 511));
        Barchart = new QVBoxLayout(verticalLayoutWidget);
        Barchart->setObjectName("Barchart");
        Barchart->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(ExpensesStatus);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 371, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(ExpensesStatus);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-150, -10, 1271, 711));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackSt = new QPushButton(ExpensesStatus);
        BackSt->setObjectName("BackSt");
        BackSt->setGeometry(QRect(40, 30, 81, 41));
        BackSt->setCursor(QCursor(Qt::PointingHandCursor));
        BackSt->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_2->raise();
        verticalLayoutWidget->raise();
        label->raise();
        BackSt->raise();

        retranslateUi(ExpensesStatus);

        QMetaObject::connectSlotsByName(ExpensesStatus);
    } // setupUi

    void retranslateUi(QDialog *ExpensesStatus)
    {
        ExpensesStatus->setWindowTitle(QCoreApplication::translate("ExpensesStatus", "ExpensesStatus", nullptr));
        label->setText(QCoreApplication::translate("ExpensesStatus", "Financial Reports", nullptr));
        label_2->setText(QString());
        BackSt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExpensesStatus: public Ui_ExpensesStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSESSTATUS_H
