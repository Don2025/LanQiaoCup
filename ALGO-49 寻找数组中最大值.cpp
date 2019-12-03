#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 101;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn];
    int n,maxans = -INF,maxindex = 0;
    cin >> n;
    Up(i,0,n-1)
    {
        cin >> a[i];
        if(a[i] > maxans)
        {
            maxans = a[i];
            maxindex = i;
        }
    }
    cout << maxans << " " << maxindex << endl;
    return 0;
}