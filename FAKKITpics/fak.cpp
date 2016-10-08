#include "fak.h"
#include "ui_fak.h"
#include "inventorypage.h"
#include "recipepage.h"
#include "shoppingpage.h"
#include "viewpage.h"
#include "QPixmap"

FAK::FAK(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FAK)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    //int w = ui->pushButton->width();
    //int h = ui->pushButton->height();

    //testing the scaling of button icons and stuff

    QPixmap invpic(":/pics/man2.jpg");
    QIcon InvButtonIcon(invpic);
    ui->InventoryButton->setIcon(InvButtonIcon);
    //ui->InventoryButton->setIconSize(invpic.rect().size());
    ui->InventoryButton->setIconSize(QSize(100,100));

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

void FAK::on_pushButton_clicked()
{
    ViewPage viewPage;
    viewPage.setModal(true);
    viewPage.exec();
}
