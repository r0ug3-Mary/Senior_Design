#include "fak.h"
#include <QApplication>
#include <QPalette>
#include "inventorypage.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FAK w;
    w.setStyleSheet("background-color:#626065;");
    //w.setStyleSheet("background-image:../fridgeimg.jpg");
    w.show();

    return a.exec();
}
