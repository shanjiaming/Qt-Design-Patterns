#include <iostream>
using namespace std;
int main() {
int* ip = 0; //Null pointer.
delete ip; //Has no effect at all—ip is still null.
if(ip) cout << "non-null" << endl;
else cout << "null" << endl;
/*Null pointers are actually quite useful in programs. Even though it is a fatal runtime
error to attempt to dereference a null pointer, it is perfectly legal to check to see if a
pointer is null. For example, it is common practice for a function to search for an item
in a container of pointers and, if the search is successful, return a pointer to that item.
If the search is not successful, it still must return a pointer. In that case, returning a null
pointer is a good choice. Of course, you must be careful to check the return value of
such a function before dereferencing it to make sure it is not null. After a pointer has
been deleted, assignment is the only legal operation that can be performed with it. We
recommend immediately assigning the value 0 to a deleted pointer if no other choice
is feasible.*/
ip = new int; //Allocate space for an int.
int* jp = new int(13); //Allocate and initialize.
//[...]
delete ip; //Without this, we have a memory leak.
delete jp;
}
