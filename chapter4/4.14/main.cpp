// using the & operator to find the address
#include <iostream>

using namespace std;

int main()
{
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

     cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
//这里两个地址值的差为8个字节
