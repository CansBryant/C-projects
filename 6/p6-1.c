//创建一个函数，返回两个int型整数中较小一数的值。
#include <stdio.h>
int min(int a,int b){
    return (a>b?b:a);
}


int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    printf("the min is %d",min(a,b));
    return 0;
}