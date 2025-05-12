#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "databaseheader.h"
#include "dashboard.h"
#include<QSqlDatabase>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_Loginbtn_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase database;
    Dashboard *ptrDashboard;
};

#endif // LOGIN_H
