/*

输入n值，输出如图所示高和上底均为n的等腰梯形
            *****
           *******
          *********
         ***********
        **************
图为n=5的等腰三角形
*/


#include <stdio.h>

int main()
{
    int i,j,n;
    printf("\nPleaseEnter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf("");
        for(j=1;j<=2*i-1+(n-1);j++)
            printf("*");
            printf("\n");
    }
    return 0;
}
