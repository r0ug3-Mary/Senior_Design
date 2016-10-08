#ifndef VIEWPAGE_H
#define VIEWPAGE_H

#include <QDialog>

namespace Ui {
class ViewPage;
}

class ViewPage : public QDialog
{
    Q_OBJECT

public:
    explicit ViewPage(QWidget *parent = 0);
    ~ViewPage();

private slots:
    void on_pushButton_clicked();

    void on_backButton_clicked();

private:
    Ui::ViewPage *ui;
};

#endif // VIEWPAGE_H
