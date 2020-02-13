//创建一个函数，对元素个数为 n 的 int 型数组 v2 进行倒序排列，并将其结果保存在数组 v1 中。
void reverse2(int v2[], int n)
{
    int v1[n];
    for (int i = n - 1, j = 0; i >= 0, j <= n; i--, j++)
    {
        v1[j] = v2[i];
    }
}