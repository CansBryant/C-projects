//将代码清单11-3中对p的赋值进行如下修改。

/*
    用指针实现的字符串的改写
*/
#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456" + 1;/*OK!*/
    printf("p = \"%s\"\n", p);
    return 0;
}