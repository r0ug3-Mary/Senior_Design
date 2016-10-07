#include "fak.h"
#include "ui_fak.h"
#include "inventorypage.h"
#include "recipepage.h"
#include "viewpage.h"
#include "QPixmap"
#include "QSize"
#include "shoppingpage1.h"
#include "shoppingpagesaved.h"
#include "QtCore"
#include "QtGui"
#include "QMessageBox"

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
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Shopping List", "Do you wish to use the last saved shopping list?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        ShoppingPageSaved shoppingPageSaved;
        shoppingPageSaved.setModal(true);
        shoppingPageSaved.exec();

    }
    else if (reply == QMessageBox::No)
    {
        QMessageBox::StandardButton reply2;
        reply2 = QMessageBox::question(this, "New List", "If Yes then the last saved Shopping List will be lost",
                                       QMessageBox::Yes | QMessageBox::No);
                if (reply2 == QMessageBox::Yes)
                {
                    ShoppingPage1 shoppingPage1;
                    shoppingPage1.setModal(true);
                    shoppingPage1.exec();
                }
                else if (reply2 == QMessageBox::No)
                {
                    delete ui;
                }
    }

}

void FAK::on_ViewButton_clicked()
{
    ViewPage viewPage;
    viewPage.setModal(true);
    viewPage.exec();
}
