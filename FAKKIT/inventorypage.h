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

private:
    Ui::InventoryPage *ui;
};


#endif // INVENTORYPAGE_H
