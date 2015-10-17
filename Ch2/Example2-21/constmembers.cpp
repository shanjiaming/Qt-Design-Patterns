#include <QTextStream>
#include <QString>

class Point {
  public:
    Point(int px, int py)
       : m_X(px), m_Y(py) {}

    void set(int nx, int ny) {      /* C version: _Point_set_int_int(Point* this, int nx, int ny). */
        m_X = nx;
        m_Y = ny;
    }
    QString toString() const {      /* C version: _Point_toString_string_const(const Point* this). */
       // m_X = 5;                  /* Error: this->m_X = 5, *this is const. */
        m_Count++;                  /* Okay, member is mutable. */
        return QString("[%1,%2]").arg(m_X).arg(m_Y);
    }
  private:
    int m_X, m_Y;
    mutable int m_Count;            /* mutable can be changed in a const method. */
};


int main() {
   QTextStream cout(stdout);
   Point p(1,1);
   const Point q(2,2);
   p.set(4,4);                      /* Okay to reassign p. */
   cout << p.toString() << endl;
   //q.set(4,4);                    /* Error! const object cannot call non-const methods. */
   return 0;
}

/*
good way to look at the way const modifies member functions is to realize that
each non- static member function has an implicit parameter, named this , which is a
pointer to the host object. When you declare a member function to be const , you are
telling the compiler that, as far as the function is concerned, this is a pointer to const.
*/
/*
In a real compiler, the mangled names for set and print would be compressed
significantly to save space and hence be less understandable to a human reader. Notice
that mutable members can be modified inside const member functions, but regular
data members cannot.
*/
