#-------------------------------------------------
#
# Project created by QtCreator 2015-06-08T16:43:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proj_2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    results.cpp

HEADERS  += mainwindow.h \
    user.h \
    results.h

FORMS    += mainwindow.ui \
    results.ui

LIBS += -L"/home/baigoo365/Downloads/SFML-master/lib"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

INCLUDEPATH += "/home/baigoo365/Downloads/SFML-master/include"
DEPENDPATH += "/home/baigoo365/Downloads/SFML-master/include"

CONFIG += c++11
