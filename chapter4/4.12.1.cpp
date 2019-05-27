#include <iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
}bouquet =
{
   "sunflowers",
        0.20,
        12.49
};
//define a struct
int main()
{
    inflatable choice;  //声明结构体变量
    cout << "bouquet : " << bouquet.name << " for  $";
    cout << bouquet.price << endl;

    choice = bouquet;   //assign one structure to another
    cout << "choice: " << choice.name << " for $"; //choice name = bouquet name
    cout << choice.price <<endl;
    return 0;
}

//Note：结构体赋值操作

