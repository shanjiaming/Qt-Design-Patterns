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
//Read
cout << "Read data from the file - watch for errors." << endl;
string newstr;
ifstream inf;//An input file stream
inf.open("mydata");

inf.open("mydata");
if(inf) {
while (not inf.eof()) {
getline(inf, newstr);
cout << newstr << endl;
}
inf.close();
}
return 0;

}
