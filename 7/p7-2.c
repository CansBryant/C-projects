//编写一个程序，确认只要没有发生高位溢出，则
//无符号整数位左移后的值等于其乘以2的指数幂后的值。
//无符号整数位右移后的值等于其除以2的指数幂后的值。


#include <stdio.h>
#include <limits.h>
 
int main(void)
{
	unsigned a;
	int n;
	puts("请输入一个整数：");
	
	do{
		scanf("%u",&a);
		if(a > UINT_MAX)
			printf("您输入的整型过大，请重新输入。");
	} while (a > UINT_MAX);
    puts("请输入移多少位：");
    scanf("%d",&n);	
	printf("把整数向左移动%d位后其值等于其乘以2的指数幂后的值：%u = %u\n",n,a << n, n*2*2*2); 
	printf("把整数向右移动%d位后其值等于其乘以2的指数幂后的值：%u = %u",n,a >> n, n/2/2/2); 
	
	return 0;
 } 
