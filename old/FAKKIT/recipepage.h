#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H
#include <QSqlDatabase>
#include <QtDebug>
#include <QDialog>
#include <QMainWindow>
#include "httprequestworker.h"

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
    void handle_result(HttpRequestWorker *worker);

    void on_MoveOver_clicked();

private:
    Ui::RecipePage *ui;
};


#endif // RECIPEPAGE_H
