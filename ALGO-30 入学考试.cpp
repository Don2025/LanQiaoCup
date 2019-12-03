#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxm = 101;
const int maxt = 1001;

int dp[maxm][maxt];  //dp[i][j]表示前i个草药采药时间不超过j的最大草药价值

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t,m;    //采药总时间t,草药总数目m
    cin >> t >> m;
    Up(i,1,m)
    {
        int x,y;   //当前草药所需的采药时间x,草药价值y
        cin >> x >> y;
        Up(j,1,t)
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
    cout << dp[m][t] << endl;
    return 0;
}