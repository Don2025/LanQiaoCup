#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b)
{
    return !b ? a : gcd(b,a%b);
}

int main()
{
    ll a,b;
    cin >> a >> b;
    ll _ = gcd(a,b);
    cout << _ << " " << a*b/_ << endl;
    return 0;
}