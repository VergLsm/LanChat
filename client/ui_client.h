/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QMainWindow>
#include <QMenuBar>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralWidget;
    QPushButton *btnSend;
    QTextEdit *textEdit;
    QPlainTextEdit *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QString::fromUtf8("client"));
        client->resize(399, 328);
        centralWidget = new QWidget(client);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(244, 213, 121, 51));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 210, 221, 51));
        textBrowser = new QPlainTextEdit(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 381, 191));
        textBrowser->setReadOnly(true);
        client->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(client);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 399, 22));
        client->setMenuBar(menuBar);
        mainToolBar = new QToolBar(client);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        client->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(client);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        client->setStatusBar(statusBar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "client", 0));
        btnSend->setText(QApplication::translate("client", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
