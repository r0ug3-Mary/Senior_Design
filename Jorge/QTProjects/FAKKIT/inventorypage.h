#ifndef INVENTORYPAGE_H
#define INVENTORYPAGE_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>

namespace Ui {
class InventoryPage;
}

class InventoryPage : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryPage(QWidget *parent = 0);
    ~InventoryPage();

private slots:
    void on_HomeButton_clicked();

    void on_ConfirmButton_clicked();

    void on_AddButton_clicked();

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

#endif // INVENTORYPAGE_H
