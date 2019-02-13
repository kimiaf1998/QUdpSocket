#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "udpsocket.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    UDPSocket *send_socket;
    ~MainWindow();

private slots:
    void on_send_btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
