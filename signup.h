#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_Savebtn_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
