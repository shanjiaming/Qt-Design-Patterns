#include <QTextStream>
int main() {
QTextStream cout(stdout);
double x(1.23), y(4.56), z(7.89) ;
int i(2), j(5), k(7);
x += y ;
z *= x ;
cout << "x = " << x << "\tz = " << z
<< "\nx - z = " << x - z << endl ;
cout << "k / i = " << k / i
<< "\tk % j = " << k % j << endl ;
cout << "i = " << i << "\tj = " << j << "\tk = " << k << endl;
cout << "++k / i = " << ++k / i << endl;
cout << "i = " << i << "\tj = " << j << "\tk = " << k << endl;
cout << "i * j-- = " << i * j-- << endl;
cout << "i = " << i << "\tj = " << j << "\tk = " << k << endl;
cout << "z / j = " << z / j << endl ; //In Example 1.23 , you can see that the result of a double divided by an int is a double .
}
