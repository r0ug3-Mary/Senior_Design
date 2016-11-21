#-------------------------------------------------
#
# Project created by QtCreator 2016-09-14T22:18:34
#
#-------------------------------------------------

QT       += core
QT       += core gui widgets
QT       += sql
QT       += network
QT       += svg
QTPLUGIN += qtvirtualkeyboardplugin
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FAKKIT
TEMPLATE = app


SOURCES += main.cpp\
        fak.cpp \
    inventorypage.cpp \
    recipepage.cpp \
    viewpage.cpp \
    httprequestworker.cpp \
    keyboard/keyboard.cpp \
    shoppingpage1.cpp \
    shoppingpagesaved.cpp \
    server.cpp \
    networkthread.cpp \
    recentpage.cpp

HEADERS  += fak.h \
    inventorypage.h \
    recipepage.h \
    viewpage.h \
    httprequestworker.h \
    keyboard/keyboard.h \
    keyboard/ui_keyboard.h \
    shoppingpage1.h \
    shoppingpagesaved.h \
    dbmanager.h \
    server.h \
    networkthread.h \
    recentpage.h

FORMS    += fak.ui \
    recipepage.ui \
    viewpage.ui \
    keyboard/keyboard.ui \
    shoppingpage1.ui \
    shoppingpagesaved.ui \
    inventorypage.ui \
    recentpage.ui

DISTFILES += \
    RecipeLookUpPython.py \
    pics/dblarrow.png \
    pics/emptybutton.png \
    pics/highbutton.png \
    pics/lowbutton.png \
    pics/next2.png \
    pics/removebutton.png

RESOURCES += \
    insidefridge.qrc \
    dbfile.qrc

#install
target.path = /home/root
INSTALLS += target
