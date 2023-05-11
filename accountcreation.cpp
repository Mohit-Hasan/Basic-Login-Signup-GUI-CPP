#include "accountcreation.h"
#include "ui_accountcreation.h"

int a, b, res;

AccountCreation::AccountCreation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountCreation)
{
    srand(time(0));
    a = rand() % 20;
    b = rand() % 20;
    res = a+b;

    ui->setupUi(this);
    QLabel* capt =  ui->label_captcha;
    capt->setText(QString::number(a)+"+"+QString::number(b));
}

AccountCreation::~AccountCreation()
{
    delete ui;
}

void AccountCreation::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString uv =  ui->comboBox_uv->currentText();
    QString dept =  ui->comboBox_dept->currentText();
    QString dob = ui->dateEdit_dob->date().toString();
    QString captcha = ui->lineEdit_captcha->text();
    bool agree = ui->checkBox_agree->isChecked();
    QLabel* msg =  ui->label_message;
    QLabel* capt =  ui->label_captcha;

    if(username == "" || password == "" || uv == "" || captcha != QString::number(res) || !agree){

        msg->setText("<font color='red'>Any field can't be empty or Something went wrrong!</font>");

        srand(time(0));
        a = rand() % 10;
        b = rand() % 10;
        res = a+b;
        capt->setText(QString::number(a)+"+"+QString::number(b));

    } else {
        hide();
        dashDialog = new DashDialog(this);
        dashDialog->setData(username, password, uv, dept, dob);
        dashDialog->show();
        msg->clear();
    }
}

