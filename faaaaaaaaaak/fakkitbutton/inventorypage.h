#ifndef INVENTORYPAGE_H
#define INVENTORYPAGE_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QMessageBox>
#include <QSqlError>


namespace Ui {
class InventoryPage;
}

class InventoryPage : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryPage(QWidget *parent = 0);
    //QSqlQueryModel *modal = new QSqlQueryModel();
    //QSqlQuery* query = new QSqlQuery();
    ~InventoryPage();

private slots:
    void High();
    void Low();
    void Empty();
    void on_HomeButton_clicked();

    void on_LowEmpButton_clicked();

    void on_RemoveButton_clicked();

    void on_AllButton_clicked();

private:
    Ui::InventoryPage *ui;
};

class DbManager
{
public:
    DbManager(const QString& path);

private:
    QSqlDatabase m_db;
};






static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(":memory:");  // memory only db

    QSqlQuery query;
    query.exec("create table person (ID int primary key, "
               "Name varchar(20), Text varchar(80))");
    query.exec("insert into person values(1, 'Danny', 'Some Text on Danny')");
    query.exec("insert into person values(2, 'Christine', 'Some Text on Christy')");
    query.exec("insert into person values(3, 'Lars', 'Some Text on Lars')");
    query.exec("insert into person values(4, 'Robert', 'Some Text on Robert')");
    query.exec("insert into person values(5, 'Maria', 'Some Text on Mary')");

    return true;
}




#endif // INVENTORYPAGE_H
