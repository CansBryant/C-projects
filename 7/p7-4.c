//编写set函数，返回将无符号整数x的第pos位设为1后的值。
//编写reset函数，返回将无符号整数x的第pos位设为0后的值。
//编写inverse函数，返回将无符号整数x的第pos位取反后的值.??

unsigned set(unsigned x,int pos){
    unsigned int a = 0x1 << pos;
    return a | x;
}

unsigned reset(unsigned x,int pos){
    unsigned int a = ~(0x1 << pos);
    return a & x;
}

unsigned inverse(unsigned x,int pos){
    return x ^= 1U << pos - 1;    
}