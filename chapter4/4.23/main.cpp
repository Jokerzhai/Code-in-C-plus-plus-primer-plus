// some type combinations
#include <iostream>

struct AntarcticaYearsEnd
{
    int year;/*some really interesting data,etc.*/
};
using namespace std;

int main()
{
    AntarcticaYearsEnd s01,s02,s03;
    s01.year = 1998;
    AntarcticaYearsEnd * pa = &s02;
    pa->year = 1999;
    AntarcticaYearsEnd trio[3];     //array of 3 structures
    trio[0].year = 2003;
    cout << trio->year << endl;
    AntarcticaYearsEnd * arp[3] = {&s01,&s02,&s03};
    cout << arp[1]->year << endl;
    auto ppa = arp;
    //const AntarcticaYearsEnd ** ppa = arp;
    auto ppb = arp; //oe use const AntarcticaYearsEnd ** ppb = arp;
    cout << (*ppa)->year <<endl;
    cout << (*(ppb + 1)) -> year <<endl;
    return 0;
}
