// more looping with for
#include <iostream>

using namespace std;
const int ArSize = 16;  //example of external declaration
int main()
{
    long long factorials [ArSize];//0-15�Ľ׳�
    factorials[1] = factorials[0] = 1LL; // ��ʼ��0��1�洢0����1��
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1]; //�׳��㷨
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;//�����ʾ
    return 0;
}
