//创建一个函数，对元素个数为 n 的 int 型数组 v 进行倒序排列。
void reverse(int v[],int n)
{
    for (int i = 0, j = n - 1; i < j; i++ , j--){
        int k = v[i];
        v[i] = v[j];
        v[j] = k;

    }
}