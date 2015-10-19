// Inline functions vs macros

#include <iostream>
#define  BADABS(X)   (((X) < 0)? -(X) : X)
#define  BADSQR(X) (X * X)
#define  BADCUBE(X) (X) * (X) * (X)

using namespace std;

inline double square(double x) {
    return x * x ;
}

inline double cube(double x) {
    return x * x * x;
}

inline int absval(int n) {
    return (n >= 0) ? n : -n;
}

int main() {
    cout << "Comparing inline and #define\n" ;
    double  t = 30.0;
    int i = 8, j = 8, k = 8, n = 8;
    cout << "\nBADSQR(t + 8) = " << BADSQR(t + 8)
            << "\nsquare(t + 8) = " << square(t + 8)
            << "\nBADCUBE(++i) = " << BADCUBE(++i)
            << "\ni = " << i
            << "\ncube(++j) = " << cube(++j)
            << "\nj = " << j
            << "\nBADABS(++k) = " << BADABS(++k)
            << "\nk = " << k
            << "\nabsval(++n) = " << absval(++n)
            << "\nn = " << n << endl;
}

/*In general, code substitution macros should be avoided. They are regarded as evil by
most serious C++ programmers. Preprocessor macros are used mostly for the
following:
1. #ifndef/#define/#endif wrapping around header files to avoid multiple
inclusion
2. #ifdef/#else/#endif to conditionally compile some parts of code but not
others
3. __FILE__ and __LINE__ macros for debugging and profiling
As a rule, inline functions should be used instead of macros for code substitutions.
The exce pti on t o t his r ul e is t he use of Qt macr os t hat i nsert code i nt o pr ogra ms t hat
use certain Qt classes. It is easy to see why some C++ experts look suspiciously at Qt’s
use of macros.*/
