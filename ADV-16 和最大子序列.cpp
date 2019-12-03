#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int sum = 0,_sum = 0;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        _sum += _;
        if(_sum < 0)
        {
            _sum = 0;
        }
        sum = max(sum,_sum);
    }
    cout << sum << endl;
    return 0;
}