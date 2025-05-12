#include "addimportantdates.h"
#include "ui_addimportantdates.h"
#include <QMessageBox>
AddImportantDates::AddImportantDates(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddImportantDates)
{
    ui->setupUi(this);
}

AddImportantDates::~AddImportantDates()
{
    delete ui;
}

void AddImportantDates::on_ImSave_clicked()
{
    QString Date= ui->ImDate->text();
    QString Description= ui->ImDesc->text();

    qDebug() << "Date :"<< Date<<" Description :"<<Description;

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
        QMessageBox::information(this,"Success","Date Added");




    }
    QSqlQuery query(database);
    query.prepare("insert into ImportantDates (Date,Description) values('" + Date + "','" + Description + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();


        model = new QSqlQueryModel();

    model->setQuery("select * from ImportantDates");
    ui->ImpotantDatesTable->setModel(model);

}


void AddImportantDates::on_BackIm_clicked()
{
    this->close();
}


void AddImportantDates::on_ImReset_clicked()
{
    ui->ImDate->clear();
    ui->ImDesc->clear();
}

