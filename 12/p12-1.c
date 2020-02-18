//在代码清单12-3的基础上，编写显示对象takao各成员地址的程序。
/*
用表示学生的结构体来现实高尾的信息
*/
#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
};

int main(void)
{
    struct student takao = {"Takao", 173, 86.2};

    printf("姓名 = %s\n", takao.name);
    printf("身高 = %d\n", takao.height);
    printf("体重 = %.1f\n", takao.weight);
    printf("奖学金 = %ld\n", takao.schols);
 
    printf("姓名 = 0x%d\n", &takao.name);
    printf("身高 = 0x%d\n", &takao.height);
    printf("体重 = 0x%d\n", &takao.weight);
    printf("奖学金 = 0x%d\n", &takao.schols);

    return 0;
}