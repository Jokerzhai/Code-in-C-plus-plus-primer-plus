// more looping with for
#include <iostream>

using namespace std;
const int ArSize = 16;  //example of external declaration
int main()
{
    long long factorials [ArSize];//0-15的阶乘
    factorials[1] = factorials[0] = 1LL; // 初始化0和1存储0！和1！
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1]; //阶乘算法
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;//输出显示
    return 0;
}
