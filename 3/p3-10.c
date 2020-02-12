//编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入3个整数：");
    scanf("%d%d%d",&a,&b,&c);
    if (a == b){
        if (a == c)
        {
            printf("三个数相等");
        }
        else
        {
            printf("2个数等");
        }
    }
    else {
        if (a == c)
        {
            printf("2个数等");
        }
        else {
            printf("都不等");
        }
    }
    return 0;
}