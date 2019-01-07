#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20; //define a const
    char name[ArSize]; //define a array named name and the size of array is 20(0-19)
    char dessert[ArSize];//define a array named dessert and size of array is 20

    cout << "Enter your name:\n" ;
    cin  >> name;
    cout << "Enter your favourite dessert:\n";
    cin  >> dessert;
    cout << "I have some delicious " <<dessert;
    cout << " for you,  " << name << ".\n";
    return 0;
}
