#include <iostream>
#include <sstream>
#include <fstream>
int main() {
using namespace std;
ostringstream strbuf;
int lucky = 7;
float pi=3.14;
double e=2.71;
cout << "An in-memory stream" << endl;
strbuf << "luckynumber: " << lucky << endl
<< "pi: " << pi << endl
<< "e: " << e << endl;
string strval = strbuf.str();// Convert the stringstream to a string.
cout << strval;
ofstream outf;//An output file stream.
outf.open("mydata");
outf << strval ;//Creates (or overwrites) a disk file for output.
outf.close();
}
