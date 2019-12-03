#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int n,minans = 1e6, maxans = -1e6;
    cin >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        minans = min(minans,_);
        maxans = max(maxans,_);
    }
    cout << maxans << " " << minans << endl;
    return 0;
}