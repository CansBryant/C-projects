//创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。

int search_idx(const int v[],int idx[],int key,int n)
{
int j = 0;
for (int i = 0; i < n; i++)
{
    if(v[i] == key)
    {
        idx[j] = i;
        j++;          
    }

}
return j;
}
