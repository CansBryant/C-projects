/*
将字符串存储在数组中并显示（其2:初始化）
*/
#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0CDE";

    printf("字符串str为\"%s\"。\n", str);

    return 0;
}