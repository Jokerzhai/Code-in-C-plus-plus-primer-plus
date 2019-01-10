//using new with a structure
#include <iostream>
struct inflatable   //structure definition
{
    char name[20];
    float volumn;
    double price;
};
using namespace std;

int main()
{
    inflatable * ps = new inflatable;   //allot memory for structure
    cout << "Enter name of inflatable item : " ;
    cin.get(ps->name,20);                //method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin  >> (*ps).volumn;                //method2 for member access
    cout << "Enter price : $";
    cin  >> ps ->price;
    cout << "Name: "<<(*ps).name <<endl;               //method2
    cout << "Volumn: "<< ps->volumn << " cubic feet\n";  //method1
    cout << "Price: $"<< ps->price << endl;             //method1
    delete ps;                          //free memory used by structure
    return 0;
}
