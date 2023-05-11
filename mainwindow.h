#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dashdialog.h"
#include "accountcreation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();
    void on_actionOpen_triggered();


    void on_createAccBtn_clicked();

private:
    Ui::MainWindow *ui;
    DashDialog *dashDialog;
    AccountCreation *accCreation;
};
#endif // MAINWINDOW_H
