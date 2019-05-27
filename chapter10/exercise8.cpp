/*

编程从键盘输入圆的半径r，计算并输出圆的周长和面积

*/

#include <stdio.h>
#define PI 3.1415926
int main()
{
    float r,c,s;
    scanf("%f", &r);
    c = 2 * r *PI;
    s = PI * r *r;
    printf("c = %f s = %f \n",c,s);
    return 0;
}
