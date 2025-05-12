#include "setbudgets.h"
#include "ui_setbudgets.h"
#include <QMessageBox>

SetBudgets::SetBudgets(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SetBudgets)
{
    ui->setupUi(this);

    ui->Budget->setPlaceholderText("Enter Amount");

}

SetBudgets::~SetBudgets()
{
    delete ui;
    delete model;
}

void SetBudgets::on_SaveBud_clicked()
{

    QString Category = ui->CategoryBud->currentText();
    QString Budget = ui->Budget->text();


    qDebug() <<" Category : "<<Category<<"Budget :"<<Budget;

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
        QMessageBox::information(this,"Success","Budget Added");




    }
    QSqlQuery query(database);
    query.prepare("insert into Budgets (Category, Budget) values('" + Category + "','" +Budget + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();



}


void SetBudgets::on_DisplayBud_clicked()
{

        model = new QSqlQueryModel();

    model->setQuery("select * from Budgets");
    ui->BudgetTable->setModel(model);
}


void SetBudgets::on_ResetBud_clicked()
{
    ui->CategoryBud->setCurrentIndex(-1);
    ui->Budget->clear();
}


void SetBudgets::on_BackBud_clicked()
{
    this->close();
}

