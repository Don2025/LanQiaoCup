#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
typedef long long ll;
const int maxn = 16;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll a[maxn],dp[maxn][maxn];    //dp[i][j]表示前i个数中使用了j个乘号得到的最大值
    ms(dp,0);
    int n,k;
    cin >> n >> k;
    ll sum = 0;
    Up(i,1,n)
    {
        cin >> a[i];
        sum += a[i];
        dp[i][0] = sum; //在没用乘号时全部用加法
    }
    Up(i,1,n)
    {
        Up(j,1,i-1)   //最多i-1个乘号
        {
            Up(k,2,i)  //第j个乘号插入的位置
            {
                dp[i][j] = max(dp[i][j],(dp[i][0]-dp[k-1][0])*dp[k-1][j-1]);
            }
        }
    }
    cout << dp[n][k] << endl;
    return 0;   
}