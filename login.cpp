#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)

{
    ui->setupUi(this);
    ptrDashboard =new Dashboard();

    ui->usernameLogin->setPlaceholderText("Enter Your Username");
    ui->PasswordLogin->setPlaceholderText("Enter Your Password");


}

Login::~Login()
{
    delete ui;
    delete ptrDashboard;
}

void Login::on_Loginbtn_clicked()
{
    QString username = ui->usernameLogin->text();
    QString password = ui->PasswordLogin->text();

    qDebug() << "username : "<< username <<" password : "<<password;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db");

    if(QFile::exists("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db"))
    {

        qDebug()<<"Database file exists";
    }
    else
    {
        qDebug()<<"Database file doesn't exist";
        return;
    }

    if(!database.open())
    {
        qDebug()<<"Error: Unable to open Database";
        return;
    }
    else
    {
        qDebug()<<"Database open successfully...";

    }
        QSqlQuery query(database);
        query.prepare(QString("SELECT * FROM Users WHERE username= :username AND password= :password"));
        query.bindValue(":username",username);
        query.bindValue(":password",password);

        if(!query.exec())
        {
            qDebug()<<"Query Failed To Execute"<< query.lastError().text();
            return;
        }


            if(query.next())
            {
                QString usernameFromDB=query.value("username").toString();
                QString passwordFromDB=query.value("password").toString();
                 qDebug() << "User found in database: " << usernameFromDB;

                if(usernameFromDB ==username && passwordFromDB==password)
                {
                    QMessageBox::information(this,"Success","Login Success");
                    ptrDashboard->show();
                    this->close();

                }
                else
                    {
                    QMessageBox::warning(this,"Failed","Login Failed");
                }
            }else {
                qDebug() << "No matching user found in the database.";
                QMessageBox::warning(this, "Failed", "Login Failed: Incorrect username or password.");
            }



}

