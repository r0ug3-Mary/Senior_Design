#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H
#include <QSqlDatabase>
#include <QtDebug>
#include <QDialog>

namespace Ui {
class RecipePage;
}

class RecipePage : public QDialog
{
    Q_OBJECT

public:
    explicit RecipePage(QWidget *parent = 0);
    ~RecipePage();

private slots:
    void on_HomeButton2_clicked();

    void on_SearchButton_clicked();

    void on_MoveOver_clicked();

private:
    Ui::RecipePage *ui;
};

/*
class DbManager2
{
public:
    DbManager2(const QString& path);


private:
    QSqlDatabase m_db;
};
*/

#endif // RECIPEPAGE_H
