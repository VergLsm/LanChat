#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QMessageBox>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QtNetwork>
#include <QDialog>
#include "dialog.h"

namespace Ui {
    class client;
}

class Dialog;

class client : public QMainWindow
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = 0);
    ~client();

    void GetDlgPtr(Dialog *dlgptr);
    QString getMessage();
    QString getHostIP();
    void sendMessage(QString serverAddress="");

private slots:
    void on_btnSend_clicked();
    void readMessage();
    void connected();
    void disconnected();
    void initClient();

private:
    Ui::client *ui;
    QTcpSocket *tcpClient;
    Dialog *dlg;
    QString clientName;
    QHostAddress clientAddress;
};

#endif // CLIENT_H
