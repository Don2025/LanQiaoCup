#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b)
{
    return !b ? a : gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);
}

int main()
{
    ios::sync_with_stdio(false);
    ll a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
    return 0;
}