//编写一段程序，像下面这样显示读取到的两个整数的乘积。
#include <stdio.h>
int main(void)
{
    int a,b;
    printf("请输入两个整数：\n");
    printf("整数1：\n");
    scanf("%d",&a);
    printf("整数2：\n");
    scanf("%d",&b);
    printf("他们的乘积为：%d", a * b );
    return 0;
}