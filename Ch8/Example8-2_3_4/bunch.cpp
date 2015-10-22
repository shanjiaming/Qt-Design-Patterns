#include <QTextStream>
#include <QDebug>
#include "person.h"
#include <QDebug>

static QTextStream cout(stdout);
void showTree(QObject* theparent);
//start
void growBunch() {
    qDebug() << "First we create a bunch of objects." << endl;
    QObject bunch;
    bunch.setObjectName("A Stack Object");  /* A local stack object - not a pointer */
    /* other objects are created on the heap */
    Person* mike = new Person("Mike", &bunch);
    Person* carol = new Person("Carol", &bunch);
    new Person("Greg", mike);               /* We do not need
             to keep pointers to children, because we can
             reach them via object navigation. */
    new Person("Peter", mike);
    new Person("Bobby", mike);
    new Person("Marcia", carol);
    new Person("Jan", carol);
    new Person("Cindy", carol);

    /*Generally speaking, QObjects without a parent should be defined on the program stack,
and those with a parent should be dynamically created on the heap. This helps to guarantee that
correct destruction can take place: An object on the stack, which has no parent, will be destroyed
when its scope is eliminated (e.g., when the function in which it was defined returns, or when the
flow of control leaves the block in which it was defined). Then, prior to its destruction, the (stack)
object destroys its (heap) children.*/

    new Person("Alice");                    /* Alice has no parent - memory leak? */



    qDebug() << "\nDisplay the list using QObject::dumpObjectTree()"
             << endl;
    bunch.dumpObjectTree();                 /* dumpObjectTree() output will appear on the
			       screen only if the Qt library has been
			       compiled with the debugging option turned on.*/
    cout << "\nReady to return from growBunch() -"
         << " Destroy all local stack objects." << endl;
    showTree(&bunch);

}

void showTree(QObject* theparent){

    QList<QObject*> list=theparent->findChildren<QObject*>();
    if (!list.isEmpty()){
    foreach (QObject* current, list) {
    cout << "Member: "<<current->objectName()<<" - Parent: "
           << current->parent()->objectName()<<endl;
    }
    }



}


int main(int , char**) {
   growBunch();
   cout << "We have now returned from growBunch()."
        <<  "\nWhat happened to Alice?" << endl;
   return 0;
}
//end
