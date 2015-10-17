#include <QTextStream>
#include "..\Example2-16\fraction.h"

int main() {
    QTextStream cout(stdout);
    Fraction twothirds(2,3);                /* Using 2-arg constructor. */
    Fraction threequarters(3,4);
    Fraction acopy(twothirds);              /* Using copy constructor. */
    Fraction f4 = threequarters;            /* Also using copy constructor. */
    cout << "after declarations - " << Fraction::report();
    f4 = twothirds;                         /* Assignment. */
    cout << "\nbefore multiply - " << Fraction::report();
    f4 = twothirds.multiply(threequarters); /* Several objects are created here. */
    cout << "\nafter multiply - " << Fraction::report() << endl;
    return 0;
}
/*
 * Compiler-Supplied Versions
It is important to know that the compiler will supply default versions of the copy constructor
or the copy assignment operator if one or both are missing from the class definition. The
compiler-supplied default versions are public and have the following prototypes for a class T :
T::T(const T& other);
T& T::operator=(const T& other);
Both of these default versions make an exact copy of the value of each data member. For a
class whose data members are all simple or value types, such as int , double , QString , etc.,
the compiler-supplied versions are probably okay. But if a class has pointer or object 10 members, it
is necessary to write both copy constructors and copy assignment operators that are specifically designed
for that class. You will see later 11 that it is sometimes necessary to prevent copies from being made
of objects of certain classes. In such a case, both the copy constructor and the copy assignment
operator must be declared private and given appropriate noncopying definitions to prevent the
compiler from supplying public versions.
*/
