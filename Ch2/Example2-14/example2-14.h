#ifndef EXAMPLE214_H
#define EXAMPLE214_H

class Chicken; //Forward class declaration.
class Egg {
public:
Chicken* getParent(); //Okay in declarations if they are pointers.
};
#endif // EXAMPLE214_H

/*A forward class declaration enables you to refer to a symbol without having its full
definition available. It is an implicit promise to the compiler that the definition of the
class will be included when it is needed. Classes that are declared but not defined can
only be used as types for pointers or references, as long as they are not dereferenced in
the file.*/
