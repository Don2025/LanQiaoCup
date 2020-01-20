#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    ms(a,0);
    Up(i,1,m)
    {
        int x,y;
        cin >> x >> y;
        a[x][i] = 1;
        a[y][i] = -1;
    }
    Up(i,1,n)
    {
        Up(j,1,m)
        {
            cout << (j==1?"":" ") << a[i][j];
        }
        cout << endl;
    }
    return 0;
}