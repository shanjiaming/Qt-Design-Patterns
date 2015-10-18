CONFIG += debug console
DEFINES += QT_NOTHREAD_DEBUG
CONFIG -= moc
#This variable specifies the #include directories which should be searched when compiling the project. Use ';' or a space as the directory separator.
INCLUDEPATH += ../Example3-1
#This variable contains the list of all directories to look in to resolve dependencies. This will be used when crawling through included files.
DEPENDPATH += ../Example3-2
# Input
SOURCES += qtio-demo.cpp
#The path should be relative to the directory where you find the .pro
SOURCES +=../Example3-2/qstd.cpp
HEADERS += qstd.h
