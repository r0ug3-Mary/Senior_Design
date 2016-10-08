#-------------------------------------------------
#
# Project created by QtCreator 2016-09-14T22:18:34
#
#-------------------------------------------------

QT       += core
QT       += core gui
QT       += sql
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FAKKIT
TEMPLATE = app


SOURCES += main.cpp\
        fak.cpp \
    inventorypage.cpp \
    recipepage.cpp \
    shoppingpage.cpp \
    viewpage.cpp \
    lookuppage.cpp \
    httprequestworker.cpp

HEADERS  += fak.h \
    inventorypage.h \
    recipepage.h \
    shoppingpage.h \
    viewpage.h \
    lookuppage.h \
    httprequestworker.h

FORMS    += fak.ui \
    inventorypage.ui \
    recipepage.ui \
    shoppingpage.ui \
    viewpage.ui \
    lookuppage.ui

DISTFILES += \
    RecipeLookUpPython.py

RESOURCES += \
    insidefridge.qrc \
    dbfile.qrc
