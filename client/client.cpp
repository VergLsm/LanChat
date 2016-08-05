#include "client.h"
#include "ui_client.h"

#include <QDialog>
#include "dialog.h"

client::client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    ui->btnSend->setEnabled(false);
    ui->textEdit->setFocus();

}

client::~client()
{
    delete ui;
    //tcpClient->close();
}

void client::GetDlgPtr(Dialog *dlgptr){
    dlg = dlgptr;
    connect(dlg,SIGNAL(accepted()),this,SLOT(initClient()));
}

void client::initClient(){
    ui->textBrowser->appendPlainText("Connecting " + dlg->ip + ":" + dlg->port);
    tcpClient = new QTcpSocket();
    tcpClient->connectToHost(QHostAddress(dlg->ip),dlg->port.toUInt());
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpClient,SIGNAL(connected()),this,SLOT(connected()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(disconnected()));
    clientAddress = tcpClient->peerAddress();
    clientName = tcpClient->peerName();
}

void client::on_btnSend_clicked()
{
    QString message = getMessage();
    if(message.isEmpty())
    {
        QMessageBox::warning(0,tr("warning"),tr("Message was Empty"),QMessageBox::Ok);
        return;
    }
    sendMessage(message);
}

QString client::getMessage()
{
    QString msg = ui->textEdit->toPlainText();
    qDebug()<<msg;
    ui->textEdit->clear();
    ui->textEdit->setFocus();
    return msg;
}

QString client::getHostIP(){
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach(QHostAddress address,list)
    {
        if(address.protocol()==QAbstractSocket::IPv4Protocol)
        return address.toString();
    }
    return 0;
}


void client::sendMessage(QString message)  //·¢ËÍÐÅÏ¢
{
    tcpClient->write(message.toUtf8(),message.toUtf8().length());
    QString str = "[localhost(client)]\n" + message;
    ui->textBrowser->appendPlainText(str);
}

void client::readMessage(){
    QString str = "["+clientName + "(" + clientAddress.toString() +")]\n" + tcpClient->readAll();
    ui->textBrowser->appendPlainText(str);
}

void client::connected(){
    ui->textBrowser->appendPlainText("Connected.");
    sendMessage("hello,I am client.");
    ui->btnSend->setEnabled(true);
}

void client::disconnected(){
    ui->btnSend->setEnabled(false);
    ui->textBrowser->appendPlainText("DisConnected.");
}
