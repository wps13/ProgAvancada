#include <iostream>
#include <stock00.h>

using namespace std;

int main()
{
    Stock garment("World cabbage",250,1.25);
    garment.show();

    Stock joe("NanoSmart", 40, 13.50);

    joe.acquire("NanoSmart", 20, 12.50);
    joe.show();
    joe.buy(15,18.125);
    joe.show();
    joe.sell(400,20.00);
    joe.show();
    joe.buy(300000000,40.125);
    joe.sell(3000000,0.125);
    joe.show();
    std::cout<<"\n\n";

    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NopFits", 12, 20.0);
        // syntax 1
        stock1.show();
        Stock stock2 = Stock ("Boffo Objects", 2, 2.0); // syntax 2
        stock2.show();
        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();
        cout << "Using a constructor to reset an object\n";
        stock1 = Stock("Nifty Foods", 10, 50.0);
        // temp object
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }

    return 0;
}
