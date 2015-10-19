#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>
#include <QDebug>
/*Three special kinds of member functions are never inherited:
1. Copy constructors
2. Copy assignment operators
3. Destructors*/

//start id=account
class Account {
 public:
    /*Example 6.20 defines a class with a single constructor that requires three arguments,
so Account has no default constructor (i.e., the compiler will not generate one).*/
    Account(unsigned acctNum, double balance, QString owner);
    /*We declare the base class destructor virtual to ensure that the appropriate derived
class destructor gets called when it is time to destroy a derived object accessed through
a base class pointer.*/
    virtual ~Account(){
      qDebug() << "Closing Acct - sending e-mail " 
               << "to primary acctholder:" << m_Owner; }
    virtual QString getName() const {return m_Owner;}
    // other virtual functions
 private:
    unsigned  m_AcctNum;
    double    m_Balance;
    QString    m_Owner;
};
/*We did not define a copy constructor, which means the compiler will generate one
for us. Therefore, this class can be instantiated in exactly two ways: (1) by calling the
three-parameter constructor or (2) by invoking the compiler generated copy constructor
and supplying an Account object argument.*/
//end
//start id=jointaccount
class JointAccount : public Account {
 public:
  JointAccount (unsigned acctNum, double balance, 
                QString owner, QString jowner);
  JointAccount(const Account & acct, QString jowner);
  ~JointAccount() {
     qDebug() << "Closing Joint Acct - sending e-mail "
              << "to joint acctholder:" << m_JointOwner; }
  QString getName() const { 
    return QString("%1 and %2").arg(Account::getName())
                   .arg(m_JointOwner);
  }
  // other overrides
 private:
  QString m_JointOwner;
};
//end
#endif        //  #ifndef ACCOUNT_H

