//using prototypes and function calls
#include <iostream>

void cheers(int);       //no return values
double cube(double x);  //returns a double

int main()
{
    using namespace std;
    cheers(5);
    cout << "Give me a number: " ;
    double side;
    cin >> side;
    double volume = cube(side); //function call
    cout << "A " << side << "-foot cube has a volumn of ";
    cout << volume << "cubic feet .\n";
    cheers(cube(2));
    return 0;
}
void cheers(int n)
{
    using namespace std;
    for(int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout <<endl;
}

double cube(double x)
{
    return x * x * x;
}
