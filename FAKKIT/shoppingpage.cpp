#include "shoppingpage.h"
#include "ui_shoppingpage.h"
#include "fak.h"

ShoppingPage::ShoppingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingPage)
{
    ui->setupUi(this);
}

ShoppingPage::~ShoppingPage()
{
    delete ui;
}

void ShoppingPage::on_HomeButton3_clicked()
{

}
