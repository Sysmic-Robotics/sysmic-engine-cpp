#include "vision.hpp"

Vision::Vision(QObject *parent) : 
	QObject(parent) {
}

void Vision::initSocket(){
    socket = new QUdpSocket(this);
    bool result =  socket->bind(QHostAddress::LocalHost, this->port_grsim);
    if(result){
        qDebug() << "Socket PASS";
    }
	else{
        qDebug() << "Socket FAIL";
    }

    processPendingDatagrams();
    connect(socket, &QUdpSocket::readyRead, this, &Vision::processPendingDatagrams);
}

void Vision::processPendingDatagrams(){
    qDebug() << "in !";
    QHostAddress sender;
    quint16 port;
    while (socket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(socket->pendingDatagramSize());
        socket->readDatagram(datagram.data(),datagram.size(),&sender,&port);
        qDebug() <<"Message From :: " << sender.toString();
        qDebug() <<"Port From :: "<< port;
        qDebug() <<"Message :: " << datagram;
    }
}

int suma(int a, int b){
    return a + b;
}