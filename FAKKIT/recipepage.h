#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H

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

private:
    Ui::RecipePage *ui;
};

#endif // RECIPEPAGE_H
