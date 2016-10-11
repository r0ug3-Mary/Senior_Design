#ifndef SHOPPINGPAGESAVED_H
#define SHOPPINGPAGESAVED_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>

namespace Ui {
class ShoppingPageSaved;
}

class ShoppingPageSaved : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingPageSaved(QWidget *parent = 0);
    ~ShoppingPageSaved();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_swapButton2_clicked();

private:
    Ui::ShoppingPageSaved *ui;
    void getTextFile();
};

class DbManager3
{
public:
    DbManager3(const QString& path);
private:
    QSqlDatabase m_db;

};

#endif // SHOPPINGPAGESAVED_H
