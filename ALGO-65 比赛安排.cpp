#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = pow(2,6)+1;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    bool vis[maxn][maxn];   //用来判断俩队是否比赛过
    ms(vis,false);
    int n;
    cin >> n;
    int m = pow(2,n);   //2^n个球队
    Up(i,1,m-1)   //2^n-1天
    {
        bool a[maxn];   //用来记录每天比赛过的队伍
        ms(a,false);
        cout << "<" << i << ">";
        Up(j,1,m)
        {
            if(!a[j])
            {
                a[j] = true;
                Up(k,j+1,m)
                {
                    if(!a[k] && !vis[j][k])
                    {
                        a[k] = true;
                        vis[j][k] = vis[k][j] = true;
                        cout << " " << j << "-" << k;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}