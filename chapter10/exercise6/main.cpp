/*
��дһ������fun,���Ĺ����ǣ�ɾ���ַ����е������ַ������������ַ���48CTYP9E6 �������CTYPE

*/



#include <STDIO.H>
#include <string.h>


void func(char *s);
int main()
{
    char str[80];
    printf("Input string: ");
    gets(str);
    func(str);
    printf("After delete digital char: %s\n", str);
    return 0;
}

void func(char *s)
{
    char *pstr;
    for(pstr = s; *pstr != '\0'; pstr++)
    {
        while (*pstr >= '0' && *pstr <= '9')
            strcpy(pstr,pstr+1);
    }
}
