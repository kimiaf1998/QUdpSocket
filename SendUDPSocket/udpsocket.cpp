#include "udpsocket.h"

UDPSocket::UDPSocket()
{

    this->port = 85100;
    sendSocket = new  QUdpSocket();

}
string UDPSocket::getIP() const
{
    return IP;
}
void UDPSocket::setIP(const string &value)
{
    IP = value;
}

bool UDPSocket::writeData(string data)
{
    QByteArray datagram ;
    datagram.append(data.c_str());
    int available_data_size = sendSocket->writeDatagram(datagram,QHostAddress(QString(this->IP.c_str())),this->port);
    qDebug()<<"available data  size :"<<available_data_size<<endl;
    return available_data_size > 0;
}



