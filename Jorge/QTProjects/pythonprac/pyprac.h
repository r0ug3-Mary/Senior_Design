#ifndef PYPRAC_H
#define PYPRAC_H
#include "pythoncode.h"

#include <QMainWindow>

namespace Ui {
class pyprac;
}

class pyprac : public QMainWindow
{
    Q_OBJECT

public:
    explicit pyprac(QWidget *parent = 0);
    ~pyprac();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_destroyed();

private:
    Ui::pyprac *ui;
};

#endif // PYPRAC_H
