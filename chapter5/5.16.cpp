// reading chars with a while loop
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit : \n";
    cin  >> ch;
    while (ch != '#')       //test the character
    {
        cout << ch;         //echo the character
        ++count;            //count the character
        cin >> ch;          //get the next character
    }
    cout << endl << count << " characters read\n";
    return 0;
}