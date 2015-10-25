#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>
#include <QDate>
class Product {
 public:
    void setName(QString s){m_name=s;}

    void setDescription(QString s){m_description=s;}
    void setDateAdded(QDate d){m_date=d;}
    void setPrice(double d){m_price=d;}
    QString name(){return m_name;}
    double price(){return m_price;}
    QDate dateAdded(){return m_date;}
     QString description(){return m_description;}
private:
    QString m_name;
    double m_price;
    QString m_description;
    QDate m_date;
};
#endif // PRODUCT_H

