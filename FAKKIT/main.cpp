#include "fak.h"
#include <QApplication>
#include <QPalette>
#include "inventorypage.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FAK w;
    //w.setStyleSheet("background-color:#89cff0;");
    //w.setStyleSheet("background-image:/Users/Desktop/fridgeimg.JPG");
    w.show();

    return a.exec();
}
