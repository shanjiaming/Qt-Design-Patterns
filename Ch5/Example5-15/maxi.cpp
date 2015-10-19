#include <iostream>
using namespace std;

/** @return a reference to the smaller
    of the two arguments */
int& maxi(int& x, int& y) {

    return (x > y) ? x : y;
}

int main() {
    int a = 10, b = 20;
    maxi(a,b) = 5;      /* Assigns the value 5 to b.   */
    maxi(a,b) += 6;     /* Increases a by 6. a is now 16. */
    ++maxi(a, b) ;      /* Increments a by 1. */
    cout << a << '\t' << b << endl;
    return 0;
}
/*OUT
17      5
*/

/*Be careful that your function does not return a reference to a temporary (local) object. A
moment’s thought should make the reason for that restriction clear: When the function returns,
its local variables are destroyed.*/
