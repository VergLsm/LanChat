#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QMessageBox>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QtNetwork>

namespace Ui {
    class server;
}

class Dialog;

class server : public QMainWindow
{
    Q_OBJECT

public:
    explicit server(QWidget *parent = 0);
    ~server();

    void GetDlgPtr(Dialog *dlgptr);
    QString getMessage();
    QString getHostIP();
    void sendMessage(QString message="hello!");

private slots:
    void on_btnSend_clicked();
    void readMessage();
    void acceptConnection();
    void disconnected();
    void initServer();

private:
    Ui::server *ui;
    QString tcpPort;
    QTcpServer *tcpServer;
    QTcpSocket *tcpClient;
    Dialog *dlg;
    QString clientName;
    QHostAddress clientAddress;
};

#endif // SERVER_H
