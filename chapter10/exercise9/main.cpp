/*
    规定输入的字符串中包含字母和*号。请编写函数fun，其功能是：使字符串中尾部的
    *号不多于n个，若多于n个，则删除多余的*号；若少于或等于n个，则不做任何操作
    字符串中间和前面的*号不删除。
    例如，字符串中的内容为“****A*BC*DEF*G*******”,若n的值为4，删除后，字符串中的
    内容应：****A*BC*DEF*G****"；若n的值为7，则字符串中的内容仍为“****A*BC*DEF*G*******”
    n的值在：函数中输入。编写函数时，不得使用C语言提供的字符串函数
*/

#include <stdio.h>

void fun(char *a,int n)

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}





void fun(char *a,int n)
{
    int i = 0,k =0;
    char *p,*t;
    p =t =a;
    while(*t)
        t++;
        t--;
    while(*t == '*')
    {
    k++;
    t--;
    }
    if(k>n)
    {
    while(*p && p<t+n+1)
    {
    a[i]=*p;
    i++;
    p++;
    }
    a[i] = '\0';
    }

}
