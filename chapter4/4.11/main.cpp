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
    }; //guest �� inflatable��һ���ṹ���� ���ҳ�ʼ���ṹ��
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };//pal �� inflatable ����һ���ṹ����������ҳ�ʼ���ṹ��

    cout << "Expand your guest list with " << guest.name;// cout the "Glorious Gloria"
    cout << " and " << pal.name << "!\n"; //cout the "Audacious Arthur"
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << ".\n"; // 29.99 + 32.99
    return 0;
}
//note: ���������ں����ڲ����ⲿ���壬�ⲿ���������еĺ�������C++���ᳫʹ���ⲿ����
//�����ᳫ�ⲿ�ṹ���������⣬���ⲿ�������ų���ͨ��������
