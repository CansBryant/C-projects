//编写一段程序，对代码清单9-7进行如下改写。
//1、将字符串的个数3改为更大的数，将其值定义为对象式宏。 2、在最初的for语句读取"$$$$$”时停止读取操作。?
//3、第二个for语句显示"$$$$$"前输入的所有字符串。
/*
读取并显示字符串数组
*/
#include <stdio.h>
#include <string.h>
#define num 5
int main(void)
{
    int i;
    int k = 0;
    char s[num][128];
    char m[] = "$$$$$";

     for(int i = 0; i < num; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        while (strcmp(s[i],m) == 1)
        {
            break;
        }
        k++;
    }

    for (i = 0; i < k; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
    
    return 0;
}