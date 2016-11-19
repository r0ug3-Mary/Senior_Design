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

#include <QCoreApplication>
#include <QSqlDatabase>
#include <QStringList>
#include <QDebug>
#include <QSql>


RecentPage::RecentPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecentPage)
{
        ui->setupUi(this);
        //QDialog::showFullScreen();
        this->setStyleSheet("background-color:#626065;");
        ui->HomeButton_rp->setStyleSheet("font: bold 32px; color: white;");
        ui->tableView->setStyleSheet("background-color: #1c1b1b; font: bold 24px; color: white;");

        DbManager db(path2);

        QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE", "first");
        db1.setHostName("noheat");
        db1.setDatabaseName(path);
        bool ok = db1.open();
        qDebug() << ok << "Did it fucking open #1?";

        QSqlQueryModel *modal = new QSqlQueryModel();
        QSqlQuery* query = new QSqlQuery();
        QSqlQuery query1("SELECT * FROM Main");
        query->exec("SELECT * FROM Main");
        modal->setQuery(query1);
        ui->tableView->setModel(modal);
        for (int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c)
        {
            ui->tableView->horizontalHeader()->setSectionResizeMode(
                c, QHeaderView::Stretch);
        }
        //qDebug() << ui->tableView->model();
        int rowcount = ui->tableView->verticalHeader()->count();

        for (int i=0; i < rowcount; i++)
        {
            QPushButton *button;
            button = new QPushButton;
            button->setStyleSheet("border-image:url(:/pics/highbutton.png);");
            //button->setStyleSheet("QPushButton{boarder-image: url(:/pics/prev.png);");
            ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 3), button);
            connect(button, SIGNAL(clicked()), this, SLOT(High()));
        }
        for (int i=0; i < rowcount; i++)
        {
            QPushButton *button2;
            button2 = new QPushButton;
            button2->setStyleSheet("border-image:url(:/pics/lowbutton.png);");
            ui->tableView->setIndexWidget(ui->tableView->model()->index(i, 4), button2);
            connect(button2, SIGNAL(clicked()), this, SLOT(Low()));
        }
        for (int i=0; i < rowcount; i++)
        {
            QPushButton *button3;
            button3 = new QPushButton;
            button3->setStyleSheet("border-image:url(:/pics/emptybutton.png);");
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
        QSqlQueryModel *modal =new QSqlQueryModel();
        QSqlQuery* query = new QSqlQuery;


        QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE", "first");
        db1.setHostName("noheat");
        db1.setDatabaseName(path2);
        bool ok = db1.open();
        //qDebug() << ok << "Did it fucking open #1?";

        // Keep list of data string lists
        QList<QStringList> list;
        QStringList fieldNames;
        QStringList dbData;
        QStringList dbData2;
        QStringList dbData3;
        QStringList whocares;

        QSqlQuery q( "Select * from Main", db1);
        QSqlRecord rec = q.record();

        // Put field names in string list
        for( int i=0; i<rec.count(); ++i )
            fieldNames << rec.fieldName( i );

        // Store names to list
        list << fieldNames;


        // Print data based on fields
        foreach( QString str, fieldNames ){
            while( q.next() ){
                if (str == "Name")
                {
                    dbData << q.value(rec.indexOf( str )).toString();

                }
                if (str == "Category")
                {
                    dbData2 << q.value(rec.indexOf( str )).toString();
                }
                if (str == "Amount")
                {
                    dbData3 << q.value(rec.indexOf( str )).toString();
                }
                else
                {
                    whocares << q.value(rec.indexOf( str )).toString();
                }
            }
            q.seek(-1);  // since next at end - start at top again for next pass
        }

        // Store dbData in List when complete
        list << dbData;
        list << dbData2;
        list << dbData3;
        //list << whocares;

        DbManager db(path);


        for (int i = 0; i < dbData.count(); i++)
        {
            //qDebug() << dbData[i];
            QSqlQuery query1;
            query1.prepare("INSERT INTO Main (Name, Category, Amount) VALUES(:your_name, :your_category, :your_amount)");
            query1.bindValue(":your_name", dbData[i]);
            query1.bindValue(":your_category", dbData2[i]);
            query1.bindValue(":your_amount", dbData3[i]);
            query1.exec();
        }

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
