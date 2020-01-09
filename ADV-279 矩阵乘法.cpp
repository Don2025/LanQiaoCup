#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;   
    int a[n+1][m+1], b[m+1][k+1];
    ms(a,0), ms(b,0);
    Up(i,1,n)
    {
        Up(j,1,m)
        {
            cin >> a[i][j];
        }
    }
    Up(i,1,m)
    {
        Up(j,1,k)
        {
            cin >> b[i][j];
        }
    }
    int ans[n+1][k+1];
    ms(ans,0);
    Up(i,1,n)
    {
        Up(j,1,k)
        {
            Up(t,1,m)
            {
                ans[i][j] += a[i][t]*b[t][j];
            }
        }
    }
    Up(i,1,n)
    {
        Up(j,1,k)
        {
            cout << ans[i][j] << (j==k?"\n":" ");
        }
    }
    return 0;
}