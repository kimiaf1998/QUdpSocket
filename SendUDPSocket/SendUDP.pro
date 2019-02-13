#-------------------------------------------------
#
# Project created by QtCreator 2018-08-12T06:37:01
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SendUDP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    udpsocket.cpp

HEADERS  += mainwindow.h \
    udpsocket.h

FORMS    += mainwindow.ui

LIBS += `pkg-config opencv --libs`
