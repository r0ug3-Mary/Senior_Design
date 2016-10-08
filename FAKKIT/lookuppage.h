#ifndef LOOKUPPAGE_H
#define LOOKUPPAGE_H

#include <QDialog>
#include <QMainWindow>
#include "httprequestworker.h"

namespace Ui {
class LookupPage;
}

class LookupPage : public QDialog
{
    Q_OBJECT

public:
    explicit LookupPage(QWidget *parent = 0);
    ~LookupPage();

private slots:
    void on_pushButton_clicked();
    void handle_result(HttpRequestWorker *worker);

private:
    Ui::LookupPage *ui;
};

#endif // LOOKUPPAGE_H
