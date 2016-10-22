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
//    connect(window->getProcess(), SIGNAL(readyReadStandardOutput()), this, SLOT(printOutput());

}

LookupPage::~LookupPage()
{
    delete ui;
}
/*
void LookupPage::printOutput(){
   //bigbuffer is member
   bigbuffer.append(myProcess->readAllStandardOutput();)
   ui->ResultText->setPlainText(bigbuffer);
}
*/
