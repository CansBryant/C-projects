//创建一个函数，连续发10次响铃。
#include <stdio.h>
void ring(){
    for (int i = 0;i < 10;i++)
    {
        printf("%c",'\a');
    }
}
int main()
{
    ring();
    return 0;
}