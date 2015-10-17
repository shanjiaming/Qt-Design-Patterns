#ifndef EXAMPLE29_H
#define EXAMPLE29_H
class Thing {
public:
Thing(int a, int b);
~Thing();
void display() const ;
static void showCount();/*A class member function that does not in any way access the non- static data
members of the class can (and should) be declared static.*/
private:
int m_First, m_Second;
static int s_Count;
};

#endif // EXAMPLE29_H

