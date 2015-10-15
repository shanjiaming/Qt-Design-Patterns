#include <iostream>
#include "..\Example2-1\Example2-1.h"
void printFraction(Fraction f) {//Passing a struct by value could be expensive if it has large components.
std::cout << f.numer << "/" << f.denom << std::endl;
std::cout << " =? " << f.description << std::endl;
}
int main() {
Fraction f1;
f1.numer = 4;
f1.denom = 5;
f1.description = "four fifths";
Fraction f2 = {2, 3, "two thirds"}; //Member initialization.
f1.numer = f1.numer + 2; //Client code can change individual data members.
printFraction(f1);
printFraction(f2);
return 0;
}
