#include <QTextStream>
#include <QCoreApplication>
#include <QStringList>
int main (int argc, char* argv[]) {
/*Most applications that employ Qt types should define an object of type
QCoreApplication or QApplication as early as possible in main().*/
QCoreApplication app(argc, argv);
QTextStream cout(stdout);
/*You can then access and process the commandline
arguments by using app to call the arguments() function. Using higher-level data
structures like these eliminates the need to work with char arrays, which reduces the
risk of memory corruption.*/
QStringList arglst = app.arguments();
cout << "argc = " << argc << endl;
for (int i=0; i<arglst.size(); ++i) {
cout << QString("argv#%1 is %2").arg(i).arg(arglst[i]) << endl;
}
int num = arglst[argc - 1].toInt();
cout << num * 2 << endl;
}
