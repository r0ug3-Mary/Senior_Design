#ifndef SHOPPINGPAGE1_H
#define SHOPPINGPAGE1_H

#include "keyboard/keyboard.h"
#include "dbmanager.h"

#include <QSqlDatabase>
#include <QDialog>
#include <QtDebug>
#include <QWidget>

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

    void run_keyboard_lineEdit();

private:
    Ui::ShoppingPage1 *ui;
    Keyboard *lineEditkeyboard;
};




#endif // SHOPPINGPAGE1_H
