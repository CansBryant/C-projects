//编写一段程序，显示出小于输入的整数的所有2的乘方。
#include <stdio.h>
int main()
{
    int a;
    printf("输入一个整数：");
    scanf("%d",&a);
    for (int i = 2;i < a;i *= 2)
    {
        printf("%d ",i);
    }
    return 0;
}