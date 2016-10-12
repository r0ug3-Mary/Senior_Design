#ifndef PICTUREPAGE_H
#define PICTUREPAGE_H

#include <QDialog>

namespace Ui {
class PicturePage;
}

class PicturePage : public QDialog
{
    Q_OBJECT

public:
    explicit PicturePage(QWidget *parent = 0);
    ~PicturePage();

private:
    Ui::PicturePage *ui;
};

#endif // PICTUREPAGE_H
