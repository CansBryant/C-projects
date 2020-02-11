//编写一段程序，输入两个整数值，如果后者是前者的约数，则显示“B是A的约数”，如果不是，则显示“B不是A的约数”。
#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数：");             
    scanf("%d%d",&a,&b);
    printf("整数a：%d\n整数b：%d\n",a,b);
    if(b%a == 0){
        printf("B是A的约数");
    }
    else{
        printf("B不是A的约数");
    }
return 0;
}