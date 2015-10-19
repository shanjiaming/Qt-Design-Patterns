#include <QTextStream>
#include "student.h"

static QTextStream cout(stdout);

void finish(Student* student) {
    cout << "\nThe following "
         << student->getClassName()
         << " has applied for graduation.\n "
         << student->toString() << "\n";
}

int main() {
    Undergrad us("Frodo Baggins", 5562, "Ring Theory", 4, 1220);
    GradStudent gs("Bilbo Baggins", 3029, "History", 6,
                    GradStudent::fellowship);
    cout << "Here is the data for the two students:\n";
    cout << gs.toString() << endl;
    cout << us.toString() << endl;
    cout << "\nHere is what happens when they finish their studies:\n";
    finish(&us);
    finish(&gs);
    return 0;
}

/*In the finish() function, the parameter, student , is a base class pointer. Calling
student->toString() invokes Student::toString() regardless of what kind of
object student points to. But, for example, if student points to a GradStudent , there
should be a mention of the fellowship in the output message. In addition, you should
see [GradStudent] in the toString() messages, and you do not.
It would be more appropriate to use runtime binding for indirect function calls to
determine which toString() is appropriate for each object.
Because of its C roots, C++ has a compiler that attempts to bind function invocations
at compile time, for performance reasons. With inheritance and base class pointers,
the compiler can have no way of knowing what type of object it is operating on. In
the absence of runtime checking, an inappropriate function can be called. C++ requires
the use of a special key word to enable runtime binding on function calls via pointers
and references. The keyword is virtual , and it enables polymorphism , which is
explained in the next section.*/
