#-------------------------------------------------
#
# Project created by QtCreator 2014-06-21T03:14:53
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp \
    dialog.cpp

HEADERS  += server.h \
    dialog.h

FORMS    += server.ui \
    dialog.ui



