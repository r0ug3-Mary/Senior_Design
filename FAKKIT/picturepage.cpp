#include "picturepage.h"
#include "ui_picturepage.h"

PicturePage::PicturePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PicturePage)
{
    ui->setupUi(this);
}

PicturePage::~PicturePage()
{
    delete ui;
}
