// stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>

#include "stock00.h"

//:: indicates which class the function belongs to
Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    shares_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    company=co;
    if(n<0)
    {
        std::cout << "Number of shares can't be negative;"
                  <<company <<" shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    shares_val= pr;
    set_tot();
}

void Stock::acquire(const std::__cxx11::string & co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout << "Number of shares can't be negative;"
                  <<company <<" shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    shares_val= pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num< 0)
    {
        std::cout << "Number of shares can't be negative;."
                  <<" Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        shares_val=price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num<0)
    {
        cout<<"Number of shares can't be negative;."
           <<" Transaction is aborted.\n";
    }
    else if(num>shares)
    {
        cout<<"Number of shares over the limit."
           <<" Transaction is aborted.\n";
    }
    else{
        shares -= num;
        shares_val= price;
        set_tot();
    }
}

void Stock::update(double price)
{
    shares_val= price;
    set_tot();
}

void Stock::show()
{
    /*
    std::cout << "Company: " << company
              << " Shares: " << shares << "\n"
              << " Share Price: $" << shares_val
              << " Total Worth: $" << total_val << "\n";
*/
    //this code is used to fix the problem related to the exponencial value
    //result from the operation
    //its defines the precision of the output

    using std::cout;
    using std::ios_base;
    //! set format to #.###
    ios_base::fmtflags orig =
            std::cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    std::cout << "Company: " << company
              << " Shares: " << shares << "\n";
    std::cout << " Share Price: $" << shares_val;
    //! set format to #.##
    std::cout.precision(2);
    std::cout << " Total Worth: $" << total_val << "\n";
    //! restore original format
    std::cout.setf(orig, ios_base::floatfield);
    std::cout.precision(prec);
}

Stock::~Stock()
{
    std::cout<<"Bye,"<<company<<"\n";
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
