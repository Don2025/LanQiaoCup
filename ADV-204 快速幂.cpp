#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll quickPow(ll x,ll n,ll m)    //整数快速幂,计算x^n%m
{
    ll ans = 1;
    x %= m;
    while(n)
    {
        if(n&1)   //奇数
        {
            ans = ans*x%m;
        }
        x = x*x%m;
        n >>= 1;
    }
    return ans;
}

ll binaryPow(ll x,ll n,ll m)    //整数快速幂,计算x^n%m递归求解
{
    if(n == 0) return 1;    //若n为0,则x^0=1
    else if(n^2)    //若n为奇数,转换为n-1
    {
        return n*binaryPow(x,n-1,m)%m;
    }
    else    //若n为偶数,转换为n/2
    {
        ll ans = binaryPow(x,n/2,m);
        return ans*ans%m;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll a,b,m;
    cin >> a >> b >> m;
    cout << quickPow(a,b,m) << endl;
    return 0;
}