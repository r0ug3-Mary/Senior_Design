#include "viewpage.h"
#include "ui_viewpage.h"
#include "fak.h"
#include "QPixmap"


ViewPage::ViewPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewPage)
{
    ui->setupUi(this);

    QPixmap pix1("C:/Users/Piti/Desktop/fridgeSTILLS_18.jpg");

    // get label dimensions
    int w = ui->label1->width();
    int h = ui->label1->height();

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label1->setPixmap(pix1.scaled(w,h,Qt::KeepAspectRatio));


    QPixmap pix2("C:/Users/Piti/Desktop/thing1.jpg");

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label2->setPixmap(pix2.scaled(w,h,Qt::KeepAspectRatio));


    QPixmap pix3("C:/Users/Piti/Desktop/man2.jpg");

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->label3->setPixmap(pix3.scaled(w,h,Qt::KeepAspectRatio));
}

ViewPage::~ViewPage()
{
    delete ui;
}
