#include "pyprac.h"
#include "ui_pyprac.h"
#include "pythoncode.h"

pyprac::pyprac(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pyprac)
{
    ui->setupUi(this);
}

pyprac::~pyprac()
{
    delete ui;
}

void pyprac::on_pushButton_clicked()
{
    pythoncode pythonc;
    pythonc.setModal(true);
    pythonc.exec();
}

void pyprac::on_textEdit_destroyed()
{
    QObject.show(py.py);

}
