#ifndef EXAMPLE212_H
#define EXAMPLE212_H
//#include "chicken.h"//Circular dependencies.
#include "../Example2-13/example2-13.h"
class Egg {
public:
Chicken* getParent();
};

#endif // EXAMPLE212_H

/*The preprocessor does not permit circular dependencies such as these. In this example,
neither header file needed to include the other. In each case, doing so created an
unnecessarily strong dependency between header files.
Under the right conditions, C++ permits you to use a forward class declaration
instead of including a particular header.*/
