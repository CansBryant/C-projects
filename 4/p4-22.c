/*
    显示直角在左上方的等腰直角三角形
*/
#include <stdio.h>

int main(void)
{
    int i , j, len;

    puts("生成直角在左上方的等腰直角三角形。");
    printf("短边："); scanf("%d", &len);

    for (i = len; 0 < i; i --) {
        for (j = i; 0 < j; j--)
            putchar('*');
        putchar('\n');
    }

    return 0;
}