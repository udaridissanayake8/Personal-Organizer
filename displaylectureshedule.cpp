#include "displaylectureshedule.h"
#include "ui_displaylectureshedule.h"

DisplayLectureShedule::DisplayLectureShedule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DisplayLectureShedule)
{
    ui->setupUi(this);
}

DisplayLectureShedule::~DisplayLectureShedule()
{
    delete ui;
    delete model;
}

void DisplayLectureShedule::on_DisplayShedule_clicked()
{

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


        model = new QSqlQueryModel();

    model->setQuery("select * from LectureShedule");
    ui->DisplayLecTable->setModel(model);

}


void DisplayLectureShedule::on_BackDis_clicked()
{
    this->close();
}

