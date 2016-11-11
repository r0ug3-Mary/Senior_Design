#ifndef SHOPPINGPAGE1_H
#define SHOPPINGPAGE1_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>


namespace Ui {
class ShoppingPage1;
}

class ShoppingPage1 : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingPage1(QWidget *parent = 0);
    ~ShoppingPage1();

private slots:
    void on_swapButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ShoppingPage1 *ui;
};

class DbManager2
{
public:
    DbManager2(const QString& path);
private:
    QSqlDatabase m_db;
};


#endif // SHOPPINGPAGE1_H
