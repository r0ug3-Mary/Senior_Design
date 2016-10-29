#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H

#include "httprequestworker.h"
#include "keyboard/keyboard.h"
#include "dbmanager.h"

#include <QSqlDatabase>
#include <QtDebug>
#include <QDialog>
#include <QMainWindow>
#include <QPoint>
#include <QList>
#include <QString>
#include <QLabel>
#include <QUrl>
#include <QDesktopServices>

namespace Ui {
class RecipePage;
}

class RecipePage : public QDialog
{
    Q_OBJECT

public:
    explicit RecipePage(QWidget *parent = 0);
    void read(const QJsonObject &json);
    void write(QJsonObject &json) const;
    ~RecipePage();

private slots:
    void on_HomeButton2_clicked();

    void on_SearchButton_clicked();

    void handle_result(HttpRequestWorker *worker);

    void on_MoveOver_clicked();

    void run_keyboard_lineEdit();

    void fuckthislink();

private:
    Ui::RecipePage *ui;
    Keyboard *lineEditkeyboard;
};


#endif // RECIPEPAGE_H
