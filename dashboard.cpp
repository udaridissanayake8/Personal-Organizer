#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include <QDate>

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    ptrAddExpenses =new AddExpenses();
    ptrAddImportantDates= new AddImportantDates();
    ptrAddIncome =new AddIncome();
    ptrAddLectureShedule =new AddLectureShedule();
    ptrExpensesStatus =new ExpensesStatus();
    ptrMonthlyReports= new MonthlyReports();
    ptrSetBudgets= new SetBudgets();
    ptrDisplayLectureShedule =new DisplayLectureShedule();

    displayUpcomingDeadlines();
}

void Dashboard::displayUpcomingDeadlines()
{
    QSqlQuery query;
    QDate currentDate = QDate::currentDate();
    QDate alertDate = currentDate.addDays(7);

    query.prepare("SELECT Date, Description FROM ImportantDates WHERE Date BETWEEN :currentDate AND :alertDate");
    query.bindValue(":currentDate", currentDate.toString("MM/dd/yyyy"));
    query.bindValue(":alertDate", alertDate.toString("MM/dd/yyyy"));

    QString alertMessage;
    if (query.exec()) {
        while (query.next()) {
            QString date = query.value("Date").toString();
            QString description = query.value("Description").toString();
            alertMessage += QString("• %1: %2\n").arg(date, description);
        }

        if (alertMessage.isEmpty()) {
            alertMessage = "No upcoming deadlines.";
        }
    } else {
        alertMessage = "Error loading deadlines.";
        qDebug() << "Error querying ImportantDates:" << query.lastError().text();
    }


    ui->Alert->setText(alertMessage);
}


Dashboard::~Dashboard()
{
    delete ui;
    delete ptrAddExpenses;
    delete ptrAddImportantDates;
    delete ptrAddIncome;
    delete ptrAddLectureShedule;
    delete ptrExpensesStatus;
    delete ptrMonthlyReports;
    delete ptrSetBudgets;
}

void Dashboard::on_AddIncome_clicked()
{
    ptrAddIncome->show();
}


void Dashboard::on_AddExoenses_clicked()
{
    ptrAddExpenses->show();
}


void Dashboard::on_SetBudgets_clicked()
{
    ptrSetBudgets->show();
}


void Dashboard::on_MonthlyReports_clicked()
{
    ptrMonthlyReports->show();
}


void Dashboard::on_ExpensesStatus_clicked()
{
    ptrExpensesStatus->show();
}


void Dashboard::on_AddLectureShedule_clicked()
{
    ptrAddLectureShedule->show();
}


void Dashboard::on_DisplayLec_clicked()
{
    ptrDisplayLectureShedule->show();
}


void Dashboard::on_AddImportantDates_clicked()
{
    ptrAddImportantDates->show();
}

