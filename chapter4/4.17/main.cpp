//using the new operator
#include <iostream>

using namespace std;

int main()
{
    int nights = 1001;
    int * pt = new int; //allocate space for an int
    *pt = 1001;         //store a value there


    cout << "nights value = " ;
    cout << nights << " : location " << &nights << endl;//cout a value
    cout << "int ";
    cout << "value =  " << *pt << ": location = " << pt << endl;//cout a value & an address
    double * pd = new double;    //allocate space foer an double
    *pd = 10000001.0;           //store a double there

    cout << "double ";
    cout << "value = " << *pd << ""; //cout a value
    cout << "location of pointer pd : " << &pd <<endl; //cout an address
    cout << "size of pt = " << sizeof(pt); // cout size of pt pointer
    cout << ": size of *pt = " <<sizeof(*pt) << endl; //cout size of pt value
    cout << "size of pd = " << sizeof pd; //cout size of pd pointer
    cout << ": size of *pd = " <<sizeof(*pd) << endl;//cout size of pd value
    return 0;
}
// the size of int pointer is 4 byte
// the size of double pointer is 8 byte
