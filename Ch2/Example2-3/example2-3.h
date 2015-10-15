#ifndef EXAMPLE23_H/*Header files are included in other files by the preprocessor. To prevent a header file
from accidentally being included more than once in any compiled file, wrap it with #ifndef-#define ... #endif preprocessor macros*/
#define EXAMPLE23_H
#include <QString>
class Fraction {
public:
void set(int numerator, int denominator);
double toDouble() const;
QString toString() const;
private:
int m_Numerator;
int m_Denominator;
};
#endif // EXAMPLE23_H

