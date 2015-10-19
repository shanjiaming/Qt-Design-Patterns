//start id="student"
#include <QTextStream>
#include "student.h"

Student::Student(QString nm, long id, QString major, int year)
        : m_Name(nm), m_Major(major), m_StudentId(id), m_Year(year) {}


QString Student::getClassName() const {
    return "Student";
}

QString Student::toString() const {
    QString retval;
    QTextStream os(&retval);                /* Write to the
       stream and return its string. */
    os << "[" << getClassName() << "]"
         << " name: " << m_Name
         << "; Id: " << m_StudentId
         << "; Year: " << yearStr()
         << "; \nMajor: " << m_Major  ;
    return retval;
}
//end

QString Student::yearStr() const {
    switch(m_Year) {
    case 1:
        return "fresh";
    case 2:
        return "soph";
    case 3:
        return "junior";
    case 4:
        return "senior";
    case 5:
        return "graduate student";
    case 6:
        return "gradual student";
    case 7:
        return "oldtimer";
    case 8:
        return "relic";
    }
    return "unknown";
}

//start id="undergrad"
Undergrad::Undergrad(QString name, long id, QString major,
      int year, int sat)
: Student(name, id, major, year), m_SAT(sat)  /* The base class object is treated as a subobject of the derived object.
    Class members and base classes both must be initialized in an order determined by the order that they appear in the class definition. */
   { }


/*Because each Undergrad is a Student , whenever you create an Undergrad object, you
must also create and initialize a Student . Furthermore, you must call a Student constructor
to initialize the Student part of any derived object.
In the member initializers of a constructor, you can treat the base class name as an
implicit member of the derived class.
• It gets initialized first, before the initialization of the derived class members.
• If you do not specify how the base class is initialized, its default constructor is
called.
• If there is no base class default constructor, the compiler reports an error.*/

QString Undergrad::getClassName() const {
    return "Undergrad";
}

QString Undergrad::toString() const {
    QString result;
    QTextStream os(&result);
    os <<  Student::toString()                /* Call the base class version. */
       << "  [SAT: "                          /* Add items that are specific to Undergrad. */
       << m_SAT
       << " ]\n";
    return result;
}
/*Inside both derived class versions of toString() , before the derived class attributes are
handled, we explicitly call Student::toString() , which handles the ( private ) base
class attributes. Each derived class version of toString() extends the functionality of
Student::toString() .
It is worth repeating that, because most of the data members of Student are private ,
you need a nonprivate base class function (e.g. toString() ) to give the derived class
access to the private base class data members. A derived class object cannot directly
access the private members of Student even though it contains those members. This
arrangement definitely takes some getting used to!*/


//end

//start id="grad"
GradStudent::
GradStudent(QString nm, long id, QString major, int yr,
                   Support support) :Student(nm, id, major, yr),
            m_Support(support) { }

QString GradStudent::toString() const {       /* Another QString style. */
   return QString("%1%2%3 ]\n")
       .arg(Student::toString())              /* Call the base class version */
       .arg("  [Support: ")                   /* Then add items that are specific to GradStudent. */
       .arg(supportStr(m_Support));
}
//end

QString GradStudent::supportStr(Support sup) {
    switch(sup) {                             /* Use enumerators for case labels. */
    case ta:
        return "ta";
    case ra:
        return "ra";
    case fellowship:
        return "fellowship";
    case other:
        return "other";
    }
    return "unknown";
}
QString GradStudent::getClassName() const {
    return "GradStudent";
}

