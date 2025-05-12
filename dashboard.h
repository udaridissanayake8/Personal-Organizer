#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include "addexpenses.h"
#include "addimportantdates.h"
#include "addincome.h"
#include "addlectureshedule.h"
#include "expensesstatus.h"
#include "monthlyreports.h"
#include "setbudgets.h"
#include "displaylectureshedule.h"
#include "databaseheader.h"

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_AddIncome_clicked();

    void on_AddExoenses_clicked();

    void on_SetBudgets_clicked();

    void on_MonthlyReports_clicked();

    void on_ExpensesStatus_clicked();

    void on_AddLectureShedule_clicked();

    void on_DisplayLec_clicked();

    void on_AddImportantDates_clicked();

private:
    Ui::Dashboard *ui;
    AddExpenses *ptrAddExpenses;
    AddImportantDates *ptrAddImportantDates;
    AddIncome *ptrAddIncome;
    AddLectureShedule *ptrAddLectureShedule;
    ExpensesStatus *ptrExpensesStatus;
    MonthlyReports *ptrMonthlyReports;
    SetBudgets *ptrSetBudgets;
    DisplayLectureShedule *ptrDisplayLectureShedule;

    void displayUpcomingDeadlines();

};

#endif // DASHBOARD_H
