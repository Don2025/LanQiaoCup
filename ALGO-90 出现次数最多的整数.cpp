#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,ans = 0,cnt = 0;
    cin >> n;
    if(n>0 && n<=20)
    {
        map<int,int> m;
        while(n--)
        {
            int _;
            cin >> _;
            if(++m[_] > cnt)
            {
                cnt = m[_];
                ans = _;
            }
            else if(m[_] == cnt)
            {
                ans = min(ans,_);
            }
        }
        cout << ans << endl;
    }
    return 0;
}