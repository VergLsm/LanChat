#include <QApplication>
#include "client.h"
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog d;
//    d.show();
    client c;
//    c.show();

    c.GetDlgPtr(&d);
    if(d.exec()==QDialog::Accepted){
        c.show();
        return a.exec();
    }

    return 0;
}
