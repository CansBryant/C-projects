//对代码清单3-4中的程序进行修改，不使用if语句，而是改用switch语句来实现。
#include <stdio.h>
int main()
{
    int a;
    printf("请输入1个整数：");
    scanf("%d",&a);
    switch(a % 2)
    {
        case 1: puts ("其为奇数"); break;
        case 0: puts ("其为偶数"); break;
        default: puts ("wrong");
    }
    return 0;
}