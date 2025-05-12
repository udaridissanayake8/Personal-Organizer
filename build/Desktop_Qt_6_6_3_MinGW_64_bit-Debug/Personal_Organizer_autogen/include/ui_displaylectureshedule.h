/********************************************************************************
** Form generated from reading UI file 'displaylectureshedule.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYLECTURESHEDULE_H
#define UI_DISPLAYLECTURESHEDULE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DisplayLectureShedule
{
public:
    QLabel *label;
    QTableView *DisplayLecTable;
    QPushButton *DisplayShedule;
    QLabel *label_2;
    QPushButton *BackDis;

    void setupUi(QDialog *DisplayLectureShedule)
    {
        if (DisplayLectureShedule->objectName().isEmpty())
            DisplayLectureShedule->setObjectName("DisplayLectureShedule");
        DisplayLectureShedule->resize(800, 700);
        DisplayLectureShedule->setMaximumSize(QSize(800, 700));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        DisplayLectureShedule->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        DisplayLectureShedule->setWindowIcon(icon);
        label = new QLabel(DisplayLectureShedule);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 391, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(27);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        DisplayLecTable = new QTableView(DisplayLectureShedule);
        DisplayLecTable->setObjectName("DisplayLecTable");
        DisplayLecTable->setGeometry(QRect(70, 240, 661, 341));
        DisplayShedule = new QPushButton(DisplayLectureShedule);
        DisplayShedule->setObjectName("DisplayShedule");
        DisplayShedule->setGeometry(QRect(280, 170, 221, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(16);
        DisplayShedule->setFont(font2);
        DisplayShedule->setCursor(QCursor(Qt::PointingHandCursor));
        DisplayShedule->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(DisplayLectureShedule);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, 0, 1091, 701));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        BackDis = new QPushButton(DisplayLectureShedule);
        BackDis->setObjectName("BackDis");
        BackDis->setGeometry(QRect(50, 50, 81, 41));
        BackDis->setStyleSheet(QString::fromUtf8("image: url(:/images/left-arrow.png);"));
        label_2->raise();
        label->raise();
        DisplayLecTable->raise();
        DisplayShedule->raise();
        BackDis->raise();

        retranslateUi(DisplayLectureShedule);

        QMetaObject::connectSlotsByName(DisplayLectureShedule);
    } // setupUi

    void retranslateUi(QDialog *DisplayLectureShedule)
    {
        DisplayLectureShedule->setWindowTitle(QCoreApplication::translate("DisplayLectureShedule", "Display Lecture Shedule", nullptr));
        label->setText(QCoreApplication::translate("DisplayLectureShedule", "Lecture Shedule", nullptr));
        DisplayShedule->setText(QCoreApplication::translate("DisplayLectureShedule", "Display Shedule", nullptr));
        label_2->setText(QString());
        BackDis->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DisplayLectureShedule: public Ui_DisplayLectureShedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYLECTURESHEDULE_H
