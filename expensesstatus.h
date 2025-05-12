#ifndef EXPENSESSTATUS_H
#define EXPENSESSTATUS_H

#include <QDialog>
#include "databaseheader.h"
#include <QMap>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>



namespace Ui {
class ExpensesStatus;
}




class ExpensesStatus : public QDialog
{
    Q_OBJECT

public:
    explicit ExpensesStatus(QWidget *parent = nullptr);
    ~ExpensesStatus();

private slots:
    void on_BackSt_clicked();

private:
    Ui::ExpensesStatus *ui;

    bool checkAndAlertNewMonth();
    void resetBudgetsForNewMonth();
    void updateDailyBudgets();
    QMap<QString, double> getTodayRemainingByCategory();


    QMap<QString, double> getTodayExpensesByCategory();
    QMap<QString, double> getBudgetsByCategory();
    QChartView* createExpensesBarChart();
};

#endif // EXPENSESSTATUS_H
