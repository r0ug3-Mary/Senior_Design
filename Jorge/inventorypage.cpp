#include "inventorypage.h"
#include "ui_inventorypage.h"
#include "fak.h"
#include "inventorypage.h"
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QModelIndex>
#include <QPushButton>
#include <QVector>



static const QString path = "C:/Users/Piti/Desktop/QTProjects/FAKKIT/fakdb2.db";

InventoryPage::InventoryPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryPage)
{
    ui->setupUi(this);   
    DbManager db(path);

    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;


    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();

}

void InventoryPage::High()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    int ID = ui->tableView->selectionModel()->currentIndex().row();

    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    qDebug() << ID;
    query->prepare("UPDATE Main SET Amount = 'High' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();
    //ui->tableView->selectionModel()->
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);

    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }


    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }

    ui->tableView->resizeColumnsToContents();

}
void InventoryPage::Low()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    query->prepare("UPDATE Main SET Amount = 'Low' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;

    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();
}
void InventoryPage::Empty()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    query->prepare("UPDATE Main SET Amount = 'Empty' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;

    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }

    ui->tableView->resizeColumnsToContents();
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

void InventoryPage::on_LowEmpButton_clicked()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Main WHERE amount == 'Low' or amount == 'Empty'");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;

    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();
}

void InventoryPage::on_RemoveButton_clicked()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();

    int ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;

    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    qDebug() << tablename;

    query->prepare("DELETE FROM Main WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;

    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();

}

void InventoryPage::on_AllButton_clicked()
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;

    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();
}

