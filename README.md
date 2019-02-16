# QUdpSocket

The most common way to use  QUdpSocket class is to bind to an address and port using bind(), then call writeDatagram() and readDatagram() to transfer data. We'll do exactly that in this tutorial.

First, we need to add network module to our project file, QUdpSocket.pro: 

    QT       += core
    QT       += network
    QT       -= gui

    TARGET = QUdpSocket
    CONFIG   += console
    CONFIG   -= app_bundle

    TEMPLATE = app


    SOURCES += main.cpp
    
# How to Use :


    In mainWinodw, I create an instance of UDPSocket class:

    UDPSocket send_socket;

    In the constructor, MyUDP::MyUDP(), a QUdpSocket will be created:

    socket = new QUdpSocket(this);

    Then, I bind it to an address and port:

    socket->bind(QHostAddress::LocalHost, 1234);

    In main(), we call MyUDP::HelloUDP(), and it actually sends data gram:

       sendSocket->writeDatagram(datagram,QHostAddress(QString(this->IP.c_str())),this->port);
      

    When the data comes in, I read that datagram in UDPSocket::readyRead():

    socket->readDatagram(buffer.data(), buffer.size(),
                             &sender;, &senderPort;);


