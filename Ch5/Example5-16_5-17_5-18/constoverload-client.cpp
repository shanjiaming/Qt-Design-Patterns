#include "constoverload.h"
#include <iostream>

int main( ) {
    using namespace std;
    Point3 pt1(1.2, 3.4, 5.6);
    const Point3 pt2(7.8, 9.1, 6.4);
    double d ;
    d = pt2[2];    /* __________ */
    cout << d << endl;
    d = pt1[0];    /* __________ */
    cout << d << endl;
    d = pt1[3];    /* __________ */
    cout << d << endl;
    pt1[2] = 8.7;  /* __________ */
    cout << pt1 << endl;
   //  pt2[2] = 'd';
    cout << pt2 << endl;
    return 0;
}
/*The fact that the two function bodies are identical is worth pondering. If index is
in range, each function returns m_Coord[index] . So what is the difference between
them? It is important to understand that the non- const version of this operator behaves
very much like the function maxi() in Example 5.15 .*/
