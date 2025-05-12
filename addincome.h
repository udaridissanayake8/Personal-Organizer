#ifndef ADDINCOME_H
#define ADDINCOME_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddIncome;
}

class AddIncome : public QDialog
{
    Q_OBJECT

public:
    explicit AddIncome(QWidget *parent = nullptr);
    ~AddIncome();

private slots:
    void on_SaveIncome_clicked();

    void on_ResetIncome_clicked();

    void on_BackInc_clicked();

private:
    Ui::AddIncome *ui;
    QSqlQueryModel *model;

};

#endif // ADDINCOME_H
