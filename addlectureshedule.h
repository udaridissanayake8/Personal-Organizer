#ifndef ADDLECTURESHEDULE_H
#define ADDLECTURESHEDULE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddLectureShedule;
}

class AddLectureShedule : public QDialog
{
    Q_OBJECT

public:
    explicit AddLectureShedule(QWidget *parent = nullptr);
    ~AddLectureShedule();

private slots:
    void on_SaveLec_clicked();

    void on_ResetLec_clicked();

    void on_BackLec_clicked();

private:
    Ui::AddLectureShedule *ui;
    QSqlQueryModel *model;
};

#endif // ADDLECTURESHEDULE_H
