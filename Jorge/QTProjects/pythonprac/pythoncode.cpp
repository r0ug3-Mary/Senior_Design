#include "pythoncode.h"
#include "ui_pythoncode.h"
#include "pyprac.h"

pythoncode::pythoncode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pythoncode)
{
    ui->setupUi(this);
}

pythoncode::~pythoncode()
{
    delete ui;
}
