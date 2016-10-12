#include "shoppingpage1.h"
#include "ui_shoppingpage1.h"
#include "fak.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QStringListModel>
#include <QFile>
#include <QTextStream>

static const QString path = "C:/Users/Piti/Desktop/QTProjects/FAKKIT/fakdb2.db";

ShoppingPage1::ShoppingPage1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingPage1)
{
    ui->setupUi(this);
    DbManager2 db(path);
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    QSqlQuery* query2 = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    int idAmount = query->record().indexOf("amount");
    int idName = query->record().indexOf("name");
    query2->exec("SELECT name FROM Main WHERE amount == 'Low'");
    modal2->setQuery(*query2);
    ui->listView_2->setModel(modal2);
    while(query->next())
        {
            QString name = query->value(idName).toString();
            QString amount = query->value(idAmount).toString();
            if(amount == "Empty")
                {
                    ui->textEdit->append(name);
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


ShoppingPage1::~ShoppingPage1()
{
    delete ui;
}

void ShoppingPage1::on_swapButton_clicked()
{
    //SWAPPING
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query2 = new QSqlQuery();
    QModelIndex index = ui->listView_2->currentIndex();
    QString itemText = index.data(Qt::DisplayRole).toString();
    qDebug() << itemText;
    ui->textEdit->append(itemText);
    query2->exec("SELECT name FROM Main WHERE amount == 'Low'");
    modal2->setQuery(*query2);
    ui->listView_2->setModel(modal2);
}

void ShoppingPage1::on_pushButton_3_clicked()
{
    //ADDING
    QString newItem = ui->lineEdit->text();
    ui->textEdit->append(newItem);
}

void ShoppingPage1::on_pushButton_2_clicked()
{
    //SAVING
    QString filename = "C:/Users/Piti/Desktop/savelist.txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << ui->textEdit->toPlainText();
    }

}
