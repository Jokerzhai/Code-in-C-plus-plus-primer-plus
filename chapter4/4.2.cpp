#include <iostream>
#include <cstring>  //for the strlrn()function

using namespace std;

int main()
{
    const int Size = 15;
    char name1[Size];               //空数组
    char name2[Size] = "C++owboy";  //初始化数组  赋值一个字符串


    cout << "Howdy!I'm " << name2;
    cout << "! What's your name?\n";
    cin  >> name1;
    cout << "Well, " << name1 << ",your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1)<< " byte.\n";
    cout << "Your initial is "<< name1[0] << ".\n";
    name2[3] = '\0';                 //设置空字符
    cout << "Here are the first 3 character of my name: ";
    cout<< name2<<endl;
    return 0;
}
