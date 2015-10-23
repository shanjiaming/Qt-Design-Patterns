#include "counter.h"
#include<iostream>
//http://woboq.com/blog/how-qt-signals-slots-work.html
int main()
{

    Counter a, b;
        QObject::connect(&a, SIGNAL(valueChanged(int)),
                         &b, SLOT(setValue(int)));

        a.setValue(12);     // a.value() == 12, b.value() == 12
        std::cout<<"After a.SetValue(12), the values are:"<<std::endl;
        std::cout<<"Value a: "<<a.value()<<std::endl;
        std::cout<<"Value b: "<<b.value()<<std::endl;

        b.setValue(48);     // a.value() == 12, b.value() == 48

        std::cout<<"After a.SetValue(48), the values are:"<<std::endl;
        std::cout<<"Value a: "<<a.value()<<std::endl;
        std::cout<<"Value b: "<<b.value()<<std::endl;

        return 0;

}
