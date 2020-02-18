//编写如下函数，从键盘输入int型、long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。
/*
返回结构体的函数
*/
#include <stdio.h>
struct xyz {
    int x;
    long y;
    double z;
};
struct xyz scan_xyz(){
    struct xyz m;
    printf("请输入int long double型数字各一：");
    scanf("%d%l%lf",&m.x,&m.y,&m.z);
    return m;
}

