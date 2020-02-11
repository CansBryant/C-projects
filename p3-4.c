//编写一段程序，输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。”。
#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入两个整数：");
    scanf("%d%d",&a,&b);
    if(a == b)
    {
        printf("A和B相等。");
    }
    else
    {
        if(a < b){
            printf("A小于B。");
        }
        else{
            printf("A大于B。");
        }
        return 0;
    }

}