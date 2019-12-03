#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 201;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn][maxn];
    ms(a,INF);  //初始化
    int m,n;    //m行n列
    cin >> m >> n;
    Up(i,1,m)
    {
        Up(j,1,n)
        {
            cin >> a[i][j];
        }
    }
    int i = 1, j = 1, cnt = 0;
    while(cnt < m*n)
    {
        while(i<=m && a[i][j]!=INF)   //向下取数
        {
            cout << (cnt==0?"":" ") << a[i][j];
            a[i][j] = INF;   //输出完置为INF
            i++;
            cnt++;
        }
        i--;
        j++;
        while(j<=n && a[i][j]!=INF)   //向右取数
        {
            cout << " " << a[i][j];
            a[i][j] = INF;
            j++;
            cnt++;
        }
        i--;
        j--;
        while(i>=1 && a[i][j]!=INF)   //向上取数
        {
            cout << " " << a[i][j];
            a[i][j] = INF;
            i--;
            cnt++;
        }
        i++;
        j--;
        while(j>=1 && a[i][j]!=INF)   //向左取数
        {
            cout << " " << a[i][j];
            a[i][j] = INF;
            j--;
            cnt++;
        }
        i++;
        j++;
    }
    return 0;
}