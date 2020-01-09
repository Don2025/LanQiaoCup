#include <bits/stdc++.h>
using namespace std;

int fun(int k,int n)
{
    if(k==0 || k==n)
    {
        return 1;
    }
    return fun(k,n-1)+fun(k-1,n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int k,n;
    cin >> k >> n;
    cout << fun(k,n) << endl;
    return 0;
}