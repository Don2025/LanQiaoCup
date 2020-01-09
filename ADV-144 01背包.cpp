#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))

int dp[201][5001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(dp,0);
    int n,m;   //物品个数n,背包最多能承受的重量m
    cin >> n >> m;
    Up(i,1,n)
    {
        int x,y;  //重量x,价值y
        cin >> x >> y;
        Up(j,1,m)
        {
            if(x > j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-x]+y);
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}