#include "..\Example2-9\Example2-9.h"
#include <iostream>
int Thing::s_Count = 0; //Must initialize static member!
/*Each static data member must be initialized (defined) once outside the class definition,
preferably in the corresponding class implementation file.*/
//The exception to this rule is a static const int , which can be initialized in the class definition.
Thing::Thing(int a, int b)
: m_First(a), m_Second(b) {
++s_Count;
}
Thing::~Thing() {
--s_Count;
}
void Thing::display() const {
using namespace std;
cout << m_First << "$$" << m_Second;
}
void Thing::showCount() { //Static function.
using namespace std;
cout << "Count = " << s_Count << endl;
}
/*static class members must be declared static in (and only in) the class definition.*/
/*Notice that the term static does not appear in the definitions of s_Count or
showCount() . For the definition of s_Count , the keyword static would mean something quite
different: It would change the scope of the variable from global to file-scope (see Section 20.2 ).
For the function definition, it is simply redundant.*/
