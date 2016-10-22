#include "recipepage.h"
#include "ui_recipepage.h"
#include "fak.h"
#include "inventorypage.h"
#include "dbmanager.h"
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
#include <QSqlQueryModel>
#include <QStringListModel>
#include <QFile>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QJsonArray>


RecipePage::RecipePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipePage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    DbManager db(path);
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    QSqlQuery* query2 = new QSqlQuery();
    query->exec("SELECT * FROM codes");
    int idAmount = query->record().indexOf("");
    int idName = query->record().indexOf("name");
    query2->exec("SELECT name FROM codes");
    modal2->setQuery(*query2);
    ui->InventoryList->setModel(modal2);
    while(query->next())
        {
            QString name = query->value(idName).toString();
            QString amount = query->value(idAmount).toString();
            if(amount == "Empty")
                {
                    ui->RecipeParams->append(name);
                }
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

    QString params = ui->RecipeParams->toPlainText();

    //call search api
    QString url1 = "http://food2fork.com/api/search?";
    url1.append("key=");
    url1.append("d6fd8f87abed004a5a382e1f2a9c30ae");
    url1.append("&q=");
    url1.append(params);

    //call get api
    QString url2 = "http://food2fork.com/api/get?";
    url2.append("key=");
    url2.append("d6fd8f87abed004a5a382e1f2a9c30ae");
    url2.append("&rId=");
    url2.append(params);

    //request from api
    HttpRequestInput input(url1, "GET");

    //input.add_var("", "");

    HttpRequestWorker *worker = new HttpRequestWorker(this);
    connect(worker, SIGNAL(on_execution_finished(HttpRequestWorker*)), this, SLOT(handle_result(HttpRequestWorker*)));
    worker->execute(&input);

}

void RecipePage::on_MoveOver_clicked()
{
    //SWAPPING
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query2 = new QSqlQuery();
    QModelIndex index = ui->InventoryList->currentIndex();
    QString itemText = index.data(Qt::DisplayRole).toString();
    qDebug() << itemText;
    ui->RecipeParams->append(itemText);
    query2->exec("SELECT name FROM codes");
    modal2->setQuery(*query2);
    ui->InventoryList->setModel(modal2);
}

void RecipePage::handle_result(HttpRequestWorker *worker) {
    QString msg;

    if (worker->error_type == QNetworkReply::NoError) {
        // communication was successful
        msg = "Success - Response: " + worker->response;

        //format json
        /*
        QStringList propertyNames;
        //QStringList propertyKeys;
        QString strReply = (QString)msg->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
        QJsonObject jsonObject = jsonResponse.object();
        QJsonArray jsonArray = jsonObject["title"].toArray();

        foreach (const QJsonValue & value, jsonArray) {
            QJsonObject obj = value.toObject();
            propertyNames.append(obj["title"].toString());
        //    propertyKeys.append(obj["key"].toString());
        }
        */
        //QJsonDocument doc = QJsonDocument::fromJson(msg.toUtf8());
        //QString formattedJsonString = doc.toJson(QJsonDocument::Indented);

    }
    else {
        // an error occurred
        msg = "Error: " + worker->error_str;
    }

    QMessageBox::information(this, "", msg);

    /*
    //display on next page
    m_myProcess =  new QProcess();
    m_myProcess.setProcessChannelMode(QProcess::MergedChannels);
    */
}

/*
QProcess* RecipePage::getProcess()
{
   return  m_myProcess;
}
*/
