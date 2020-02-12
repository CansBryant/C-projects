//使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。
#include <stdio.h>
int main()
{
    int a,b,c,min,k;
    printf("请输入三个整数：");
    scanf("%d%d%d",&a,&b,&c);
    min = a;
    k = b < c ? b : c ;
    if (k < a)
    {
        printf("min=%d",k);
    }
    else
    {
        printf("min=%d",a);
    }
    return 0;
}