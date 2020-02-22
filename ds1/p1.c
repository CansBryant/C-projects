//非循环链表实现约瑟夫环问题：
//已知 n 个人（分别用编号 1，2，3，…，n 表示）围坐在一张圆桌周围，从编号为 k 的人开始顺时针报数，
//数到 m 的那个人出列；他的下一个人又从 1 开始，
//还是顺时针开始报数，数到 m 的那个人又出列；依次重复下去，直到圆桌上剩余一个人。
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int e;
    struct node* next;
}Node;

//新建结点
Node* ininode(Node* pre,int num)
{
    Node* new = (Node *)malloc(sizeof(Node));
    pre -> next = new;
    new -> next = NULL;
    new -> e = num; 
    return new;
}

//找到第m-1个结点p，把第m个结点的next交给p，并删除第m个结点
int kill(Node* target,Node* head, int a, int m, int k)
{
    int d;
    Node* del;
    Node* p;
    if(m >= a)
    { 
        m %= a;
    }
    if(m <= a - k)
    {
        p = target;
        for(int i = 0; i < m -1; i++)
        {
         p = p -> next;   
        }
    }
    else
    {
        p = head;
        for(int i = 0; i < a - k; i++)
        {
         p = p -> next;   
        }
    }
    del = p -> next;
    p -> next = del -> next;
    d = del -> e;
    free(del);
    del = NULL;
    head -> e--;
    return d;
}

int main()
{
    Node* head = (Node *)malloc(sizeof(Node));
    Node* pre = head;
    int n,m,k;
    int i;
    printf("请输入人数n和值m值k：");
    scanf("%d%d",&n,&m,&k);
    head -> e = n;
    for (i = 0; i < n; i++)
    {
        Node* new = ininode(pre, i + 1);
        printf("%d ", new ->e );
        pre = new;
    }
    Node* start = head;
    i = 0;
    if (k > n)
    {
        k %= n;
    }
    while(i < k)
    {
        start = start -> next;
        i++;
    }
    for (i = 0; i < n; i++){
        int d;
        d = kill(start, head, head -> e, m, k);
        printf("%d ",&d);
    }
    return 0;
}