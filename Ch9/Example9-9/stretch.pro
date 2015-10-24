include (../../common.pri)
QT +=widgets
TEMPLATE = app
LIBS += -lcards2 -LD:\GitHub\Qt-Design-Patterns\Ch9\build-cards2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\debug
INCLUDEPATH += D:\GitHub\Qt-Design-Patterns\Ch9\Example9-3_9-4_9-5

# Input
HEADERS += cardtable.h
SOURCES += stretch.cpp cardtable.cpp
