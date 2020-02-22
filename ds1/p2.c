//循环链表实现约瑟夫环问题：
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
Node* ininode(Node* pre,int num,Node* head)
{
    Node* new = (Node *)malloc(sizeof(Node));
    pre -> next = new;
    new -> next = head -> next;
    new -> e = num; 
    return new;
}

//找到第m-1个结点p，把第m个结点的next交给p，并删除第m个结点
int kill(Node* start,Node* head, int m, int k)
{
    int d;
    Node* p = start;
    if(m >= head -> e)      //若m值很大，更简便
    { 
        m %= head -> e;
    }
    for(int i = 0; i < m - 1; i++)      //找到结点p
    {
        p = p -> next;
    }
    Node* del = p -> next;
    p -> next = del -> next;
    start = p -> next;
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
    printf("请输入人数n，值m(interval)和值k(the 1st)：");
    scanf("%d%d",&n,&m,&k);
    head -> e = n;
    for (i = 0; i < n; i++)     //创建循环链表并输出
    {
        Node* new = ininode(pre, i + 1, head);
        printf("%3d ", new -> e);
        pre = new;
    }
    printf("\n");
    Node* start = head;
    i = 0;
    while(i < k)       //找到第k个人，即结点start
    {
        start = start -> next;
        i++;
    }
    int d;
    for (i = 0; i < n; i++){        //淘汰所有人，并输出每次结点的e
        d = kill(start, head, m, k);
        printf("%3d ",d);
    }
    printf("\n");
    return 0;
}