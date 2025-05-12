/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Login;
    QPushButton *SignUp;
    QLabel *label_11;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1300, 800);
        LoginPage->setMaximumSize(QSize(1300, 800));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        LoginPage->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginPage->setWindowIcon(icon);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(840, 440, 391, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(45);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Login = new QPushButton(layoutWidget);
        Login->setObjectName("Login");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(18);
        font1.setBold(false);
        Login->setFont(font1);
        Login->setCursor(QCursor(Qt::PointingHandCursor));
        Login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(53, 11, 23, 255), stop:1 rgba(208, 43, 95, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(Login);

        SignUp = new QPushButton(layoutWidget);
        SignUp->setObjectName("SignUp");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(18);
        SignUp->setFont(font2);
        SignUp->setCursor(QCursor(Qt::PointingHandCursor));
        SignUp->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(53, 11, 23, 255), stop:1 rgba(208, 43, 95, 255));\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(SignUp);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(880, 370, 321, 43));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Banner")});
        font3.setPointSize(26);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, 120, 1331, 901));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/images/3540662.jpg);"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 330, 741, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(17);
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka Banner Semibold")});
        font4.setPointSize(11);
        label_6->setFont(font4);
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font4);
        label_7->setCursor(QCursor(Qt::ArrowCursor));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font4);
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font4);
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setFont(font4);
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_10);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 10, 591, 81));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/images/ghjk.png);"));

        horizontalLayout_2->addWidget(label_3);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Sitka Banner")});
        font5.setPointSize(38);
        font5.setBold(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(36, 0, 40);"));

        horizontalLayout_2->addWidget(label);

        LoginPage->setCentralWidget(centralwidget);
        label_2->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_11->raise();
        layoutWidget_2->raise();

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "LoginPage", nullptr));
        Login->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        SignUp->setText(QCoreApplication::translate("LoginPage", "Sign Up", nullptr));
        label_11->setText(QCoreApplication::translate("LoginPage", "JOIN US", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("LoginPage", "Welcome to Personal Organizer System", nullptr));
        label_6->setText(QCoreApplication::translate("LoginPage", "Designed to simplify and enhance your day-to-day organization, this system allows you to", nullptr));
        label_7->setText(QCoreApplication::translate("LoginPage", "seamlessly manage your schedule, finances, and important dates. Add and track lecture schedules,", nullptr));
        label_8->setText(QCoreApplication::translate("LoginPage", "mark significant dates, and manage incomes and expenses, all in one place. With automatic monthly", nullptr));
        label_9->setText(QCoreApplication::translate("LoginPage", "financial reports, you\342\200\231ll have insights into your spending and budget, helping you stay financially", nullptr));
        label_10->setText(QCoreApplication::translate("LoginPage", "prepared and organized.\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("LoginPage", "Personal Organizer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
