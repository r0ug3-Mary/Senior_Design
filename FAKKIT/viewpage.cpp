#include "viewpage.h"
#include "ui_viewpage.h"
#include "fak.h"
#include "QPixmap"
#include "QPushButton"
#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QtDebug>

int i = 0;

ViewPage::ViewPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewPage)
{

    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");


    QImage image(":/pics/fridgeSTILLS_18.jpg");
    ui->labelpic->setPixmap(QPixmap::fromImage(image));

    ui->rightButton->setFlat(true);
    //ui->rightButton->setStylesheet{ QPushButton:flat {   border: none; }};
    //ui->rightButton->pressed(false);
    //ui->rightButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");

    ui->leftButton->setFlat(true);
    //ui->leftButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");

}

ViewPage::~ViewPage()
{
    delete ui;
}

void ViewPage::on_rightButton_clicked()
{

    if(i == 2)
    {
        QImage image(":/pics/fridgeSTILLS_18.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i = 0;
    }else if(i == 1)
    {
        QImage image(":/pics/thing1.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i++;
    }else if(i == 0)
    {
        QImage image(":/pics/man2.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i++;
    }



}


void ViewPage::on_leftButton_clicked()
{
    if(i == 0)
    {
        QImage image(":/pics/thing1.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i = 2;
    }else if(i == 1)
    {
        QImage image(":/pics/fridgeSTILLS_18.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i--;
    }else if(i == 2)
    {
        QImage image(":/pics/man2.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i--;
    }
}


