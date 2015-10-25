#include "productform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProductForm w;
    w.show();

    return a.exec();
}
