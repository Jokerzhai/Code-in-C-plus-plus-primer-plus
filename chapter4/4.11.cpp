#include <iostream>

using namespace std;

struct inflatable   //structure declaration
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflatable guest =
    {
        "Glorious Gloria",   //name value
        1.88,               //volume value
        29.99               //price value
    }; //guest 是 inflatable的一个结构变量 并且初始化结构体
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };//pal 是 inflatable 的又一个结构体变量，并且初始化结构体

    cout << "Expand your guest list with " << guest.name;// cout the "Glorious Gloria"
    cout << " and " << pal.name << "!\n"; //cout the "Audacious Arthur"
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << ".\n"; // 29.99 + 32.99
    return 0;
}
//note: 变量可以在函数内部和外部定义，外部变量由所有的函数共享，C++不提倡使用外部变量
//但是提倡外部结构声明。另外，在外部声明符号常量通常更合理
