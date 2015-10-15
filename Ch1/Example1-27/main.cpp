#include <QTextStream>
int main() {
QTextStream cout(stdout);
int x = 4;
int* px = 0 ; //Type modifier
/*
Zero ( 0 ), often represented by the macro NULL in C programs, is a special value that
can be legally assigned to a pointer, usually when it is initialized or after it has been
deleted. 0 is not the address of an object. A pointer that stores the value 0 is called a
null pointer . Stroustrup recommends the use of 0 rather than the macro NULL in C++
programs.
*/
px = &x;
cout << "x = " << x
<< " *px = " << *px //Unary dereference operator
<< " px = " << px
<< " &px = " << &px << endl;
x = x + 1;
cout << "x = " << x
<< " *px = " << *px
<< " px = " << px << endl;
*px = *px + 1;
cout << "x = " << x
<< " *px = " << *px
<< " px = " << px << endl;
return 0;
}
