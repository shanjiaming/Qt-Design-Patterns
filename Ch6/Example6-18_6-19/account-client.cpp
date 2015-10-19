#include  "account.h"
#include  <QTextStream>

int main() {
    InsecureAccount acct(12345, 321.98, "Luke Skywalker");
    acct.deposit(6.23);             /*  Error! No matching function -
           hidden by deposit(double, int). */
    acct.m_Balance += 6.23;         /* Error! Member is protected,
         inaccessible. */
    acct.Account::deposit(6.23);    /* Hidden does not mean
        inaccessible. You can still access hidden public members
        via scope resolution. */
    // ... more client code
    return 0;
}


/*
• When two or more versions of a function foo exist in the same scope (with
different signatures), we say that foo has been overloaded .
• When a virtual function from the base class also exists in the derived class,
with the same signature and return type , we say that the derived version overrides
the base class version.
*/




/*

A member function of a derived class with the same name as a function in the base class
hides all functions in the base class with that name. In such a case
• Only the derived class function can be called directly.
• The class scope resolution operator :: must be used to call hidden base functions
explicitly.

*/
