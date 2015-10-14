#include <QString>
#include <QTextStream>
#include <QChar>
#include <QDate>
int main() {
QTextStream cout(stdout);
int i=0;
char array1[34] = "This is a dreaded C array of char";
char array2[] = "if not for main, we could avoid it entirely.";
char* charp = array1;//Pointer to first element of array.
QString qstring = "This is a unicode QString. Much preferred." ;
Q_ASSERT (sizeof(i) == sizeof(int));
cout << " c type sizes: \n";
cout << "sizeof(char) = " << sizeof(char) << '\n';
cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << '\n';
cout << "sizeof(int) = " << sizeof(int) << '\n';
cout << "sizeof(long) = " << sizeof(long) << '\n';
cout << "sizeof(float) = " << sizeof(float) << '\n';
cout << "sizeof(double) = " << sizeof(double) << '\n';
cout << "sizeof(double*) = " << sizeof(double*) << '\n';
cout << "sizeof(array1) = " << sizeof(array1) << '\n';
cout << "sizeof(array2) = " << sizeof(array2) << '\n';
cout << "sizeof(char*) = " << sizeof(charp) << endl;
cout << " qt type sizes: \n";
cout << "sizeof( QString) = " << sizeof( QString) << endl;
cout << "sizeof(qint32) = " << sizeof (qint32) << "\n";//Guaranteed to be 32 bits on all platforms.
cout << "sizeof(qint64) = " << sizeof(qint64) << '\n'; //Guaranteed to be 64 bits on all platforms.
cout << "sizeof( QChar) = " << sizeof ( QChar) << endl; //Twice as big as a char
cout << "sizeof( QDate) = " << sizeof( QDate) << endl;
cout << "qstring.length() = " << qstring.length() << endl;//For # of bytes, be sure to take into account the size of QChar .
return 0;
}
