#ifndef SHOPPINGPAGE_H
#define SHOPPINGPAGE_H

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

private:
    Ui::ShoppingPage *ui;
};

#endif // SHOPPINGPAGE_H
