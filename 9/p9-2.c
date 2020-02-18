//如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。?
#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "ABC";
    printf("%s\n",a);
    a[0] = 0;
    printf("%s\n",a);
    return 0;

}