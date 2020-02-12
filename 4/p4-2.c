//编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("请输入一小一大两个整数：");
    do{
        scanf("%d%d",&a,&b);
    }while(a > b);
    for (int i = a + 1 ; i < b ; i++)
    {
        sum+=i;
    }
    printf("the sum is %d",sum);
    return 0;

}