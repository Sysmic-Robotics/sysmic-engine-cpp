#ifndef VISION_H
#define VISION_H
#include <QUdpSocket>
#include <QObject>
#include "../external/proto_compiled/messages_robocup_ssl_wrapper.pb.h"

class Vision: public QObject{
    Q_OBJECT

    public:
        explicit Vision(QObject *parent);
        void initSocket();
        int port_grsim = 10020;
        void processPendingDatagrams();
        SSL_WrapperPacket packet;

    private:
        QUdpSocket *socket=nullptr;
};

int suma(int a, int b);

#endif