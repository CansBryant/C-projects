//编写一段程序，显示以所输入整数为边长的正方形。
#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    for (int i = 0;i < a;i++)
        {for ( int j = 0; j < a; j++)
         printf("%d",a);
         printf("\n");
        }
    return  0;
}