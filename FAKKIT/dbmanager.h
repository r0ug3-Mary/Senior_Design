#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>

static const QString path = "/home/r0ug3/Desktop/FAKKIT/db/fakdb4.db";


class DbManager
{
public:
    DbManager(const QString& path)
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

#endif // DBMANAGER_H
