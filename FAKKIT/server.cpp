#include "server.h"
#include "networkthread.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{

}

void Server::startServer()
{
    int port=1234;  //change to port of socket
    if(!this->listen(QHostAddress::Any, port))
    {
        qDebug() << "Couldn't start server";
    }
    else
    {
        qDebug() << "Listening to port " << port << "...";
    }
}

//call this funtion when new connection available
void Server::incomingConnection(qintptr socketDescriptor)
{
    //new connection
    qDebug() << socketDescriptor << "Connecting...";

    //new connections in new threads
    NetworkThread *thread=new NetworkThread(socketDescriptor, this);

    //connecting signals/slots, delete thread when not needed
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
