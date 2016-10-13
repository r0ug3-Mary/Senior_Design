#-------------------------------------------------
#
# Project created by QtCreator 2016-09-14T22:18:34
#
#-------------------------------------------------

QT       += core
QT       += core gui widgets
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
    httprequestworker.cpp \
    picturepage.cpp \
    keyboard/keyboard.cpp \
    shoppingpage1.cpp \
    shoppingpagesaved.cpp

HEADERS  += fak.h \
    inventorypage.h \
    recipepage.h \
    shoppingpage.h \
    viewpage.h \
    lookuppage.h \
    httprequestworker.h \
    picturepage.h \
    keyboard/keyboard.h \
    keyboard/ui_keyboard.h \
    shoppingpage1.h \
    shoppingpagesaved.h \
    dbmanager.h

FORMS    += fak.ui \
    inventorypage.ui \
    recipepage.ui \
    shoppingpage.ui \
    viewpage.ui \
    lookuppage.ui \
    picturepage.ui \
    keyboard/keyboard.ui \
    shoppingpage1.ui \
    shoppingpagesaved.ui

DISTFILES += \
    RecipeLookUpPython.py

RESOURCES += \
    insidefridge.qrc \
    dbfile.qrc
