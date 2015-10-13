#include <QCoreApplication>
#include <QtGui>
#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
int main (int argc, char* argv[]) {//Start of function main which returns int.
QApplication app(argc, argv);//Start of every Qt GUI application.
QTextStream cout(stdout);//Create a QTextStream to standard output.
// Declarations of variables
int answer = 0;//Must be defined outside the do loop because it is used in the condition outside the do block.
do {
// local variables to the loop:
int factArg = 0;
int fact(1);
factArg = QInputDialog::getInt(0, "Factorial Calculator", //Pop up dialog, wait for user to enter an integer, return it.
"Factorial of:", 1);
cout << "User entered: " << factArg << endl;
int i=2;
while (i <= factArg) {
fact = fact * i;
++i;
}
QString response = QString("The factorial of %1 is %2.\n%3") //Each %n is replaced with an arg() value.
.arg(factArg).arg(fact)
.arg("Do you want to compute another factorial?");//Long statements can continue on multiple lines, as long as they are broken on token boundaries.
answer = QMessageBox::question(0, "Play again?", response,
QMessageBox::Yes | QMessageBox::No);//Bitwise or of two values.
} while (answer == QMessageBox::Yes);
return EXIT_SUCCESS;
}
/*This program uses the Qt types (classes) listed next.
• QApplication —A single object that needs to exist in Qt GUI applications.
• QInputDialog —For asking questions of the user.
• QMessageBox —For sending responses back to the user.
• QString —A unicode string class. This example uses the powerful QString
function arg() , which enables you to format parameterized values (%1, %2,
etc.) into the string.
• QTextStream —For streaming to/from text files. In this example, we defined a
variable called cout that goes to the same place (stdout) as the iostream cout
from the C++ standard library. If you intend to get user input from dialogs and
other widgets, there is no need for cin anymore.*/
