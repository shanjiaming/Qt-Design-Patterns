#include "inputform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InputForm inputform;
    inputform.show();

    return a.exec();
}
