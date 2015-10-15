#The first line, TEMPLATE = app , indicates that qmake should start with a templated
#Makefile suited for building applications. If this project file were for a library, you
#would see TEMPLATE = lib to indicate that a Makefile library template should be used
#instead. A third possibility is that you might have your source code distributed among
#several subdirectories, each having its own project file. In such a case you might see
#TEMPLATE = subdirs in the project file located in the parent directory, which would
#cause a Makefile to be produced in the parent directory and in each subdirectory.
TEMPLATE = app
#The second line includes the optional common project settings from Example 1.6 .
include (../../common.pri)
#Finally, the source file is listed in SOURCES .
SOURCES += fac1.cpp
