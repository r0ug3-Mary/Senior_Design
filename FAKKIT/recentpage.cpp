#include "recentpage.h"
#include "ui_recentpage.h"
#include "fak.h"
#include "dbmanager.h"

#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QModelIndex>
#include <QPushButton>
#include <QVector>

RecentPage::RecentPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecentPage)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    QSqlQueryModel *modal =new QSqlQueryModel();
    DbManager db(path);
    QSqlQuery* query = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    int rowcount = ui->tableView->verticalHeader()->count();
    qDebug() << rowcount;


    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button;
        button = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
        connect(button, SIGNAL(clicked()), this, SLOT(High()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button2;
        button2 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
        connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
    }
    for (int i=0; i < rowcount; i++)
    {
        QPushButton *button3;
        button3 = new QPushButton;
        ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 5), button3);
        connect(button3, SIGNAL(clicked()), this, SLOT(Empty()));
    }


    ui->tableView->resizeColumnsToContents();

}

RecentPage::~RecentPage()
{
    delete ui;
}

void RecentPage::on_HomeButton_rp_clicked()
{
    close();
}

void RecentPage::High()
{
    QSqlQuery* query = new QSqlQuery();
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    qDebug() << ID;
    query->prepare("UPDATE Main SET Amount = 'High' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();

    close();

    RecentPage recentPage;
    recentPage.setModal(true);
    recentPage.exec();
}

void RecentPage::Low()
{
    QSqlQuery* query = new QSqlQuery();
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    qDebug() << ID;
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    query->prepare("UPDATE Main SET Amount = 'Low' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();


    close();

    RecentPage recentPage;
    recentPage.setModal(true);
    recentPage.exec();
}

void RecentPage::Empty()
{
    QSqlQuery* query = new QSqlQuery();
    qDebug() << ui->tableView->currentIndex() << "3";
    int ID = ui->tableView->selectionModel()->currentIndex().row();
    QString tablename = ui->tableView->model()->data(ui->tableView->model()->index(ID,0)).toString();
    query->prepare("UPDATE Main SET Amount = 'Empty' WHERE Name = (:ref_name)");
    query->bindValue(":ref_name",tablename);
    query->exec();


    close();

    RecentPage recentPage;
    recentPage.setModal(true);
    recentPage.exec();
}
