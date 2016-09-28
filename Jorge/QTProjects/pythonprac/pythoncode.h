#ifndef PYTHONCODE_H
#define PYTHONCODE_H
#include "pyprac.h"

#include <QDialog>

namespace Ui {
class pythoncode;
}

class pythoncode : public QDialog
{
    Q_OBJECT

public:
    explicit pythoncode(QWidget *parent = 0);
    ~pythoncode();

private:
    Ui::pythoncode *ui;
};

#endif // PYTHONCODE_H
