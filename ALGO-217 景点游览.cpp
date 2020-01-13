#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    int a[n+1];
    Up(i,1,n)
    {
        cin >> a[i];
    }
    sort(a+1,a+1+n,greater<int>());
    Up(i,1,n)
    {
        cout << a[i] << (i!=n?" ":"\n");
    }
    return 0;
}