#include <iostream>
struct inflatable
{
    char name[20];
    float volumn;
    double price;
};//define a struct
using namespace std;

int main()
{
    inflatable guest[2] =           //initializing an array of struct
    {
        {"Bambi",0.5,21.99},        //first structure in array
        {"Godzilla",2000,565.99}    //next  structure in array
    };

    cout << "The guests " << guest[0].name << " and " << guest[1].name
    // Bambi and Godzilla
         << "\nhave a combined volum of "
         << guest[0].volumn + guest[1].volumn << " cubic feet .\n";
    // 0.5 + 2000
    return 0;
}
// 这个好像是结构体数组，用数组是外面的，每部volumn是结构体
