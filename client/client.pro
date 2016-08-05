#-------------------------------------------------
#
# Project created by QtCreator 2014-06-21T03:14:13
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app

target.path=/mnt/sdcard
INSTALLS += target

SOURCES += main.cpp\
        client.cpp \
    dialog.cpp

HEADERS  += client.h \
    dialog.h

FORMS    += client.ui \
    dialog.ui



















