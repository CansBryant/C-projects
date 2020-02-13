//如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。?
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "ABC";
    bzero(a,sizeof(a));   //把数组设置为空
    printf("%s",a);
    return 0;

}