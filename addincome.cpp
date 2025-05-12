#include "addincome.h"
#include "ui_addincome.h"
#include <QMessageBox>

AddIncome::AddIncome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddIncome)
{
    ui->setupUi(this);
    ui->Amount->setPlaceholderText("Enter Amount");
    ui->IncomeDesc->setPlaceholderText("Enter Description");

}

AddIncome::~AddIncome()
{
    delete ui;
    delete model;
}

void AddIncome::on_SaveIncome_clicked()
{
    QString Amount = ui->Amount->text();
    QString IncomeSource = ui->IncomeSource->currentText();
    QString DateIncome = ui->DateIncome->text();
    QString  IncomeDesc= ui->IncomeDesc->toPlainText();

    qDebug() << "Amount : "<< Amount <<" IncomeSource : "<<IncomeSource<<"DateIncome :"<<DateIncome<<"IncomeDesc :"<<IncomeDesc;

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
        QMessageBox::information(this,"Success","Income Added");




    }
    QSqlQuery query(database);
    query.prepare("insert into Incomes (Amount, IncomeSource, Date, Description) values('" + Amount + "','" + IncomeSource + "','" +DateIncome + "','" + IncomeDesc + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();

    if(model == NULL)
        model = new QSqlQueryModel();

    model->setQuery("select * from Incomes");
    ui->IncomeTable->setModel(model);

}


void AddIncome::on_ResetIncome_clicked()
{
    ui->Amount->clear();
    ui->IncomeSource->setCurrentIndex(-1);
    ui->DateIncome->clear();
    ui->IncomeDesc->clear();
}


void AddIncome::on_BackInc_clicked()
{
    this->close();
}

