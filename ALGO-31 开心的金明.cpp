#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxm = 31;
const int maxn = 30001;

int dp[maxm][maxn];  //dp[i][j]表示前i件物品的总价不超过j元时价格与重要程度乘积综合的最大值

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;    //总钱数n,渴望购买物品数m
    cin >> n >> m;
    Up(i,1,m)
    {
        int x,y;  
        cin >> x >> y;
        Up(j,1,n)
        {
            if(x > j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-x]+x*y);
            }
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}