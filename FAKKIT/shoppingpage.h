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

private:
    Ui::ShoppingPage *ui;
};

#endif // SHOPPINGPAGE_H
