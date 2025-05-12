/********************************************************************************
** Form generated from reading UI file 'monthlyreports.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHLYREPORTS_H
#define UI_MONTHLYREPORTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_MonthlyReports
{
public:
    QLabel *label;
    QPushButton *Reportsbtn;
    QTableView *ReportsTable;
    QLabel *label_2;
    QPushButton *BackMo;

    void setupUi(QDialog *MonthlyReports)
    {
        if (MonthlyReports->objectName().isEmpty())
            MonthlyReports->setObjectName("MonthlyReports");
        MonthlyReports->resize(800, 700);
        MonthlyReports->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        MonthlyReports->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        MonthlyReports->setWindowIcon(icon);
        label = new QLabel(MonthlyReports);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 40, 331, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Reportsbtn = new QPushButton(MonthlyReports);
        Reportsbtn->setObjectName("Reportsbtn");
        Reportsbtn->setGeometry(QRect(270, 130, 271, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(16);
        Reportsbtn->setFont(font2);
        Reportsbtn->setCursor(QCursor(Qt::PointingHandCursor));
        Reportsbtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));
        ReportsTable = new QTableView(MonthlyReports);
        ReportsTable->setObjectName("ReportsTable");
        ReportsTable->setGeometry(QRect(115, 261, 551, 201));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Banner")});
        font3.setPointSize(12);
        ReportsTable->setFont(font3);
        label_2 = new QLabel(MonthlyReports);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-120, -20, 1261, 721));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackMo = new QPushButton(MonthlyReports);
        BackMo->setObjectName("BackMo");
        BackMo->setGeometry(QRect(60, 48, 71, 41));
        BackMo->setCursor(QCursor(Qt::PointingHandCursor));
        BackMo->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_2->raise();
        label->raise();
        Reportsbtn->raise();
        ReportsTable->raise();
        BackMo->raise();

        retranslateUi(MonthlyReports);

        QMetaObject::connectSlotsByName(MonthlyReports);
    } // setupUi

    void retranslateUi(QDialog *MonthlyReports)
    {
        MonthlyReports->setWindowTitle(QCoreApplication::translate("MonthlyReports", "MonthlyReports", nullptr));
        label->setText(QCoreApplication::translate("MonthlyReports", "Financial Reports", nullptr));
        Reportsbtn->setText(QCoreApplication::translate("MonthlyReports", "Display Reports", nullptr));
        label_2->setText(QString());
        BackMo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MonthlyReports: public Ui_MonthlyReports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHLYREPORTS_H
