#ifndef SETBUDGETS_H
#define SETBUDGETS_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class SetBudgets;
}

class SetBudgets : public QDialog
{
    Q_OBJECT

public:
    explicit SetBudgets(QWidget *parent = nullptr);
    ~SetBudgets();

private slots:
    void on_SaveBud_clicked();

    void on_DisplayBud_clicked();

    void on_ResetBud_clicked();

    void on_BackBud_clicked();

private:
    Ui::SetBudgets *ui;
    QSqlQueryModel *model;

};

#endif // SETBUDGETS_H
