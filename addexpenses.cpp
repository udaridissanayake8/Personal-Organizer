#include "addexpenses.h"
#include "ui_addexpenses.h"
#include <QMessageBox>

AddExpenses::AddExpenses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddExpenses)
{
    ui->setupUi(this);

    ui->ExpenAmount->setPlaceholderText("Enter Amount");
    ui->ExpenDesc->setPlaceholderText("Enter Description");
}

AddExpenses::~AddExpenses()
{
    delete ui;
}

void AddExpenses::on_SaveExpen_clicked()
{
    QString ExpenAmount = ui->ExpenAmount->text();
    QString Category = ui->Category->currentText();
    QString ExpenDate = ui->ExpenDate->text();
    QString ExpenDesc= ui->ExpenDesc->toPlainText();

    qDebug() << "Amount : "<< ExpenAmount <<" Category : "<<Category<<"ExpenDate :"<<ExpenDate<<"ExpenDesc :"<<ExpenDesc;

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

    double expenseAmount = ExpenAmount.toDouble();

    double categoryBudget = 0.0;
    QSqlQuery budgetQuery(database);
    budgetQuery.prepare("SELECT Budget FROM Budgets WHERE Category = :category");
    budgetQuery.bindValue(":category", Category);
    if (budgetQuery.exec() && budgetQuery.next()) {
        categoryBudget = budgetQuery.value(0).toDouble();
    } else {
        qDebug() << "Failed to retrieve budget for category:" << budgetQuery.lastError().text();
        return;
    }

    double totalSpentThisMonth = 0.0;
    QSqlQuery expenseQuery(database);
    QString firstDayOfMonth = QDate::currentDate().toString("MM") + "/01/" + QDate::currentDate().toString("yyyy");
    expenseQuery.prepare("SELECT SUM(Amount) FROM Expenses WHERE Category = :category AND Date >= :firstDayOfMonth");
    expenseQuery.bindValue(":category", Category);
    expenseQuery.bindValue(":firstDayOfMonth", firstDayOfMonth);

    if (expenseQuery.exec() && expenseQuery.next()) {
        totalSpentThisMonth = expenseQuery.value(0).toDouble();
    } else {
        qDebug() << "Failed to retrieve total spent for the month:" << expenseQuery.lastError().text();
        return;
    }
    double remainingBudget = categoryBudget - totalSpentThisMonth;
    if (expenseAmount > remainingBudget) {
        QMessageBox::warning(this, "Budget Exceeded", "This expense exceeds the remaining budget for the selected category.");
        return;
    }

    QSqlQuery query(database);
    query.prepare("INSERT INTO Expenses (Amount, Category, Date, Description) VALUES (:amount, :category, :date, :description)");
    query.bindValue(":amount", ExpenAmount);
    query.bindValue(":category", Category);
    query.bindValue(":date", ExpenDate);
    query.bindValue(":description", ExpenDesc);
    if (query.exec()) {
        QMessageBox::information(this, "Success", "Expense Added");
    } else {
        qDebug() << "Insert error: " << query.lastError().text();
    }


        model = new QSqlQueryModel();

    model->setQuery("select * from Expenses");
    ui->ExpenTable->setModel(model);

}


void AddExpenses::on_ResetExpen_clicked()
{
    ui->ExpenAmount->clear();
    ui->Category->setCurrentIndex(-1);
    ui->ExpenDate->clear();
    ui->ExpenDesc->clear();
}


void AddExpenses::on_Backbtn_clicked()
{
    this->close();
}

