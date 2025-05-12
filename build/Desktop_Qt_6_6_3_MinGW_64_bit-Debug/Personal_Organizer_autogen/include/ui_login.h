/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *usernameLogin;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *PasswordLogin;
    QPushButton *Loginbtn;
    QLabel *label_4;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(600, 700);
        Login->setMaximumSize(QSize(600, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 301, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(34);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(90, 130, 421, 531));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(30);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(12, 42, 401, 461));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(112);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(37);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, -1, 12);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 5);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(21);
        font2.setBold(false);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        usernameLogin = new QLineEdit(layoutWidget);
        usernameLogin->setObjectName("usernameLogin");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sitka Banner")});
        font3.setPointSize(16);
        font3.setBold(false);
        usernameLogin->setFont(font3);
        usernameLogin->setStyleSheet(QString::fromUtf8("color: rgb(6, 6, 6);"));

        verticalLayout->addWidget(usernameLogin);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 6);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        PasswordLogin = new QLineEdit(layoutWidget);
        PasswordLogin->setObjectName("PasswordLogin");
        PasswordLogin->setFont(font3);
        PasswordLogin->setStyleSheet(QString::fromUtf8("color: rgb(6, 6, 6);"));
        PasswordLogin->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(PasswordLogin);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Loginbtn = new QPushButton(layoutWidget);
        Loginbtn->setObjectName("Loginbtn");
        Loginbtn->setSizeIncrement(QSize(0, 0));
        Loginbtn->setFont(font2);
        Loginbtn->setCursor(QCursor(Qt::PointingHandCursor));
        Loginbtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(Loginbtn);

        label_4 = new QLabel(Login);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-120, -10, 1271, 721));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        label_4->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Login", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        Loginbtn->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
