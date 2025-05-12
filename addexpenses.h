#ifndef ADDEXPENSES_H
#define ADDEXPENSES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddExpenses;
}

class AddExpenses : public QDialog
{
    Q_OBJECT

public:
    explicit AddExpenses(QWidget *parent = nullptr);
    ~AddExpenses();

private slots:
    void on_SaveExpen_clicked();

    void on_ResetExpen_clicked();

    void on_Backbtn_clicked();

private:
    Ui::AddExpenses *ui;
    QSqlQueryModel *model;

};

#endif // ADDEXPENSES_H
