#include "reciperesultspage.h"
#include "ui_reciperesultspage.h"
#include "recipepage.h"

RecipeResultsPage::RecipeResultsPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipeResultsPage)
{
    ui->setupUi(this);
}

RecipeResultsPage::~RecipeResultsPage()
{
    delete ui;
}
