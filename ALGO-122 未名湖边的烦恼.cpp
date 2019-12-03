#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 19;
int dp[maxn][maxn];

int main()
{
    memset(dp,0,sizeof(dp)); 
    int m,n;   //还鞋m人,借鞋n人
    cin >> m >> n;
    Up(i,0,maxn-1)
    {
        dp[i][0] = 1;   //当m=0时,即只有人还鞋的时候,只有一种排法
    }
    Up(i,1,maxn-1)
    {
        Up(j,1,maxn-1)
        {
            //当还鞋的人比借鞋的人多的时候,还鞋或借鞋的人减少一个状态再加起来
            if(i >= j) dp[i][j] = dp[i-1][j]+dp[i][j-1];  
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}