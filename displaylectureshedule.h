#ifndef DISPLAYLECTURESHEDULE_H
#define DISPLAYLECTURESHEDULE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class DisplayLectureShedule;
}

class DisplayLectureShedule : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayLectureShedule(QWidget *parent = nullptr);
    ~DisplayLectureShedule();

private slots:
    void on_DisplayShedule_clicked();

    void on_BackDis_clicked();

private:
    Ui::DisplayLectureShedule *ui;
    QSqlQueryModel *model;

};

#endif // DISPLAYLECTURESHEDULE_H
