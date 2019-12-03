#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int n, minans = 1e5, maxans = -1e5, sum = 0;
    cin >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        sum += _;
        minans = min(minans,_);
        maxans = max(maxans,_);
    }
    cout << maxans << endl << minans << endl << sum << endl;
    return 0;
}