#-------------------------------------------------
#
# Project created by QtCreator 2016-12-20T19:01:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BattleShip
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamechild.cpp

HEADERS  += mainwindow.h \
    gamechild.h

FORMS    += mainwindow.ui \
    gamechild.ui

RESOURCES += \
    res.qrc
