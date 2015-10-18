/*A reference parameter is simply a parameter that is an alias for something else. To
declare a parameter to be a reference, put the ampersand character (&) between the
type name and the parameter name.*/
/*Pass-by-reference syntax provides an alternative to pass-by-pointer. Under the covers,
it is implemented with pointers and the value is not copied. The main difference
between pass-by-pointer and pass-by-reference is that with a pointer you must dereference
it, whereas with a reference you can access it in same way you would access the
referred entity.*/
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    cout << "Inside the swap() function:\n"
         << "address of a: " << &a
         << "\taddress of b: " << &b
         << "\naddress of temp: " << &temp << endl;
    a = b;
    b = temp;
}


int main() {
    int n1 = 25;
    int n2 = 38;
    int n3 = 71;
    int n4 = 82;
    cout << "Initial values:\n"
         << "address of n1: " << &n1
         << "\taddress of n2: " << &n2
         << "\nvalue of n1: " << n1
         << "\t\t\tvalue of n2: " << n2
         << "\naddress of n3: " << &n3
         << "\taddress of n4: " << &n4
         << "\nvalue of n3: " << n3
         << "\t\t\tvalue of n4: " << n4
         << "\nMaking the first call to swap()" << endl;
    swap(n1,n2);
    cout << "After the first call to swap():\n"
         << "address of n1: " << &n1
         << "\taddress of n2: " << &n2
         << "\nvalue of n1: " << n1
         << "\t\t\tvalue of n2: " << n2
         << "\nMaking the second call to swap()" << endl;
    swap(n3,n4);
    cout << "After the second call to swap():\n"
         << "address of n3: " << &n3
         << "\taddress of n4: " << &n4
         << "\nvalue of n3: " << n3
         << "\tvalue of n4: " << n4 << endl;
    return 0;
}
/*
Pass-by-Pointer or Pass-by-Reference?
When you have a choice, it is generally preferable to use references instead of pointers
because this can reduce the number of places where a programmer can accidentally
corrupt memory. It is only when you need to manage objects (creation, destruction,
adding to a managed container) that you need to operate on pointers, and those routines can
usually be encapsulated as member functions.
*/
