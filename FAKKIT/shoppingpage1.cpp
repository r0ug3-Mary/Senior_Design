#include "shoppingpage1.h"
#include "ui_shoppingpage1.h"
#include "fak.h"
#include "keyboard/keyboard.h"
#include "keyboard/ui_keyboard.h"
#include "inventorypage.h"
#include "dbmanager.h"
#include <QtDebug>
#include "QtDebug"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QStringListModel>
#include <QFile>
#include <QTextStream>


ShoppingPage1::ShoppingPage1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShoppingPage1)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#626065;");

    //keyboard upon lineedit
    lineEditkeyboard = new Keyboard();
    connect(ui->lineEdit ,SIGNAL(selectionChanged()),this,SLOT(run_keyboard_lineEdit()));

    DbManager db(path);
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query = new QSqlQuery();
    QSqlQuery* query2 = new QSqlQuery();
    query->exec("SELECT * FROM Main");
    int idAmount = query->record().indexOf("amount");
    int idName = query->record().indexOf("name");
    query2->exec("SELECT name FROM Main WHERE amount == 'Low'");
    modal2->setQuery(*query2);
    ui->listView_2->setModel(modal2);
    while(query->next())
        {
            QString name = query->value(idName).toString();
            QString amount = query->value(idAmount).toString();
            if(amount == "Empty")
                {
                    ui->textEdit->append(name);
                }
        }
}


ShoppingPage1::~ShoppingPage1()
{
    delete ui;
}

void ShoppingPage1::on_swapButton_clicked()
{
    //SWAPPING
    QSqlQueryModel *modal2 =new QSqlQueryModel();
    QSqlQuery* query2 = new QSqlQuery();
    QModelIndex index = ui->listView_2->currentIndex();
    QString itemText = index.data(Qt::DisplayRole).toString();
    qDebug() << itemText;
    ui->textEdit->append(itemText);
    query2->exec("SELECT name FROM Main WHERE amount == 'Low'");
    modal2->setQuery(*query2);
    ui->listView_2->setModel(modal2);
}

void ShoppingPage1::on_pushButton_3_clicked()
{
    //ADDING
    QString newItem = ui->lineEdit->text();
    ui->textEdit->append(newItem);
}

void ShoppingPage1::on_pushButton_2_clicked()
{
    //SAVING
    QString filename = "~/Desktop/savelist.txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << ui->textEdit->toPlainText();
    }

}
void ShoppingPage1::run_keyboard_lineEdit()
{
    QLineEdit *line = (QLineEdit *)sender();
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}
