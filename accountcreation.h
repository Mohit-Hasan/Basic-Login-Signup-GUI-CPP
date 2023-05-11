#ifndef ACCOUNTCREATION_H
#define ACCOUNTCREATION_H

#include <QDialog>
#include "dashdialog.h"

namespace Ui {
class AccountCreation;
}

class AccountCreation : public QDialog
{
    Q_OBJECT

public:
    explicit AccountCreation(QWidget *parent = nullptr);
    ~AccountCreation();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::AccountCreation *ui;
    DashDialog *dashDialog;
};

#endif // ACCOUNTCREATION_H
