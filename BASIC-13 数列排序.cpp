#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 201;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn];
    int n;
    cin >> n;
    Up(i,1,n)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Up(i,1,n)
    {
        cout << (i==1?"":" ") << a[i];
    }
    return 0;
}