#include "..\Example2-16\fraction.h"
#include <assert.h>

//start
int Fraction::s_assigns = 0;     /* Static member definitions. */
int Fraction::s_copies = 0;
int Fraction::s_ctors = 0;

Fraction::Fraction(const Fraction& other)
   :  m_Numer(other.m_Numer), m_Denom(other.m_Denom) {
   ++s_copies;
}

Fraction& Fraction::operator=(const Fraction& other) {
    if (this != &other) {        /* operator=() should always do nothing in the case of self-assignment. */
        m_Numer = other.m_Numer;
        m_Denom = other.m_Denom;
        ++s_assigns;
    }
    return *this;                /* operator=() should always return *this,
    to allow for chaining i.e. a=b=c. */
}
//end

Fraction::Fraction(int n, int d) : m_Numer(n), m_Denom(d) {
   assert(m_Denom != 0);
   ++s_ctors;
}

Fraction Fraction::multiply(Fraction f2) {
   return Fraction (m_Numer*f2.m_Numer, m_Denom*f2.m_Denom);
}

QString Fraction::report() {
   return QString(" [assigns: %1 copies: %2 ctors: %3] ")
        .arg(s_assigns).arg(s_copies).arg(s_ctors);
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
