#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "login.h"
#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginPage;
}
QT_END_NAMESPACE

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_Login_clicked();

    void on_SignUp_clicked();

private:
    Ui::LoginPage *ui;
    Login *ptrlogin;
    SignUp *ptrSignUp;

    QSqlDatabase database;
};
#endif // LOGINPAGE_H
