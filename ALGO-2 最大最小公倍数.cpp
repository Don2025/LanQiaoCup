#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,ans;
    cin >> n;
    if(n <= 2)
    {
        ans = n;
    }
    else if(n&1)   //ÆæÊý
    {
        ans = n*(n-1)*(n-2);
    }
    else   //Å¼Êý
    {
        if(n%3==0)
        {
            ans = (n-1)*(n-2)*(n-3);
        }
        else
        {
            ans = n*(n-1)*(n-3);
        }
    }
    cout << ans << endl;
    return 0;
}