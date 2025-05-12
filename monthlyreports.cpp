#include "monthlyreports.h"
#include "ui_monthlyreports.h"


MonthlyReports::MonthlyReports(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MonthlyReports)
{
    ui->setupUi(this);
}

MonthlyReports::~MonthlyReports()
{
    delete ui;
    delete model;

}

void MonthlyReports::on_Reportsbtn_clicked()
{


    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db");

    if(QFile::exists("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db"))
    {
        qDebug() << "Database file exists";
    }
    else
    {
        qDebug() << "Database file doesn't exist";
        return;
    }

    if(!database.open())
    {
        qDebug() << "Error: Unable to open Database";
        return;
    }
    else
    {
        qDebug() << "Database open successfully...";
    }


    model = new QSqlQueryModel();

    QString queryStr = "SELECT "
                       "(SELECT SUM(Amount) FROM Incomes) AS TotalIncomes, "
                       "(SELECT SUM(Amount) FROM Expenses) AS TotalExpenses, "
                       "(SELECT SUM(Amount) FROM Incomes) - (SELECT SUM(Amount) FROM Expenses) AS Savings";

    model->setQuery(queryStr, database);
    ui->ReportsTable->setModel(model);

}




void MonthlyReports::on_BackMo_clicked()
{
    this->close();
}

