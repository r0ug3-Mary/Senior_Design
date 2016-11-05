#include "recipepage.h"
#include "ui_recipepage.h"
#include "fak.h"
#include <QProcess>
#include <QtCore/QTextstream>
#include <QtCore/QFile>
#include <QPushButton>

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

