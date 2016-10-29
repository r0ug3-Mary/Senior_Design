#include "fak.h"
#include "inventorypage.h"
#include "server.h"

#include <QApplication>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FAK w;
    w.setStyleSheet("background-color:#626065;");
    //w.setStyleSheet("background-image:../fridgeimg.jpg");
    w.show();

    //creates server and starts threads
    Server server;
    server.startServer();

    return a.exec();
}
