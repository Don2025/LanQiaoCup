#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int N = 105;

int dp[N][N];   //dp[i][j]表示把i拆分成不超过j的方案数

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    ms(dp,0);
    Up(i,0,n)
    {
        dp[0][i] = 1;
    }
    Up(i,1,n)
    {
        Up(j,1,n)
        {
            //dp[i][j]只有包含j和不包含j两种情况
            if(i >= j)
            {
                dp[i][j] = dp[i][j-1] + dp[i-j][j];
            }
            else dp[i][j] = dp[i][i];
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}