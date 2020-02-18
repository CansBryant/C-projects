//写如下函数，若字符串s中含有字符c(若含有多个，以先出现的为准)，则返回该元素的下标值，否则返回-1。
int str_char(const char s[],int c){
    int i = 0;
    int k = -1;
    while (s[i])
    {
        if(s[i] == 'c')
        {
            k = i;   
        }
    }
    return k;
}