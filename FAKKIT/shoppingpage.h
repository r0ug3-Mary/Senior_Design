#ifndef SHOPPINGPAGE_H
#define SHOPPINGPAGE_H
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class ShoppingPage;
}

class ShoppingPage : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingPage(QWidget *parent = 0);
    ~ShoppingPage();

private slots:
    void on_HomeButton3_clicked();

    void on_addButton_clicked();

private:
    Ui::ShoppingPage *ui;
};

class DbManager2
{
public:
    DbManager2(const QString& path);


private:
    QSqlDatabase m_db;
};



#endif // SHOPPINGPAGE_H
