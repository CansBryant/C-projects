//在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序（for语句的控制表达式）中的
//请编写一段程序，将其改写为通过计算求出。
/*
    字符串数组
*/
#include <stdio.h>

int main(void)
{
    int i;
    int m,n;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};
    m = sizeof(a) / sizeof(a[0]);
    n = sizeof(p) / sizeof(p[0]);

    for (i = 0; i < m; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    for (i = 0; i < n; i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);

    return 0;
}