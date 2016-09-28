#include "recipepage.h"
#include "ui_recipepage.h"
#include "fak.h"
#include <QProcess>
#include <QtCore/QTextstream>
#include <QtCore/QFile>
#include <QPushButton>

RecipePage::RecipePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecipePage)
{
    ui->setupUi(this);
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
    QString inp = ui->lineEdit1->text();
    QProcess p;
    QStringList params;
    params << "RecipeLookUpPython.py -arg1 arg1";
    p.start("python", params);
    p.waitForFinished(-1);
    QString p_stdout = p.readAllStandardOutput();
    ui->textBrowser1->setPlainText(p_stdout);
}
