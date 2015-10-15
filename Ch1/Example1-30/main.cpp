#include < QTextStream>
int main() {
QTextStream cout(stdout);
int m1(11), m2(13);
const int* n1(&m1);
int* const n2(&m2);
// First snapshot
cout << "n1 = " << n1 << '\t' << *n1 << '\n'
<< "n2 = " << n2 << '\t' << *n2 << endl;
n1 = &m2;
//*n1 = 15; //Error: assignment of read-only location
m1 = 17; //m2 is an ordinary int variable; okay to assign
//n2 = &m1; //Error: assignment of read-only variable n2
*n2 = 16; //Okay to change target
// Second snapshot
cout << "n1 = " << n1 << '\t' << *n1 << '\n'
     << "n2 = " << n2 << '\t' << *n2 << endl;
     return 0;
     }

/*An lvalue is an expression that refers to an object. Examples of lvalues are
variables, array cells, and dereferenced pointers. In essence, an lvalue is anything with a
memory address that can be given a name. By contrast, temporary or constant expressions
such as i+1 or 3 are not lvalues.
*/
/*In C++, a reference provides a mechanism for assigning an alternative name to
an lvalue. References are especially useful for avoiding making copies when copying
is costly or unnecessary, for example, when passing a large object as a parameter to a
function. A reference must be initialized when it is declared, and the initializer must
be an lvalue.
*/
/*volatile is another keyword that can modify variables and pointer definitions. It can be
used in the same places that const can be used. volatile can be thought of as almost the
opposite of const : It marks something that can be modified at any time, perhaps by another
program or another thread. It is a hint to the compiler that there should be no optimization
during access to it.
It can be used for variables, but more commonly, it is used for pointers. Like const , it can
be applied to the pointer or the addressed memory. To declare a regular pointer to volatile
memory, use this form:
volatile char* vcharptr;
To declare a volatile pointer to regular memory, use this form:
char* volatile vptrchar;
*/
