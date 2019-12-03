#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 200001;

int u[maxn],v[maxn],w[maxn];
int d[maxn];    //记录起点1到各点的最短距离

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(d,INF);  //初始化图的信息
    d[1] = 0;   //1到自身的距离为0
    int n,m;    //顶点数n,边数m
    cin >> n >> m;
    Up(i,1,m)
    {
        cin >> u[i] >> v[i] >> w[i];
    }
    Up(i,1,n-1)
    {
        bool flag = false;
        Up(j,1,m)
        {
            if(d[v[j]] > d[u[j]]+w[j])
            {
                d[v[j]] = d[u[j]]+w[j];   //更新最短路
                flag = true;
            }
        }
        if(!flag) break;   //若不再松弛,提前退出循环
    }
    Up(i,2,n)
    {
        cout << d[i] << endl;
    }
    return 0;
}