//编写一段程序，像下面那样显示出读取的实数的值
#include <stdio.h>
int main(void)
{
    double a;
    printf("请输入一个实数：");
    scanf("%lf",&a);
    printf("你输入的是：%f",a);
    return 0;
}