#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 1005;

int from[maxn],dp[maxn];   //dp[i]表示从i的念头数  

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ms(dp,0);
    ms(from,0);
    int n;    //念头的数量
    cin >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        from[i] = _;
        dp[i] = 1;
    }
    int ans = 1;   //ans为最长的念头因果链中的念头数量
    Up(i,1,n)
    {
        if(from[i]) 
        {
            dp[i] = dp[from[i]]+1;
        }
        ans = max(ans,dp[i]);
    }
    cout << ans << endl;
    return 0;
}