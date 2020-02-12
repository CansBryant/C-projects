// 编写一段程序，像下面这样显示读取到的三个整数的和。
#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入三个整数：\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("整数1：%d\n整数2：%d\n整数3：%d\n他们的和为%d\n",a,b,c, a + b + c );
    return 0;
}