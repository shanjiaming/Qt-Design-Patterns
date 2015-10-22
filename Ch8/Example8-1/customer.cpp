#include "customer.h"

Customer::Customer(char* name) {
 QObject:: setObjectName(name);
}
QTextStream& operator<< (QTextStream& os, const Customer& c) {
    os << c.toString();
    return os;
}


