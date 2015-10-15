#include <QTextStream>
#include "..\Example2-5\Example2-5.h"
//LIBS += ..\build-Example2-4-Desktop_Qt_5_5_0_MinGW_32bit-Debug\debug\main.o
int main() {
const int DASHES = 30;
QTextStream cout(stdout);
{ //Nested scope, inner block.
int i;
for (i = 0; i < DASHES; ++i)
cout << "=";
cout << endl;
}
//cout << "i = " << i << endl; //Error: i no longer exists, so it is not visible in this scope.
Fraction f1, f2;
f1.set(3, 4);
f2.set(11,12); //Set through a member function.
//f2.m_Numerator = 12; //Error, m_Numerator is visible but not accessible.
cout << "The first fraction is: " << f1.toString() << endl;
cout << "\nThe second fraction, expressed as a double is: "
<< f2.toDouble() << endl;
return 0;
}

/*The relationship between struct and class in C++ can now be clearly described.
Stroustrup defines a struct to be a class whose members are by default public , so
that
struct T { ...
is equivalent to:
class T {public: ...
In particular, a struct in C++ can have member functions and data. C++ programmers
tend to prefer using class instead of struct for most purposes, perhaps because
of its bias in favor of private access. struct seems to be used mostly for applications in
which data items need to be grouped together but member functions are not needed.
*/
/*
Encapsulation is the first conceptual step in object-oriented programming. It involves
• Packaging data with the functions that can operate on that data in well-named
classes
• Providing clearly named and well-documented public functions that enable
users of the class to do whatever needs to be done with objects of this class
• Hiding implementation details
The set of public function prototypes in a class is called its public interface . The
set of non- public class members, together with the member function definitions, is
called its implementation .
One immediate advantage of encapsulation is that it permits the programmer to
use a consistent naming scheme for the members of classes. For example, there are
many different classes for which it might make sense to have a data member that contains
the unit cost of the particular instance or, as previously mentioned, a member
function named toString() . Because class member names are not visible outside the
class scope, you can safely adopt the convention of using the names m_unitCost and
toString() in every class that needs such members.
*/
