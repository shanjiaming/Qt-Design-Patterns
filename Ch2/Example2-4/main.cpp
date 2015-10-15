#include <QString>
#include "..\Example2-3\example2-3.h"
/*The definition of any class
member outside the class definition requires a scope resolution operator of the form
ClassName :: before its name. The scope resolution operator tells the compiler that the
scope of the class extends beyond the class definition and includes the code between
the symbol :: and the closing brace of the function definition.*/
void Fraction::set(int nn, int nd) {
m_Numerator = nn;
m_Denominator = nd;
}
double Fraction::toDouble() const {
return 1.0 * m_Numerator / m_Denominator;
}
QString Fraction::toString() const {
return QString("%1 / %2").arg(m_Numerator).arg(m_Denominator);
}

//In the project file.
//TEMPLATE = lib
