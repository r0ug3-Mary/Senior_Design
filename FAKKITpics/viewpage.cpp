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

    //int w = ui->pushButton->width();
    //int h = ui->pushButton->height();



    QImage image("C:/Sr.GUI/FAKKITpics/pics/fridgeSTILLS_18.jpg");
    ui->labelpic->setPixmap(QPixmap::fromImage(image));

    ui->pushButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    QPixmap pix1(":/pics/arrow_alt_right.png");
    QIcon ButtonIcon(pix1);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(50,50));

    ui->backButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    QPixmap pix2(":/pics/arrow_alt_left.png");
    QIcon ButtonIcon2(pix2);
    ui->backButton->setIcon(ButtonIcon2);
    ui->backButton->setIconSize(QSize(50,50));

}

ViewPage::~ViewPage()
{
    delete ui;
}

void ViewPage::on_pushButton_clicked()
{

    if(i == 2)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/fridgeSTILLS_18.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i = 0;
    }else if(i == 1)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/thing1.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i++;
    }else if(i == 0)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/man2.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i++;
    }


    /*
        QFileDialog dialog(this);
        dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        QString fileName = QFileDialog::getOpenFileName(this,
           tr("Open Images"), "C:/Sr.GUI/FAKKITpics/pics", tr("Image Files (*.png *.jpg *.bmp)"));
        if (!fileName.isEmpty())
        {
             QImage image(fileName);
             ui->labelpic->setPixmap(QPixmap::fromImage(image));
             qDebug() << fileName;
             qDebug() << fileName;

        }

     */



}

void ViewPage::on_backButton_clicked()
{
    if(i == 0)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/thing1.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i = 2;
    }else if(i == 1)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/fridgeSTILLS_18.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i--;
    }else if(i == 2)
    {
        QImage image("C:/Sr.GUI/FAKKITpics/pics/man2.jpg");
        ui->labelpic->setPixmap(QPixmap::fromImage(image));
        i--;
    }
}
