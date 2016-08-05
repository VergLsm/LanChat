#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    QString port;

private slots:
    void on_btnOK_clicked();
    void on_btnCancel_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
