#include "fak.h"
#include "ui_fak.h"
#include "inventorypage.h"
#include "recipepage.h"
#include "shoppingpage.h"
#include "viewpage.h"
#include "QPixmap"
#include "QSize"

FAK::FAK(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FAK)
{
    ui->setupUi(this);

    /*QPixmap f1("C:/Users/Piti/Desktop/fridge1.jpg");

    // get label dimensions
    int ww = ui->InventoryButton->width();
    int hh = ui->InventoryButton->height();

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    //ui->InventoryButton->setPixmap(f1.scaled(ww,hh,Qt::KeepAspectRatio));*/

    /*int ww = ui->InventoryButton->width();
    int hh = ui->InventoryButton->height();
    ui->InventoryButton->setIcon(QIcon("C:/Users/Piti/Desktop/fridge1.jpeg"));
    ui->InventoryButton->setIconSize(QSize(ww,hh));*/
}

FAK::~FAK()
{
    delete ui;
}


void FAK::on_InventoryButton_clicked()
{
    InventoryPage inventoryPage;
    inventoryPage.setModal(true);
    inventoryPage.exec();
}

void FAK::on_RecipeButton_clicked()
{
    RecipePage recipePage;
    recipePage.setModal(true);
    recipePage.exec();
}

void FAK::on_ShoppingButton_clicked()
{
    ShoppingPage shoppingPage;
    shoppingPage.setModal(true);
    shoppingPage.exec();
}

void FAK::on_ViewButton_clicked()
{
    ViewPage viewPage;
    viewPage.setModal(true);
    viewPage.exec();
}
