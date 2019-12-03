#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    ll n,k,t;   //n个同学,报到k-1从0数,t是栋栋说过的数字数
    cin >> n >> k >> t;
    ll x = 1,ans = 1,l = 1,r = n;   //栋栋报的数为x
    Up(i,1,t-1)
    {
        x += (l+r)*n/2;
        x = x%k;
        ans += x;
        l += n;
        r += n;
    }
    cout << ans << endl;
    return 0;
}