/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QPushButton *AddIncome;
    QPushButton *AddExoenses;
    QPushButton *SetBudgets;
    QPushButton *MonthlyReports;
    QPushButton *ExpensesStatus;
    QPushButton *AddLectureShedule;
    QPushButton *AddImportantDates;
    QPushButton *DisplayLec;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *Alert;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1300, 800);
        Dashboard->setMaximumSize(QSize(1300, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard->setWindowIcon(icon);
        AddIncome = new QPushButton(Dashboard);
        AddIncome->setObjectName("AddIncome");
        AddIncome->setGeometry(QRect(140, 280, 241, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(15);
        AddIncome->setFont(font);
        AddIncome->setCursor(QCursor(Qt::PointingHandCursor));
        AddIncome->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        AddExoenses = new QPushButton(Dashboard);
        AddExoenses->setObjectName("AddExoenses");
        AddExoenses->setGeometry(QRect(400, 280, 241, 121));
        AddExoenses->setFont(font);
        AddExoenses->setCursor(QCursor(Qt::PointingHandCursor));
        AddExoenses->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        SetBudgets = new QPushButton(Dashboard);
        SetBudgets->setObjectName("SetBudgets");
        SetBudgets->setGeometry(QRect(660, 280, 241, 121));
        SetBudgets->setFont(font);
        SetBudgets->setCursor(QCursor(Qt::PointingHandCursor));
        SetBudgets->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        MonthlyReports = new QPushButton(Dashboard);
        MonthlyReports->setObjectName("MonthlyReports");
        MonthlyReports->setGeometry(QRect(920, 280, 241, 121));
        MonthlyReports->setFont(font);
        MonthlyReports->setCursor(QCursor(Qt::PointingHandCursor));
        MonthlyReports->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        ExpensesStatus = new QPushButton(Dashboard);
        ExpensesStatus->setObjectName("ExpensesStatus");
        ExpensesStatus->setGeometry(QRect(140, 420, 241, 121));
        ExpensesStatus->setFont(font);
        ExpensesStatus->setCursor(QCursor(Qt::PointingHandCursor));
        ExpensesStatus->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        AddLectureShedule = new QPushButton(Dashboard);
        AddLectureShedule->setObjectName("AddLectureShedule");
        AddLectureShedule->setGeometry(QRect(400, 420, 241, 121));
        AddLectureShedule->setFont(font);
        AddLectureShedule->setCursor(QCursor(Qt::PointingHandCursor));
        AddLectureShedule->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        AddImportantDates = new QPushButton(Dashboard);
        AddImportantDates->setObjectName("AddImportantDates");
        AddImportantDates->setGeometry(QRect(920, 420, 241, 121));
        AddImportantDates->setFont(font);
        AddImportantDates->setCursor(QCursor(Qt::PointingHandCursor));
        AddImportantDates->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        DisplayLec = new QPushButton(Dashboard);
        DisplayLec->setObjectName("DisplayLec");
        DisplayLec->setGeometry(QRect(660, 420, 241, 121));
        DisplayLec->setFont(font);
        DisplayLec->setCursor(QCursor(Qt::PointingHandCursor));
        DisplayLec->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border:1;"));
        label_2 = new QLabel(Dashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, 70, 1361, 971));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/6071541.jpg);"));
        layoutWidget = new QWidget(Dashboard);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(26, 9, 351, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/images/ghjk.png);"));

        horizontalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(31);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(23, 0, 27);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        Alert = new QLabel(Dashboard);
        Alert->setObjectName("Alert");
        Alert->setGeometry(QRect(890, 40, 391, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("SimSun")});
        font2.setPointSize(15);
        font2.setBold(true);
        Alert->setFont(font2);
        Alert->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        Alert->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        layoutWidget->raise();
        label_2->raise();
        AddIncome->raise();
        AddExoenses->raise();
        SetBudgets->raise();
        MonthlyReports->raise();
        ExpensesStatus->raise();
        AddLectureShedule->raise();
        AddImportantDates->raise();
        DisplayLec->raise();
        Alert->raise();

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        AddIncome->setText(QCoreApplication::translate("Dashboard", "Add Income Sources", nullptr));
        AddExoenses->setText(QCoreApplication::translate("Dashboard", "Add Expenses", nullptr));
        SetBudgets->setText(QCoreApplication::translate("Dashboard", "Set Budgets", nullptr));
        MonthlyReports->setText(QCoreApplication::translate("Dashboard", "Monthly Reports", nullptr));
        ExpensesStatus->setText(QCoreApplication::translate("Dashboard", "Current Status of Expenses", nullptr));
        AddLectureShedule->setText(QCoreApplication::translate("Dashboard", "Add Lecture Shedule", nullptr));
        AddImportantDates->setText(QCoreApplication::translate("Dashboard", "Add Important Dates", nullptr));
        DisplayLec->setText(QCoreApplication::translate("Dashboard", "Display Lecture Shedule", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        Alert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
