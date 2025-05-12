#include "addlectureshedule.h"
#include "ui_addlectureshedule.h"
#include <QMessageBox>

AddLectureShedule::AddLectureShedule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddLectureShedule)
{
    ui->setupUi(this);
    ui->Monday->setPlaceholderText("Enter Course Code");
    ui->Tuesday->setPlaceholderText("Enter Course Code");
    ui->Wednesday->setPlaceholderText("Enter Course Code");
    ui->Thursday->setPlaceholderText("Enter Course Code");
    ui->Friday->setPlaceholderText("Enter Course Code");
}

AddLectureShedule::~AddLectureShedule()
{
    delete ui;
    delete model;
}

void AddLectureShedule::on_SaveLec_clicked()
{
    QString StartTime= ui->StartTime->text();
    QString EndTime= ui->EndTime->text();
    QString Monday = ui->Monday->text();
    QString Tuesday = ui->Tuesday->text();
    QString Wednesday = ui->Wednesday->text();
    QString Thursday = ui->Thursday->text();
    QString Friday = ui->Friday->text();


    qDebug() << "StartTime :"<< StartTime<<" EndTime :"<<EndTime<<"Monday :"<<Monday<<"Tuesday :"<<Tuesday<<"Wednesday :"<<Wednesday<<"Thursday :"<<Thursday<<"Friday :"<<Friday;

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
        QMessageBox::information(this,"Success","Shedule Added");




    }
    QSqlQuery query(database);
    query.prepare("insert into LectureShedule (StartTime, EndTime, Monday, Tuesday, Wednesday, Thursday, Friday) values('" + StartTime + "','" + EndTime + "','" +Monday + "','" + Tuesday + "','" + Wednesday + "','" +Thursday + "','" + Friday + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();

    if(model == NULL)
        model = new QSqlQueryModel();

    model->setQuery("select * from LectureShedule");
    ui->LecTable->setModel(model);

}


void AddLectureShedule::on_ResetLec_clicked()
{
    ui->StartTime->setTime(QTime(0,0,0));
    ui->EndTime->setTime(QTime(0,0,0));
    ui->Monday->clear();
    ui->Tuesday->clear();
    ui->Wednesday->clear();
    ui->Thursday->clear();
    ui->Friday->clear();

}


void AddLectureShedule::on_BackLec_clicked()
{
    this->close();
}

