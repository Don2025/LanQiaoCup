#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    if(n <= 0)
    {
        cout << 0 << endl;
        return 0;
    }
    ll l = 0, r = 1<<16,ans=1;
    while(l <= r)
    {
        ll m = (l+r)>>1;
        if(m*m < n)
        {
            l = m+1;
        }
        else
        {
            r = m-1;
            ans = m;
        }
    }
    cout << ans*ans << endl;
    return 0;   
}
