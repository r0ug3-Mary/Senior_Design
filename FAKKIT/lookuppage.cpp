#include "lookuppage.h"
#include "ui_lookuppage.h"
#include <QProcess>
#include <QNetworkReply>
#include <QMessageBox>

LookupPage::LookupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LookupPage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");
}

LookupPage::~LookupPage()
{
    delete ui;
}

void LookupPage::on_pushButton_clicked()
{
    QString API_KEY = "d6fd8f87abed004a5a382e1f2a9c30ae";
    QString url1 = "http://food2fork.com/api/search?";
    //char url2[] = "http://food2fork.com/api/get?";
    url1.append("key=");
    url1.append("d6fd8f87abed004a5a382e1f2a9c30ae");
    url1.append("&q");
    //QString url_str=url1 + "key=" + API_KEY + "&q=";
    HttpRequestInput input(url1, "GET");

    input.add_var("", "chicken");

    HttpRequestWorker *worker = new HttpRequestWorker(this);
    connect(worker, SIGNAL(on_execution_finished(HttpRequestWorker*)), this, SLOT(handle_result(HttpRequestWorker*)));
    worker->execute(&input);

    /*
    QProcess p;
    QStringList params;

    params << "/home/r0ug3/Desktop/GUI/Sr.GUI/FAKKIT/RecipeLookUpPython.py -arg1 arg1";
    p.start("python", params);
    p.waitForFinished(-1);

    QString p_stdout = p.readAll();

    ui->ResultText->setText(p_stdout);
    */
}

void LookupPage::handle_result(HttpRequestWorker *worker) {
    QString msg;

    if (worker->error_type == QNetworkReply::NoError) {
        // communication was successful
        msg = "Success - Response: " + worker->response;
    }
    else {
        // an error occurred
        msg = "Error: " + worker->error_str;
    }

    QMessageBox::information(this, "", msg);
}
