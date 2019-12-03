#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
typedef long long ll;
const int maxn = 100001;

int main()
{
    ios::sync_with_stdio(false);
    int sum[maxn];   //sum[i] 前i个元素和
    ms(sum,0);
    int cnt[maxn];   //cnt[i] 数字i出现的次数
    ms(cnt,0);
    int n,k;
    cin >> n >> k;
    int a[n+1];
    ll ans = 0;
    Up(i,1,n)
    {
        cin >> a[i];
        sum[i] = (sum[i-1]+a[i])%k;
        ans += cnt[sum[i]];
        cnt[sum[i]]++;
    }
    ans += cnt[0];
    cout << ans << endl;
    return 0;
}