// pointer addition
#include <iostream>

using namespace std;

int main()
{
    double wages[3] = {10000.0,20000.0,30000.0}; //declare an array
    short stacks[3] = {3,2,1};//declare an array

    //Here are two ways to get the address of an array
    double * pw = wages;    //name of an array = address
    short * ps = &stacks[0];//or use aaddress operator
    //with array element

    cout << "pw = " << pw << ", *pw = " << *pw <<endl;//former is address ,the later is value
    pw = pw + 1; //double is 8 byte so the wages's each address will plus 8
    //the value will become 20000
    cout << "add 1 to the pw pointer : \n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;//former is address and the later is value 8
    ps = ps + 1;//short is 2 byte so the stacks's each address will plus 2
    //the value will become 2
    cout << "add 1 to the pw pointer : \n ";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks // the name of array is the address of the first element

         << ",*{stack + 1} = " << *(stacks + 1) <<endl;

    cout << sizeof(wages) << " = size of wages array \n";//3*8byte
    cout << sizeof(pw) << " = size of pw pointer\n";//
    return 0;
}
