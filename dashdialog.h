#ifndef DASHDIALOG_H
#define DASHDIALOG_H

#include <QDialog>

namespace Ui {
class DashDialog;
}

class DashDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DashDialog(QWidget *parent = nullptr);
    ~DashDialog();
    void setData(QString uname, QString pwd, QString uv, QString dept, QString dob);


private slots:
    void on_pushButton_clicked();

private:
    Ui::DashDialog *ui;

};

#endif // DASHDIALOG_H
