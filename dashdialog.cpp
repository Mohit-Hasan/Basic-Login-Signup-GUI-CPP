#include "dashdialog.h"
#include "mainwindow.h"
#include "ui_dashdialog.h"

DashDialog::DashDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DashDialog)
{
    ui->setupUi(this);
}

DashDialog::~DashDialog()
{
    delete ui;
}

void DashDialog::setData(QString uname, QString pwd, QString uv, QString dept, QString dob) {
    ui->label_username->setText("Username: "+uname);
    ui->label_password->setText("Password: "+pwd);
    ui->label_uv->setText("University: "+uv);
    ui->label_dept->setText("Department: "+dept);
    ui->label_dob->setText("Date of Birth: "+dob);
}


void DashDialog::on_pushButton_clicked()
{
    this->close();
}

