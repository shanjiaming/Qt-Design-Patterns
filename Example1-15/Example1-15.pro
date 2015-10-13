#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T13:17:56
#
#-------------------------------------------------

QT       += core
QT       += gui
QT       += widgets


TARGET = Example1-15
CONFIG   += console
CONFIG   -= app_bundle

#The first line, TEMPLATE = app , indicates that qmake should start with a templated
#Makefile suited for building applications. If this project file were for a library, you
#would see TEMPLATE = lib to indicate that a Makefile library template should be used
#instead.
TEMPLATE = app

include (../common.pri)


SOURCES += main.cpp
