QT += core
QT -= gui

CONFIG += c++11

TARGET = OnlineStore
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Repository/database.cpp \
    ServiceLayer/servicelayer.cpp

HEADERS += \
    Repository/database.h \
    ServiceLayer/servicelayer.h
