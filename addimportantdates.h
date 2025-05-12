#ifndef ADDIMPORTANTDATES_H
#define ADDIMPORTANTDATES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class AddImportantDates;
}

class AddImportantDates : public QDialog
{
    Q_OBJECT

public:
    explicit AddImportantDates(QWidget *parent = nullptr);
    ~AddImportantDates();

private slots:
    void on_ImSave_clicked();

    void on_BackIm_clicked();

    void on_ImReset_clicked();

private:
    Ui::AddImportantDates *ui;
    QSqlQueryModel *model;

};

#endif // ADDIMPORTANTDATES_H
