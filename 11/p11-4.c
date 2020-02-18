//不使用下标运算符，编写如下函数，显示字符串s。
#include <stdio.h>
void put_string(const char *s) { 
    int i = 0; 
    while (* (s + i))
    {
        printf("%c",*(s + i));
        i++;
    }

 }