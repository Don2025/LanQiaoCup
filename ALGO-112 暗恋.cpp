#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 201;
const int INF = 0x3f3f3f3f;

int a[maxn][maxn];

int check(int x,int y)  //寻找从(x,y)开始向右下角探测的最大正方形的面积
{
    Up(i,1,maxn)
    {
        Up(j,x,x+i)
        {
            if(a[j][y+i] != a[x][y]) return i*i;
        }
        Up(j,y,y+i)
        {
            if(a[x+i][j] != a[x][y]) return i*i;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(a,INF);
    int r,c;    //rhangc列
    cin >> r >> c;
    Up(i,1,r)
    {
        Up(j,1,c)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    Up(i,1,r)
    {
        Up(j,1,c)
        {
            ans = max(ans,check(i,j));
        }
    }
    cout << ans << endl;
    return 0;
}