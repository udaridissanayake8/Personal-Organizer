#include "loginpage.h"
#include "./ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    ptrlogin =new Login();
    ptrSignUp =new SignUp();
}

LoginPage::~LoginPage()
{
    delete ui;
    delete ptrlogin;
    delete ptrSignUp;
}

void LoginPage::on_Login_clicked()
{
    ptrlogin->show();
}


void LoginPage::on_SignUp_clicked()
{
    ptrSignUp->show();
}

