//编写set_n函数，返回将无符号整数x的第pos位到第pos+n-1位的n位设为1后的值。
//编写reset_n函数，返回将无符号整数x的第pos位开始的n位设为0后的值。
//编写inverse_n函数，返回将无符号整数x的第pos位开始的n位取反后的值。


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

unsigned set_n(unsigned x,int pos,int n){
    for (int i = pos; i <= pos + n - 1; i++)
    {
        set (x,i);
    }
}

unsigned reset_n(unsigned x,int pos,int n){
     for (int i = pos; i <= pos + n; i++){
         reset(x,i);
     }
}

unsigned inverse_n(unsigned x,int pos,int n){
     for (int i = pos; i <= pos + n; i++)
     {
         inverse(x,i);
     }
}