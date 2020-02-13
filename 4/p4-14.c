//编写一段程序，根据输入的整数，循环显示 1234567890 ，显示的位数和输入的整数值相同。
#include <stdio.h>
int main()
{
    int b;
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("请输入一个整数：");
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        printf("%d",a[i%10]);
    }
    return 0;
}