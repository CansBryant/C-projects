//编写如下函数，返回字符串s中字符c的个数(没有则返回0)。
int str_chnum(const char s[],int c){
    int i = 0;
    int k = 0;
    while(s[i])
    {
        if (s[i] == 'c')
        {
            k++;
        }
        i++;
    }
    return k;
}