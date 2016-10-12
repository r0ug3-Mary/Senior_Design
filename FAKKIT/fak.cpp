#include "fak.h"
#include "ui_fak.h"
#include "inventorypage.h"
#include "recipepage.h"
#include "shoppingpage.h"
#include "viewpage.h"
#include "QPixmap"
#include <QIcon>

FAK::FAK(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FAK)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");
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
