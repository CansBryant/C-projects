//编写一个函数，使字符串s为空字符串。
void null_string(char s[]){
    int i = 0;
    while (s[i])
    {
        s[i] = 0;
        i++;
    }
}