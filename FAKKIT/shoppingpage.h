#ifndef SHOPPINGPAGE_H
#define SHOPPINGPAGE_H

#include "/home/r0ug3/Desktop/FAKKIT/keyboard/keyboard.h"
#include "/home/r0ug3/Desktop/FAKKIT/keyboard/ui_keyboard.h"
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

    void on_AddButton_clicked();

    void on_RemoveItem_clicked();

    void on_SaveList_clicked();

    void run_keyboard_lineEdit();

private:
    Ui::ShoppingPage *ui;
    Keyboard *lineEditkeyboard;
};

#endif // SHOPPINGPAGE_H
