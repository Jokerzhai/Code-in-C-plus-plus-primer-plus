// use a block statement

#include <iostream>

using namespace std;

int main()
{
    cout << "The Amazing Account will sum and average " << endl;
    cout << "five numbers for you .\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <=5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisit choice indeed : ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    return 0;
}
