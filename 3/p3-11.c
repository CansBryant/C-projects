//编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。
#include <stdio.h>
int main()
{
    int a,b,c,d ;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        c = a;
        d = b;
    }
    else{
        c = b;
        d = a;
    }
    if (c - d >= 10)
    {
        printf("其差大于等于10");
    }
    else{
        printf("其差小于");
    }
    return 0;
}