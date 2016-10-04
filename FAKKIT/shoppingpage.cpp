#include "shoppingpage.h"
#include "ui_shoppingpage.h"
#include "fak.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include "QtDebug"


static const QString path = "C:/Users/Piti/Desktop/QTProjects/FAKKIT/fakdb2.db";

ShoppingPage::ShoppingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingPage)
{
    ui->setupUi(this);

    DbManager2 db(path);
    QSqlQuery* query = new QSqlQuery();

    /*
    query->exec("SELECT * FROM Main");
    int idName = query->record().indexOf("name");
    while (query->next())
            {
                QString name = query->value(idName).toString();
                //qDebug() << "===" << name;
                ui->textEdit1->append(name);
            }

    query->exec("SELECT * FROM Main");
    int idDes = query->record().indexOf("description");
    while (query->next())
            {
                QString des = query->value(idDes).toString();
                //qDebug() << "===" << description;
                ui->textEdit2->append(des);
            }*/

    query->exec("SELECT * FROM Main");
    int idAmount = query->record().indexOf("amount");
    int idName = query->record().indexOf("name");
    while(query->next())
        {
            QString name = query->value(idName).toString();
            QString amount = query->value(idAmount).toString();
            if(amount == "Empty")
                {
                    ui->textEdit1->append(name);
                }
            else if(amount == "Low")
                {
                    ui->textEdit2->append(name);
                }
        }
}

DbManager2::DbManager2(const QString &path)
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

ShoppingPage::~ShoppingPage()
{
    delete ui;
}

void ShoppingPage::on_HomeButton3_clicked()
{

}

void ShoppingPage::on_addButton_clicked()
{
    QString newItem = ui->addItem->text();
    ui->textEdit1->append(newItem);
    ui->addItem->clear();
}
