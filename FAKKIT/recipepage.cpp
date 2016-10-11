#include "recipepage.h"
#include "ui_recipepage.h"
#include "fak.h"
<<<<<<< HEAD
#include "inventorypage.h"
#include "reciperesultspage.h"
=======
>>>>>>> origin/Jorge
#include <QProcess>
#include <QtCore/QTextstream>
#include <QtCore/QFile>
#include <QPushButton>
<<<<<<< HEAD
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

<<<<<<< HEAD
static const QString path = "C:/Users/r0ug3_h@cK3r/Documents/GitHub/Sr.GUI/FAKKIT/db/fakdb4.db";
=======
>>>>>>> origin/Jorge
=======

static const QString path = "C:/Users/r0ug3_h@cK3r/Documents/GitHub/Sr.GUI/FAKKIT/db/fakdb4.db";
>>>>>>> refs/remotes/origin/master

RecipePage::RecipePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipePage)
{
    ui->setupUi(this);
}

RecipePage::~RecipePage()
{
    delete ui;
}

void RecipePage::on_HomeButton2_clicked()
{

}

<<<<<<< HEAD
void RecipePage::on_SearchButton_clicked()
{
    RecipeResultsPage reciperesultsPage;
    reciperesultsPage.setModal(true);
    reciperesultsPage.exec();
}

void RecipePage::on_MoveOver_clicked()
{

}
=======
>>>>>>> origin/Jorge
