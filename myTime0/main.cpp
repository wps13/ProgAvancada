#include <iostream>
#include "myTime0.h"

using namespace std;

int main()
{
    /*
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "planning time = ";
    planning.Show();
    cout << endl;
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";

    total=coding + fixing;
    cout<<"coding + fixing = ";
    total.Show();
    cout << endl;
    */

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout<< "Aida and Tosca:\n";
    cout<< aida<<"; " << tosca << endl;
    temp = aida + tosca;
    cout<< "Aida + Tosca: " << temp << endl;
    /**
    temp= aida* 1.17; // member operator*()
    cout<< "Aida * 1.17: " << temp << endl;
    cout<< "10.0 * Tosca: " << 10.0 * tosca << endl;


    // operator+()

**/


    return 0;
}
