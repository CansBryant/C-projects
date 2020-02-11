//使用if语句替换代码清单3-15程序中的条件运算符，实现同样的功能。
#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    if (a < b){
        printf("%d",b - a);
    }
    else {
        printf("%d",a - b);
    }
    return 0;
}