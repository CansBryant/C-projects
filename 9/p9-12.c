//编写如下函数，将所接收的字符串数组中存储的n个字符串的字符逆向显示。
#include <string.h>
#include <stdio.h>
void rev_string(char s[][128],int n){
    for(int i = 0;i < n;i++)
    {
        int j = 0;
        while (s[i][j])
        {
            j++;
            printf("%c",s[i][strlen(s[i]) - j]);
        }
    }
}