/*To define a function that uses the ellipsis, you need to include the cstdarg library,
which adds a set of macros for accessing the items in the argument list to the std
namespace.*/
#include <cstdarg>
#include <iostream>
using namespace std;
/*There must be at least one parameter other than the ellipsis in the parameter
list.*/
double mean(int n ...) {    /* First parameter is number of args.*/
    va_list ap;             /* Sequentially points to each unnamed arg. */
    double sum(0);
    int count(n);
    /*The macro va_start(ap, p) where p is the last-named parameter in the list, initializes ap so that it points to the
first of the unnamed arguments.*/
    va_start(ap, n);        /* Now, ap points to first unnamed arg. */
    for (int i = 0; i < count; ++i) {
        /*The macro va_arg(ap, typename) returns the argument that ap is pointing to and uses the typename to determine
        (i.e., with sizeof ) how large a step to take to find the next argument.*/
        sum += va_arg(ap, double);
    }

    /*The macro va_end(ap) must be called after all the unnamed arguments have been processed. It cleans up
the stack of unnamed arguments and ensures that the program will behave properly
after the function has terminated.*/
    va_end(ap);             /* Clean up before returning. */
    return sum / count;
}

int main() {
    cout << mean(4, 11.3, 22.5, 33.7, 44.9) << endl;
    cout << mean (5, 13.4, 22.5, 123.45, 421.33, 2525.353) << endl;
}
