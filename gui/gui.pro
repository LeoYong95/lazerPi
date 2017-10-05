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
    helper.cpp \
    widget.cpp

HEADERS  += \
    lazerpi.h \
    helper.h \
    widget.h \
    ui_mainwindow.h

FORMS    += mainwindow.ui

LIBS += -lglut -lGLU
