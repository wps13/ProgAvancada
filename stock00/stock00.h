//stock00.h -- Stock class interface
#ifndef STOCK00_H
#define STOCK00_H

#include <string>

//Stock is a type that can be used to create new objetcs
class Stock{
    //only the class members can access
    //its the default option to access control
    //data member declarations
private:
    std::string company;
    long shares;
    double shares_val;
    double total_val;
    /* set_tot() is a inline function
     * because its definition is in the class declaration
     * to make this function available to other functions,
     * you have to define in the same header as the others.
     * it can be declared outside the class definition
     * but it have to be after the class declaration,
     * using the inline qualifier before its name
     */
    void set_tot(){total_val = shares*shares_val;}

    //anyone can use it
    //member function prototypes
public:
    //! default constructor
    Stock();
    //! constructor created by the programmer
    Stock(const std::string & co, long n=0, double pr = 0.0);

    void acquire(const std::string & co, long n, double pr);
    //! Method used when its buyed a new share
    void buy(long num, double price);
    //! recalculte the shares after selling some of it
    void sell(long num, double price);
    //! updates the new price of the shares
    void update(double price);
    //! Show to the user the info storaged
    void show();
    //! destructor
    ~Stock();
    //! compare 2 objetos e return the biggest one
    const Stock & topval(const Stock & s) const;

};

#endif // STOCK00_H
