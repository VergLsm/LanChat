/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

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

class Ui_server
{
public:
    QWidget *centralWidget;
    QPushButton *btnSend;
    QPlainTextEdit *textBrowser;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *server)
    {
        if (server->objectName().isEmpty())
            server->setObjectName(QString::fromUtf8("server"));
        server->resize(401, 309);
        centralWidget = new QWidget(server);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(244, 203, 121, 51));
        textBrowser = new QPlainTextEdit(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 381, 191));
        textBrowser->setReadOnly(true);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 200, 221, 51));
        server->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(server);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 401, 22));
        server->setMenuBar(menuBar);
        mainToolBar = new QToolBar(server);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        server->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(server);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        server->setStatusBar(statusBar);

        retranslateUi(server);

        QMetaObject::connectSlotsByName(server);
    } // setupUi

    void retranslateUi(QMainWindow *server)
    {
        server->setWindowTitle(QApplication::translate("server", "server", 0));
        btnSend->setText(QApplication::translate("server", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class server: public Ui_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
