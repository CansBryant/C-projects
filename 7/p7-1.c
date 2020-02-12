//创建一个程序,显示如下所示的各表达式的值，同时对各表达式的值加以说明。
#include <stdio.h>
int main()
{
    int n = 1;
    printf("%d %d %d\n%d %d %d\n%d %d %d\n",sizeof 1,sizeof(unsigned)-1,sizeof n+2,sizeof +1,sizeof(double)-1,sizeof(n+2),sizeof -1,sizeof((double)-1),sizeof(n+2.0));
    return 0;
}