// a function with 2 arguments
#include <iostream>
using namespace std;
void n_chars(char,int);

int main()
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: " ;
    cin >> ch;
    while (ch |= 'q')
    {
        cout << "Enter an integer: ";
        cin  >> times;
        n_chars(ch,times);      //function with two arguments
        cout << "\nEnter another character or press the"
                " q-key to quit: ";
            cin >> ch;
    }
    cout >> "The value of times is  " << times << endl;
    cout >> "Byte\n";
    return 0;
}
void n_chars(char c ,int n)
{
    while (n-- >0)
        cout << c;
}


