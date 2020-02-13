//创建一个函数，返回元素个数为 n 的 int 型数组 v 中的最小值。
#include <stdio.h>
int min(const int a[],int n)
{
    int min = a[0];
    for(int i = 1; i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];            
        }
    }
    return min;
}