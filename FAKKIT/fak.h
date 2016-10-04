#ifndef FAK_H
#define FAK_H

#include <QMainWindow>

namespace Ui {
class FAK;
}

class FAK : public QMainWindow
{
    Q_OBJECT

public:
    explicit FAK(QWidget *parent = 0);
    ~FAK();

private slots:
    void on_InventoryButton_clicked();

    void on_RecipeButton_clicked();

    void on_ShoppingButton_clicked();

    void on_ViewButton_clicked();

private:
    Ui::FAK *ui;
};

#endif // FAK_H
