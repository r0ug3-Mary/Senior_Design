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
#include <QModelIndex>

QModelIndex test;

static const QString path = "C:/Users/Detergent/Desktop/fakkitbutton/fakdb2.db";

InventoryPage::InventoryPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryPage)
{
    ui->setupUi(this);
    DbManager db(path);

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    qDebug() << ui->tableView->model();
    int rowcount = ui->tableView->verticalHeader()->count();
    //qDebug() << rowcount;
    //test = ui->tableView->currentIndex();
    //qDebug() << test;
    qDebug() << ui->tableView->currentIndex() << "1";

    for (int i=0; i < rowcount; i++)
    {
        //qDebug() << ui->tableView->currentIndex();
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
        //qDebug() << ui->tableView->currentIndex();
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



    //ui->tableView->setCurrentIndex(test);
    //test = ui->tableView->currentIndex();

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


    close();

    InventoryPage inventoryPage;
    inventoryPage.setModal(true);
    inventoryPage.exec();



    //close();

    /*
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    //modal->query().exec();
    //this
    ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;
    //this
    ui->tableView->setModel(modal);
    qDebug() << ui->tableView->model() << "model after setModel";
    //QModelIndex workpls =
    //ui->tableView->selectAll();


    //this
    //QModelIndex test = ui->tableView->model()->index(ID,0);
    //ui->tableView->model();
    ID = ui->tableView->selectionModel()->currentIndex().row();
    //qDebug() << ID;
    ui->tableView->setCurrentIndex(ui->tableView->model()->index(ID,0));
    qDebug() << ui->tableView->model() << "model before currentindex.row";
    ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;
    //this
    int rowcount = ui->tableView->verticalHeader()->count();
    //qDebug() << rowcount;
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button1;
        button1 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button1);
        connect(button1, SIGNAL(clicked()), this, SLOT(High()));
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
    //this
    ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;
    //this
    //ui->tableView->selectAll();
    */
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


    close();

    InventoryPage inventoryPage;
    inventoryPage.setModal(true);
    inventoryPage.exec();

    /*
    //test
    ui->tableView->model()->setData(ui->tableView->model()->index(ID,2),"Low");
    //test



    //query->exec("SELECT * FROM Main");
    //modal->setQuery(*query);
    //ui->tableView->setModel(modal);
    //int rowcount = ui->tableView->verticalHeader()->count();
    //qDebug() << rowcount;
    //this
    //QModelIndex test = ui->tableView->model()->index(ID,0);
    //ui->tableView->setCurrentIndex(test);
    //ID = ui->tableView->selectionModel()->currentIndex().row();
    //qDebug() << ID;
    //this

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
    */


    //ui->tableView->resizeColumnsToContents();

}
void InventoryPage::Empty()
{
    //qDebug() << ui->tableView->currentIndex() << "2";
    //test = ui->tableView->currentIndex();
    //qDebug() << test;
    //ui->tableView->clearFocus();
    //ui->tableView->clearSelection();
    /*
    qDebug() << test << "beginning";
    test = ui->tableView->currentIndex();
    qDebug() << test << "beginning";
    */

    //ui->tableView->setCurrentIndex(test);

    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    qDebug() << ui->tableView->currentIndex() << "3";
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    query->prepare("UPDATE Main SET Amount = 'Empty' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();


    close();

    InventoryPage inventoryPage;
    inventoryPage.setModal(true);
    inventoryPage.exec();


    /*
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    qDebug() << ui->tableView->currentIndex() << "4";
    ui->tableView->setModel(modal);
    qDebug() << ui->tableView->currentIndex() << "5";
    //ui->tableView->setCurrentIndex(test);
    qDebug() << ui->tableView->currentIndex() << "6";

    int rowcount = ui->tableView->verticalHeader()->count();
    //qDebug() << rowcount;



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
    */

    /*
    ui->tableView->resizeColumnsToContents();
    qDebug() << test << "end 1";
    ui->tableView->setCurrentIndex(test);
    qDebug() << test << "end 2";
    */


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

