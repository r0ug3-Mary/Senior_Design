#include "viewpage.h"
#include "ui_viewpage.h"
#include "fak.h"
#include "QPixmap"


ViewPage::ViewPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewPage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    QPixmap pix1(":/pics/fridgeSTILLS_18.jpg");

    // get label dimensions
    int w = ui->label1->width();
    int h = ui->label1->height();

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label1->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));


    QPixmap pix2(":/pics/thing1.jpg");

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label2->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));


    QPixmap pix3(":/pics/man2.jpg");

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label3->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
}

ViewPage::~ViewPage()
{
    delete ui;
}
