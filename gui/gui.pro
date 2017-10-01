#-------------------------------------------------
#
# Project created by QtCreator 2017-09-28T02:05:49
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app


SOURCES += main.cpp \
    lazerpi.cpp \
    glwidget.cpp

HEADERS  += \
    lazerpi.h \
    glwidget.h

FORMS    += mainwindow.ui
