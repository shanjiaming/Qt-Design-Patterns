#ifndef EXAMPLE25_H
#define EXAMPLE25_H

#include <QString>
class Fraction {
public://A public member can be accessed (using an object of the class) 2 anywhere in a program that #includes the class definition file.
void set(int numerator, int denominator);
double toDouble() const;
QString toString() const;
private://A private member is only accessible by member functions of its own class. 4
int m_Numerator;
int m_Denominator;
};
//A protected member can be accessed inside the definition of a member function of its own class, or a member function of a derived class.
#endif // EXAMPLE25_H

