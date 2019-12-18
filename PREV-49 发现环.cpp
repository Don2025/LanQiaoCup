#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+1;
//先并查集求出第一个成环 的边，这条边的两个顶点一定是环中的顶点，以这两个点为起点进行dfs，找到环并记录
int dad[maxn],ans[maxn],bg,ed,cnt;  //并查集数组dad,ans记录环的路径
vector<int> v[maxn];
bool vis[maxn];

int find(int x)
{
    return x==dad[x] ? x : find(dad[x]);
}

bool join(int x,int y)   //true表示合并了,false表示没合并
{
    x = find(x);
    y = find(y);
    if(x != y)
    {
        dad[y] = x;
        return true; 
    }
    return false;
}

int dfs(int x,int step)
{
    ans[step] = x;
    if(x == ed)
    {
        cnt = step;
        return 1;
    }
    Up(i,0,v[x].size()-1)
    {
        int y = v[x][i];
        if(!vis[y]) 
        {
            vis[y] = true;
            if(dfs(y,step+1)) return 1;
            vis[y] = false;
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(vis,false);
    int n;
    cin >> n;
    Up(i,1,n)   //并查集初始化
    {
        dad[i] = i;
    }
    Up(i,1,n)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        if(!join(x,y))
        {
            bg = x,ed = y;
        }
    }
    cnt = 0;
    dfs(bg,1);
    sort(ans+1,ans+cnt+1);
    Up(i,1,cnt)
    {
        cout << ans[i] << (i==cnt?"\n":" ");
    }
    return 0;
}