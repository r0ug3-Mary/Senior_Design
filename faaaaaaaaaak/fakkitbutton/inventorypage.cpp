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

#include <QCoreApplication>
#include <QSqlDatabase>
#include <QStringList>
#include <QDebug>
#include <QSql>

QModelIndex test;

static const QString path = "C:/Users/Detergent/Desktop/fakkitbutton/fakdb2.db";
static const QString path2 = "C:/Users/Detergent/Desktop/fakkitbutton/fakdb3.db";






InventoryPage::InventoryPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InventoryPage)
{
    ui->setupUi(this);
    DbManager db(path2);           //fuckthisfuckityfuck


    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE", "first");
    db1.setHostName("noheat");
    db1.setDatabaseName(path);
    bool ok = db1.open();
    qDebug() << ok << "Did it fucking open #1?";

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    QSqlQuery query1("SELECT * FROM Main", db1);
    query->exec("SELECT * FROM Main");
    modal->setQuery(query1);
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
}
void InventoryPage::Empty()
{
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

void InventoryPage::on_HomeButton_clicked()                         //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
{
    QSqlQueryModel *modal =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery;


    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE", "first");
    db1.setHostName("noheat");
    db1.setDatabaseName(path);
    //db1.setUserName("test1");
    //db1.setPassword("aaabbb");
    bool ok = db1.open();
    qDebug() << ok << "Did it fucking open #1?";

    // Keep list of data string lists
    QList<QStringList> list;
    QStringList fieldNames;
    QStringList dbData;
    QStringList dbData2;
    QStringList dbData3;
    QStringList whocares;

    QSqlQuery q( "Select * from Main", db1);
    QSqlRecord rec = q.record();

    // Put field names in string list
    for( int i=0; i<rec.count(); ++i )
        fieldNames << rec.fieldName( i );

    // Store names to list
    list << fieldNames;

    // Print out field found from person database
    //qDebug() << "field Names Found: ";
    //foreach( QString str, fieldNames )
        //qDebug() << str;

    // Print data based on fields
    foreach( QString str, fieldNames ){
        while( q.next() ){
            if (str == "Name")
            {
                dbData << q.value(rec.indexOf( str )).toString();
            }
            if (str == "Category")
            {
                dbData2 << q.value(rec.indexOf( str )).toString();
            }
            if (str == "Amount")
            {
                dbData3 << q.value(rec.indexOf( str )).toString();
            }
            else
            {
                whocares << q.value(rec.indexOf( str )).toString();
            }
        }
        q.seek(-1);  // since next at end - start at top again for next pass
    }
    // Store dbData in List when complete
    list << dbData;
    list << dbData2;
    list << dbData3;
    //list << whocares;

    for (int i = 0; i < dbData.count(); i++)
    {
        //qDebug() << dbData[i];
        QSqlQuery query1;
        query1.prepare("INSERT INTO Main (Name, Category, Amount) VALUES(:your_name, :your_category, :your_amount)");
        query1.bindValue(":your_name", dbData[i]);
        query1.bindValue(":your_category", dbData2[i]);
        query1.bindValue(":your_amount", dbData3[i]);
        query1.exec();
    }

    query->exec("DELETE FROM Main WHERE rowid NOT IN (SELECT MAX(rowid) FROM Main GROUP BY Name)");
}

void InventoryPage::on_LowEmpButton_clicked()
{

}

void InventoryPage::on_RemoveButton_clicked()
{

}

void InventoryPage::on_AllButton_clicked()
{

}

