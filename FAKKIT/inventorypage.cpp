#include "inventorypage.h"
#include "ui_inventorypage.h"
#include "fak.h"
#include "inventorypage.h"
#include "dbmanager.h"
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

//static const QString path = "/home/pi/Desktop/FAKKIT/db/fakdb4.db";

InventoryPage::InventoryPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryPage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    DbManager db(path);
    qDebug() << "Stuff in db:";
    QSqlQuery query;
    query.exec("SELECT * FROM codes");
    int idName = query.record().indexOf("name");
    while (query.next())
        {
            QString name = query.value(idName).toString();
            qDebug() << "===" << name;
            //ui->dbOutput->setPlainText(name);
            ui->dbOutput->append(name);
        }
}


InventoryPage::~InventoryPage()
{
    delete ui;
}

void InventoryPage::on_HomeButton_clicked()
{

}



