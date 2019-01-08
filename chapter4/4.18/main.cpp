//using the new operator for array
#include <iostream>

using namespace std;

int main()
{
    double * p3 = new double [3];   //space for 3 doubles  array
    p3[0] = 0.2;//the first value is 0.2
    p3[1] = 0.5;//the second value is 0.5
    p3[2] = 0.8;//the third value is 0.8
    cout << "p3[1] is " << p3[1] <<"." << endl;//obviously the output is 0.5
    p3 = p3 + 1;                    //increment the pointer point the next value
    cout << "Now p3[0] is " << p3[0] << ". and";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 -1;                     //point back to beginning/point the former value
    delete [] p3 ;                  //free the memory
    return 0;
}
