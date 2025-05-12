#include "expensesstatus.h"
#include "ui_expensesstatus.h"
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QMessageBox>
#include <QSqlError>
#include <QDate>
#include <QDebug>
#include <QFile>


ExpensesStatus::ExpensesStatus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExpensesStatus)
{
    ui->setupUi(this);

    if (checkAndAlertNewMonth()) {
        QMessageBox::information(this, "New Month Alert", "Please enter new budgets for the month.");
    } else {
        updateDailyBudgets();
    }

    QChartView *chartView = createExpensesBarChart();
    ui->Barchart->addWidget(chartView);
}

ExpensesStatus::~ExpensesStatus()
{

    delete ui;
}

bool ExpensesStatus::checkAndAlertNewMonth() {
    static QDate lastCheckedDate = QDate::currentDate();
    QDate currentDate = QDate::currentDate();

    if (lastCheckedDate.month() != currentDate.month()) {
        lastCheckedDate = currentDate;
        resetBudgetsForNewMonth();
        return true;
    }
    return false;
}

void ExpensesStatus::resetBudgetsForNewMonth() {
    QSqlQuery query;
    if (!query.exec("DELETE FROM Budgets")) {
        qDebug() << "Error resetting budgets:" << query.lastError().text();
    }
}

void ExpensesStatus::updateDailyBudgets() {
    QMap<QString, double> categoryRemainingAmounts = getTodayRemainingByCategory();

    for (auto it = categoryRemainingAmounts.begin(); it != categoryRemainingAmounts.end(); ++it) {
        QString category = it.key();
        double newBudget = it.value();

        QSqlQuery query;
        query.prepare("INSERT OR REPLACE INTO Budgets (Category, Budget) VALUES (:category, :budget)");
        query.bindValue(":category", category);
        query.bindValue(":budget", newBudget);

        if (!query.exec()) {
            qDebug() << "Error updating daily budget:" << query.lastError().text();
        }
    }
}

QMap<QString, double> ExpensesStatus::getTodayRemainingByCategory() {
    QMap<QString, double> categoryRemaining;

    QMap<QString, double> categoryBudgets = getBudgetsByCategory();
    QMap<QString, double> categoryExpenses = getTodayExpensesByCategory();

    for (auto it = categoryBudgets.begin(); it != categoryBudgets.end(); ++it) {
        QString category = it.key();
        double budget = it.value();
        double spent = categoryExpenses.value(category, 0);
        double remaining = budget - spent > 0 ? budget - spent : 0;
        categoryRemaining[category] = remaining;
    }
    return categoryRemaining;
}

QMap<QString, double> ExpensesStatus::getTodayExpensesByCategory() {
    QMap<QString, double> categoryExpenses;

    QString currentDate = QDate::currentDate().toString("MM/dd/yyyy");

    QSqlQuery query;
    query.prepare("SELECT Category, SUM(Amount) as total FROM Expenses "
                  "WHERE Date = :date "
                  "GROUP BY Category");
    query.bindValue(":date", currentDate);

    if (query.exec()) {
        while (query.next()) {
            QString category = query.value("Category").toString();
            double totalAmount = query.value("total").toDouble();
            categoryExpenses[category] = totalAmount;
        }
    } else {
        qDebug() <<"Expense query error:" << query.lastError().text();
    }

    return categoryExpenses;
}


QMap<QString, double> ExpensesStatus::getBudgetsByCategory() {
    QMap<QString, double> categoryBudgets;


     QSqlQuery query("SELECT Category, Budget FROM Budgets");

    if (query.exec()) {
        while (query.next()) {
            QString category = query.value("Category").toString();
            double budgetAmount = query.value("Budget").toDouble();
            categoryBudgets[category] = budgetAmount;
        }
    } else {
        qDebug() << "Budget query error:" << query.lastError().text();
    }


    return categoryBudgets;
}



QChartView* ExpensesStatus::createExpensesBarChart() {
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db");

    if(QFile::exists("C:/Users/udari/Documents/Projects/database/mypersonal-organizer.db"))
    {

        qDebug()<<"Database file exists";
    }
    else
    {
        qDebug()<<"Database file doesn't exist";

    }

    if(!database.open())
    {
        qDebug()<<"Error: Unable to open Database";

    }
    else
    {
        qDebug()<<"Database open successfully...";
    }
    QMap<QString, double> categoryExpenses = getTodayExpensesByCategory();
    QMap<QString, double> categoryBudgets = getBudgetsByCategory();

    QBarSet *spentSet = new QBarSet("Spent");
    QBarSet *remainingSet = new QBarSet("Remaining");

    QStringList categories;
    for (auto it = categoryBudgets.begin(); it != categoryBudgets.end(); ++it) {
        QString category = it.key();
        double budget = it.value();
        double spent = categoryExpenses.value(category, 0);
        double remaining = budget - spent > 0 ? budget - spent : 0;

        *spentSet << spent;
        *remainingSet << remaining;
        categories << category;
    }

    QBarSeries *series = new QBarSeries();
    series->append(spentSet);
    series->append(remainingSet);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Today's Expenses by Category");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Category");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Amount");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}

void ExpensesStatus::on_BackSt_clicked()
{
    this->close();
}

