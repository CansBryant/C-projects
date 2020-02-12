//编写一段程序，计算出输入的四个整数中的最大值并显示。
#include <stdio.h>
int main()
{
    int a,b,c,d,max,k,j;
    printf("请输入四个整数：");
    scanf("%d%d%d",&a,&b,&c,&d);
    max = a;
    k = b > c ? b : c ;
    j = k > d ? k : d ;
    if (k > a)
    {
        printf("max=%d",k);
    }
    else
    {
        printf("max=%d",a);
    }
    return 0;
}