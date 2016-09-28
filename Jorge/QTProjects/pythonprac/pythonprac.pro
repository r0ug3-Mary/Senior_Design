#-------------------------------------------------
#
# Project created by QtCreator 2016-09-18T19:19:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pythonprac
TEMPLATE = app


SOURCES += main.cpp\
        pyprac.cpp \
    pythoncode.cpp

HEADERS  += pyprac.h \
    pythoncode.h

FORMS    += pyprac.ui \
    pythoncode.ui

DISTFILES += \
    py.py
