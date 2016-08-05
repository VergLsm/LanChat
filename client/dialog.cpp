#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->ip="127.0.0.1";
    this->port="5550";
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnOK_clicked()
{
    QString strIp = ui->leIP->text();
    QString StrPort = ui->lePort->text();

    if(strIp.isEmpty() || StrPort.isEmpty())
    {
        QMessageBox::warning(0,tr("warning"),tr("IP or Port was Empty"),QMessageBox::Ok);
        return;
    }

    this->ip=strIp;
    this->port=StrPort;

    accept();

}

void Dialog::on_btnCancel_clicked()
{
    exit(0);
}
