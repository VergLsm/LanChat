#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->port="5550";
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnOK_clicked()
{

    QString StrPort = ui->lePort->text();

    if(StrPort.isEmpty())
    {
        QMessageBox::warning(0,tr("warning"),tr("Port was Empty"),QMessageBox::Ok);
        return;
    }


    this->port=StrPort;

    accept();

}

void Dialog::on_btnCancel_clicked()
{
    exit(0);
}
