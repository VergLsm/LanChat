#include <QApplication>
#include "server.h"
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog d;
//    d.show();
    server w;
//    w.show();

    w.GetDlgPtr(&d);
    if(d.exec()==QDialog::Accepted){
        w.show();
        return a.exec();
    }

    return 0;
}
