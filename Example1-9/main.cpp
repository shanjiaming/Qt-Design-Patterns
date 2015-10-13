/*Also defined in <iostream> are manipulators , such as flush and endl. Manipulators
are implicit calls to functions that can change the state of a stream object in various
ways. A manipulator can be added to
• An output stream to change the way the output data is formatted.
• An input stream to change the way the input data is interpreted.
*/
#include <iostream>
int main() {
using namespace std;
int num1(1234), num2(2345) ;
cout << oct << num2 << '\t'
<< hex << num2 << '\t'
<< dec << num2
<< endl;
cout << (num1 < num2) << endl;
cout << boolalpha
<< (num1 < num2)
<< endl;
double dub(1357);
cout << dub << '\t'
<< showpos << dub << '\t'
<< showpoint << dub
<< endl;
dub = 1234.5678;
cout << dub << '\t'
<< fixed << dub << '\t'
<< scientific << dub << '\n'
<< noshowpos << dub
<< endl;
}
