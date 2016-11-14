#ifndef NETWORKTHREAD_H
#define NETWORKTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class NetworkThread : public QThread
{
    Q_OBJECT
public:
    explicit NetworkThread(qintptr ID, QObject *parent = 0);

    void run();

signals:
    void error(QTcpSocket::SocketError socketerror);

    void intSig(/*QTcpSocket:: connsig*/);

public slots:
    void readyRead();

    void disconnected();

    void intSlo();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
};




#endif // NETWORKTHREAD_H
