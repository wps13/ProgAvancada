#ifndef MYTIME0_H
#define MYTIME0_H
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
    Time(); //default constructor
    Time(int h, int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0, int m=0);
    //Time Sum(const Time & t ) const; --> substituida pela sobrecarga do operador +
    Time operator+(const Time & t) const;
    void Show() const;
    Time operator-(const Time &t) const;
    //Time operator*(double mult) const;
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif // MYTIME0_H
