#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 1000001;

struct node
{
    int l,r,maxvalue,sum;
}a[maxn];

void init(int left,int right,int i)    //初始化
{
    a[i].l = left;
    a[i].r = right;
    a[i].maxvalue = 0;
    a[i].sum = 0;
    if(left != right)
    {
        int mid = (left+right)/2;
        init(left,mid,2*i);
        init(mid+1,right,2*i+1);
    }
}

void insert(int i,int x,int y)  //修改格子x的权值为y
{
    if(a[i].l == a[i].r)
    {
        a[i].maxvalue = y;
        a[i].sum = y;
        return ;
    }
    int mid = (a[i].l+a[i].r)/2;
    if(x <= mid)
    {
        insert(2*i,x,y);
    }
    else
    {
        insert(2*i+1,x,y);
    }
    a[i].maxvalue = max(a[2*i].maxvalue,a[2*i+1].maxvalue);
    a[i].sum = a[2*i].sum + a[2*i+1].sum;
}

int findSum(int i,int x,int y)  //求区间[x,y]内格子权值和
{
    if(x==a[i].l && y==a[i].r)
    {
        return a[i].sum;
    }
    int mid = (a[i].l+a[i].r)/2;
    if(y <= mid)
    {
        return findSum(2*i,x,y);
    }
    else if(x > mid)
    {
        return findSum(2*i+1,x,y);
    }
    else 
    {
        return findSum(2*i,x,mid)+findSum(2*i+1,mid+1,y);
    }
}

int findMax(int i,int x,int y)  //求区间[x,y]内格子最大的权值
{
    if(x==a[i].l && y==a[i].r)
    {
        return a[i].maxvalue;
    }
    int mid = (a[i].l+a[i].r)/2;
    if(y <= mid)
    {
        return findMax(2*i,x,y);
    }
    else if(x > mid)
    {
        return findMax(2*i+1,x,y);
    }
    else 
    {
        return max(findMax(2*i,x,mid),findMax(2*i+1,mid+1,y));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    init(1,n,1);
    int value;  //n个格子的初始权值
    Up(i,1,n)
    {
        cin >> value;
        insert(1,i,value);
    }
    Up(i,1,m)
    {
        int p,x,y;
        cin >> p >> x >> y;
        switch(p)
        {
            case 1: insert(1,x,y); break;            
            case 2: cout << findSum(1,x,y) << endl; break;        
            case 3: cout << findMax(1,x,y) << endl; break;
            default: break;
        }
    }
    return 0;
}