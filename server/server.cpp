#include "server.h"
#include "ui_server.h"

#include <QDialog>
#include "dialog.h"

server::server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::server)
{
    ui->setupUi(this);

    ui->btnSend->setEnabled(false);
    ui->textEdit->setFocus();
}

server::~server()
{
    delete ui;
    tcpClient->close();
    tcpServer->close();
}

void server::GetDlgPtr(Dialog *dlgptr){
    dlg = dlgptr;
    connect(dlg,SIGNAL(accepted()),this,SLOT(initServer()));
}

void server::initServer(){
    tcpPort=dlg->port;
    tcpServer = new QTcpServer(this);
    tcpServer->listen(QHostAddress::Any,tcpPort.toUInt());
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
    ui->textBrowser->appendPlainText("Listening port:"+tcpPort);
}

void server::acceptConnection(){
    ui->textBrowser->appendPlainText("Connected.");
    ui->btnSend->setEnabled(true);
    tcpClient=tcpServer->nextPendingConnection();
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpClient,SIGNAL(disconnected()),this,SLOT(disconnected()));
    //sendMessage("Hello~");
    clientAddress = tcpClient->peerAddress();
    clientName = tcpClient->peerName();
}

void server::on_btnSend_clicked()
{
    QString message = getMessage();
    if(message.isEmpty())
    {
        QMessageBox::warning(0,tr("warning"),tr("Message was Empty"),QMessageBox::Ok);
        return;
    }
    sendMessage(message);
}

QString server::getMessage()  //获得要发送的信息
{
    QString msg = ui->textEdit->toPlainText();
    qDebug()<<msg;
    ui->textEdit->clear();
    ui->textEdit->setFocus();
    return msg;
}

QString server::getHostIP(){
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach(QHostAddress address,list)
    {
        if(address.protocol()==QAbstractSocket::IPv4Protocol)
        return address.toString();
    }
    return 0;
}


void server::sendMessage(QString message)  //发送信息
{
    tcpClient->write(message.toUtf8(),message.toUtf8().length());
    QString str = "[localhost(server)]\n" + message;
    ui->textBrowser->appendPlainText(str);
}

void server::readMessage(){
    QString str = "["+clientName + "(" + clientAddress.toString() +")]\n" + tcpClient->readAll();
    ui->textBrowser->appendPlainText(str);
}

void server::disconnected(){
    ui->btnSend->setEnabled(false);
    ui->textBrowser->appendPlainText("DisConnected.");
}
