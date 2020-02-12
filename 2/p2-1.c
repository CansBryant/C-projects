//编写一段程序，读取两个整数，然后显示出前者是后者的百分之几。
#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("前者是后者的%lf%%",100.0 * a / b );
    return 0;

}