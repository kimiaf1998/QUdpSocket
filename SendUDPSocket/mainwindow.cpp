#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    send_socket = new UDPSocket();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_send_btn_clicked()
{
    send_socket->setIP(ui->IP_Number->toPlainText().toStdString());

    if(send_socket->writeData(ui->Send_Data->toPlainText().toStdString()))
        cout<<"write succefully";
}
