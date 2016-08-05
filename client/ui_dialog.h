/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *leIP;
    QLineEdit *lePort;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(254, 159);
        leIP = new QLineEdit(Dialog);
        leIP->setObjectName(QString::fromUtf8("leIP"));
        leIP->setGeometry(QRect(50, 40, 91, 31));
        lePort = new QLineEdit(Dialog);
        lePort->setObjectName(QString::fromUtf8("lePort"));
        lePort->setGeometry(QRect(160, 40, 51, 31));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 54, 12));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 20, 54, 12));
        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(50, 110, 75, 23));
        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(140, 110, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        leIP->setText(QApplication::translate("Dialog", "127.0.0.1", 0));
        lePort->setText(QApplication::translate("Dialog", "5550", 0));
        label->setText(QApplication::translate("Dialog", "IP:", 0));
        label_2->setText(QApplication::translate("Dialog", "port:", 0));
        btnOK->setText(QApplication::translate("Dialog", "Ok", 0));
        btnCancel->setText(QApplication::translate("Dialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
