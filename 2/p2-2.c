//编写一段程序，读取两个整数，然后输出它们的和以及积。
#include <stdio.h>
int main(void)
{ 
    int a,b;
    scanf("%d%d",&a,&b);
    printf("他们的和为%d，积为%d", a + b , a * b );
    return 0;
}