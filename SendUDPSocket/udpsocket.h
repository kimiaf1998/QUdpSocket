#ifndef UDPSOCKET_H
#define UDPSOCKET_H
#include <iostream>
#include <opencv2/opencv.hpp>
#include <QUdpSocket>
#define LOCAL_IP 172.16.3.60
using namespace std;
using namespace cv;

class UDPSocket
{
public:
    UDPSocket();


    string getIP() const;

    void setIP(const string &value);

    bool writeData(string data);

private:
    string IP; //receiver IP
    QUdpSocket * sendSocket ;
    int port;


};

#endif // UDPSOCKET_H
