#-------------------------------------------------
#
# Project created by QtCreator 2016-09-14T22:18:34
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FAKKIT
TEMPLATE = app


SOURCES += main.cpp\
        fak.cpp \
    inventorypage.cpp \
    recipepage.cpp \
    viewpage.cpp \
    shoppingpage1.cpp \
    shoppingpagesaved.cpp

HEADERS  += fak.h \
    inventorypage.h \
    recipepage.h \
    viewpage.h \
    shoppingpage1.h \
    shoppingpagesaved.h

FORMS    += fak.ui \
    inventorypage.ui \
    recipepage.ui \
    viewpage.ui \
    shoppingpage1.ui \
    shoppingpagesaved.ui

DISTFILES += \
    RecipeLookUpPython.py

RESOURCES += \
    insidefridge.qrc \
    dbfile.qrc \
    buttonpics.qrc
