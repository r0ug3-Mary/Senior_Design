#include "inventorypage.h"
#include "ui_inventorypage.h"
#include "fak.h"
#include "inventorypage.h"
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

static const QString path = "C:/Users/Piti/Desktop/QTProjects/FAKKIT/fakdb2.db";

InventoryPage::InventoryPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryPage)
{
    ui->setupUi(this);
    DbManager db(path);
    qDebug() << "Persons in db:";
    QSqlQuery query;
    query.exec("SELECT * FROM Main");
    int idName = query.record().indexOf("name");
    while (query.next())
        {
            QString name = query.value(idName).toString();
            qDebug() << "===" << name;
            //ui->dbOutput->setPlainText(name);
            ui->dbOutput->append(name);
        }
}

DbManager::DbManager(const QString &path)
{
   m_db = QSqlDatabase::addDatabase("QSQLITE");
   m_db.setDatabaseName(path);

   if (!m_db.open())
   {
      qDebug() << "Error: connection with database fail";
   }
   else
   {
      qDebug() << "Database: connection ok";
   }
}

InventoryPage::~InventoryPage()
{
    delete ui;
}

void InventoryPage::on_HomeButton_clicked()
{

}



