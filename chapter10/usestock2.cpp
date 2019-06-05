//stock00.cpp -- using the Stock class
//compile with stock10.cpp
#include <iostream>
#include "Stock10.h"


int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock("NanoSmart",12,20,0);               //syntax1
        stock1.show();
        Stock stock2 = Stock("Boffo Objects",2,2.0);    //syntax2
        stock2.show();

        cout << "Assigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2: \n";
        stock1.show();
        stock2.show();

        cout << "Using a constructor to reset an object\n";
        stock1 = stock("Niffy Foods",10,50.0);                           //temp object
        stock1.show();
        cout << "Done\n"
    }
    return 0;
}
