//编写一段程序，为九九乘法表增加横纵标题。
#include <stdio.h>
int main()
{
    for (int i=1;i < 10;i++)
    {
        for(int j=1;j <= i;j++)
        {
            printf("%-2d+%-2d=%-2d",i,j,i + j);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}