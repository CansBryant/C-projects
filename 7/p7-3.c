//编写rrotate函数，返回无符号整数x右移n位后的值。
//编写lrotate函数，返回无符号整数x左移n位后的值。

unsigned rrotate(unsigned x,int n){
return x >> n;
}

unsigned lrotate(unsigned x,int n){
return x << n;
}