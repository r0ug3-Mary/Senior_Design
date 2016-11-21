#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>


static const QString path = "/var/www/permanentdb.db";
static const QString path2 = "/var/www/dbitems.db";

class DbManager
{
public:
    //QSqlDatabase m_db;
    DbManager(const QString &path)
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

private:
    QSqlDatabase m_db;
};

class DbManager2
{
public:
    DbManager2(const QString &path2)
{
   m_db2 = QSqlDatabase::addDatabase("QSQLITE");
   m_db2.setDatabaseName(path2);

   if (!m_db2.open())
   {
      qDebug() << "Error: connection with database fail";
   }
   else
   {
      qDebug() << "Database: connection ok";
   }
}

private:
    QSqlDatabase m_db2;
};

#endif // DBMANAGER_H
