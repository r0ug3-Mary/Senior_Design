#include "fak.h"
#include "ui_fak.h"
#include "inventorypage.h"
#include "recipepage.h"
#include "shoppingpage.h"
#include "viewpage.h"
#include "QPixmap"
#include <QIcon>
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
    this->setStyleSheet("background-color:#626065;");

    //set button imgs and size
    ui->InventoryButton->setIcon(QIcon(":/pics/inventorybutton.png"));
    ui->InventoryButton->setIconSize(QSize(388,238));
    ui->RecipeButton->setIcon(QIcon(":/pics/recipebutton.png"));
    ui->RecipeButton->setIconSize(QSize(388,238));
    ui->ShoppingButton->setIcon(QIcon(":/pics/shoppingbutton.png"));
    ui->ShoppingButton->setIconSize(QSize(388,238));
    ui->pushButton->setIcon(QIcon(":/pics/picturebutton.png"));
    ui->pushButton->setIconSize(QSize(388,238));
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
        reply2 = QMessageBox::question(this, "New List", "If Yes is clicked, then the last saved Shopping List will be lost",
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

void FAK::on_pushButton_clicked()
{
    ViewPage viewPage;
    viewPage.setModal(true);
    viewPage.exec();
}
