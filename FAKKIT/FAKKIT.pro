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
<<<<<<< HEAD
    viewpage.cpp \
    shoppingpage1.cpp \
    shoppingpagesaved.cpp
=======
    shoppingpage.cpp \
    viewpage.cpp \
    reciperesultspage.cpp
>>>>>>> origin/Jorge

HEADERS  += fak.h \
    inventorypage.h \
    recipepage.h \
<<<<<<< HEAD
    viewpage.h \
    shoppingpage1.h \
    shoppingpagesaved.h
=======
    shoppingpage.h \
    viewpage.h \
    reciperesultspage.h
>>>>>>> origin/Jorge

FORMS    += fak.ui \
    inventorypage.ui \
    recipepage.ui \
<<<<<<< HEAD
    viewpage.ui \
    shoppingpage1.ui \
    shoppingpagesaved.ui
=======
    shoppingpage.ui \
    viewpage.ui \
    reciperesultspage.ui
>>>>>>> origin/Jorge

DISTFILES += \
    RecipeLookUpPython.py

RESOURCES += \
    insidefridge.qrc \
    dbfile.qrc \
    buttonpics.qrc
