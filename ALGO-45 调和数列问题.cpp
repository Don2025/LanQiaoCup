#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    double x;
    while(cin >> x && x)
    {   
        double ans = 0;
        int n = 0;
        while(true)
        {
            n++;
            ans += 1.0/(n+1);
            if(ans >= x)
            {
                cout << n << " card(s)" << endl;
                break;
            }
        }
    }
    return 0;
}