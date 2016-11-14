#ifndef SHOPPINGPAGESAVED_H
#define SHOPPINGPAGESAVED_H

#include "keyboard/keyboard.h"
#include "keyboard/ui_keyboard.h"
#include "dbmanager.h"
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

    void run_keyboard_lineEdit();

    void on_pushButton_3_clicked();

private:
    Ui::ShoppingPageSaved *ui;
    Keyboard *lineEditkeyboard;
    void getTextFile();
};


#endif // SHOPPINGPAGESAVED_H
