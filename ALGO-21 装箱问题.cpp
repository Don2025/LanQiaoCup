#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxv = 20001;
const int maxn = 31;

int dp[maxn][maxv];    //dp[i][j]表示前i件物品放入体积为j的背包后的最大体积

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int v,n;    //箱子容量v,物品数n
    cin >> v >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        Up(j,1,v)
        {
            if(_ > j)   //当前物品体积大于背包容量就不放入背包
            {
                dp[i][j] = dp[i-1][j];
            }
            else    //当前物品体积小于背包容量,考虑放入还是不放入背包
            {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-_]+_);
            }
        }
    }
    cout << v-dp[n][v] << endl;
    return 0;
}