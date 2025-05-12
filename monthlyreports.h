#ifndef MONTHLYREPORTS_H
#define MONTHLYREPORTS_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class MonthlyReports;
}

class MonthlyReports : public QDialog
{
    Q_OBJECT

public:
    explicit MonthlyReports(QWidget *parent = nullptr);
    ~MonthlyReports();

private slots:
    void on_Reportsbtn_clicked();

    void on_BackMo_clicked();

private:
    Ui::MonthlyReports *ui;
    QSqlQueryModel *model;
};

#endif // MONTHLYREPORTS_H
