#include "pyprac.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pyprac w;
    w.show();

    return a.exec();
}
