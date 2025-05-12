/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *Savebtn;
    QLabel *label_4;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(600, 700);
        SignUp->setMaximumSize(QSize(600, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ghjk.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 121, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka Banner")});
        font.setPointSize(23);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 110, 391, 481));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(20);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 40, 361, 431));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(46);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, -1, 15);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka Banner")});
        font2.setPointSize(16);
        font2.setBold(false);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("color: rgb(2, 2, 2);"));

        verticalLayout->addWidget(username);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 17);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setFont(font2);
        password->setStyleSheet(QString::fromUtf8("color: rgb(2, 2, 2);"));
        password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(password);


        verticalLayout_3->addLayout(verticalLayout_2);

        Savebtn = new QPushButton(layoutWidget);
        Savebtn->setObjectName("Savebtn");
        Savebtn->setFont(font2);
        Savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        Savebtn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(122, 1, 142, 255));\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(Savebtn);

        label_4 = new QLabel(SignUp);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-120, -10, 1241, 711));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/6070859.jpg);"));
        label_4->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "SignUp", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Create Account", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Password", nullptr));
        Savebtn->setText(QCoreApplication::translate("SignUp", "Save", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
