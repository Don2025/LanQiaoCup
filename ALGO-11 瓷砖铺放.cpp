#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return fun(n-1)+fun(n-2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}