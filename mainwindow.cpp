#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", QString(), "Text Files (*.txt)");
}



void MainWindow::on_pushButton_Login_clicked(){

    //here is test user data
    QString uname = "test";
    QString pwd = "test";
    QString uv = "Northern University Bangladesh";
    QString dept = "CSE";
    QString dob = "04/12/03";


    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QLabel* msg =  ui->label_message;


    if(username == "" || password == ""){
        msg->setText("<font color='red'>Username or password can't be empty!</font>");
        return;

    } else if (username == uname && password == pwd){
        hide();
        dashDialog = new DashDialog(this);
        dashDialog->setData(uname, pwd, uv, dept, dob);
        dashDialog->show();

    } else {
        msg->setText("<font color='red'>Username and passsword is incorrect</font>");

    }

}


void MainWindow::on_createAccBtn_clicked(){
    hide();
    accCreation = new AccountCreation(this);
    accCreation->show();
}

