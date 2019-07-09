//arrayone.cpp -- small arrays of integers
#include <iostream>

using namespace std;

    int main()
{

        int yams[3]; //create array with three elements
        yams[0] = 7; //assign value to first element Note: the first element in array is 0
        yams[1] = 8; //assign value to second element
        yams[2] = 6; //assign value to third element

        int yamcosts[3] = {20,30,5};//create,initialize array

        cout << "Total yams = " ;
        cout << yams[0]+yams[1]+yams[2]<<endl; //element plus each other
        cout << "The package with " << yams[1]<< " yams cost ";
        cout << yamcosts[1]<< " cents per yams.\n";//printf the second element
        int total = yams[1]*yamcosts[1] + yams[0]*yams[0]; //calculate the total value
        total = total + yams[2] *yamcosts[2];
        cout << "The total yam expense is "<< total <<" cents .\n";

        cout << "\nSize of yams array = " << sizeof yams; //calculate the size of element
        cout << " bytes.\n";
        cout << "Size of one element = " <<sizeof yams[0];
        cout << " bytes.\n";

        return 0;
}
