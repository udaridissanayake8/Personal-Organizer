#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>

SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("Enter Your Username");
    ui->password->setPlaceholderText("Enter Your Password");
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_Savebtn_clicked()
{

    QString username = ui->username->text();
    QString password = ui->password->text();

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
        QMessageBox::information(this,"Success","Signup Success");
        this->close();
}
    QSqlQuery query(database);
    query.prepare("insert into Users (username, password) values('" + username + "','" + password + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();

}

