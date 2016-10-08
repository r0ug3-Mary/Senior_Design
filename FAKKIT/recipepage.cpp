#include "recipepage.h"
#include "ui_recipepage.h"
#include "fak.h"
#include "inventorypage.h"
#include <QProcess>
#include <QTextStream>
#include <QtCore/QFile>
#include <QPushButton>
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QProcess>
#include <QNetworkReply>
#include <QMessageBox>
#include <QListView>


static const QString path = "/home/r0ug3/Desktop/GUI/Sr.GUI/FAKKIT/db/fakdb4.db";

RecipePage::RecipePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipePage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    DbManager db(path);
    qDebug() << "Stuff in db:";
    QSqlQuery query;
    query.exec("SELECT * FROM codes");
    int idName = query.record().indexOf("name");
    while (query.next())
        {
            QString name = query.value(idName).toString();
            qDebug() << "===" << name;
            //ui->dbOutput->setPlainText(name);
            //ui->InventoryList->append(name);
        }

}

RecipePage::~RecipePage()
{
    delete ui;
}

void RecipePage::on_HomeButton2_clicked()
{

}

void RecipePage::on_SearchButton_clicked()
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
}

void RecipePage::on_MoveOver_clicked()
{

}

void RecipePage::handle_result(HttpRequestWorker *worker) {
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
