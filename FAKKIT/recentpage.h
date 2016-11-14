#ifndef RECENTPAGE_H
#define RECENTPAGE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtDebug>

namespace Ui {
class RecentPage;
}

class RecentPage : public QDialog
{
    Q_OBJECT

public:
    explicit RecentPage(QWidget *parent = 0);
    ~RecentPage();

private slots:
    void on_HomeButton_rp_clicked();

    void High();

    void Low();

    void Empty();

private:
    Ui::RecentPage *ui;
};

#endif // RECENTPAGE_H
