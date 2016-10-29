#include "networkthread.h"
#include "fak.h"
#include "recentpage.h"


NetworkThread::NetworkThread(qintptr ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor=ID;
}

void NetworkThread::run()
{
    //thread start
    qDebug() << "Thread Started";
    socket=new QTcpSocket();

    //set ID
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        //error occurs, send signal
        emit error(socket->error());
    }

    //connect socket and signal
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    //connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    //this is where the magic happens
    connect(socket, SIGNAL(readyRead()), this, SLOT(intSlo()));

    //differentiate clients
    qDebug() << socketDescriptor << "Client Connected";

    //loop thread
    exec();
}

void NetworkThread::readyRead()
{
    //grab data
    QByteArray Data=socket->readAll();
}

void NetworkThread::disconnected()
{
    qDebug() << socketDescriptor << "Disconnected";
    socket->deleteLater();
    exit(0);
}

void NetworkThread::intSlo()
{
    RecentPage *recentPage=new RecentPage();
    recentPage->show();
}

