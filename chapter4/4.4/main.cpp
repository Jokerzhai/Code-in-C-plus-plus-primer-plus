#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    cin.getline(name,ArSize);//read through newwline
    cout << "Enter your favourite dessert: \n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " <<dessert;
    cout << "for you ," << name << ".\n";
    return 0;
}

//note: The example describes the use of getline()
//the goal of getline : read all line instead of a single character
//getline() include 2 parameters ,one of is the name of array and the other is the number of character to be read
//note: if the parameter is 20 ,in fact, getline() only read 19 chars and the rest is "blank space"


