//编写一段程序，计算出输入的三个整数中的最小值并显示。if语句
#include <stdio.h>
int main()
{
    int a,b,c,min;
    printf("请输入三个整数：");
    scanf("%d%d%d",&a,&b,&c);
    min = a;
    if (b < min){
        if (c < b){
            printf("min = %d",c);
        }
        else {
            printf("min = %d",b);
        }
    }
    else {
        printf("min = %d",a);
    }
    return 0;
}
