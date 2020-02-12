//编写一段程序，读取表示身高的整数，显示出标准体重的实数值。标准体重根据公式(身高-100)X0.9进行计算，所得结果保留一位小数。
#include <stdio.h>
int main(void)
{
    int a;
    printf("请输入您的身高： cm");
    scanf("%d",&a);
    printf("根据科学，其标准体重为：%f", (a-100)*0.9 );
    return 0;
}