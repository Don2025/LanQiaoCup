#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);   //升序排列
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b,b+n,greater<int>());   //降序排列
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += a[i]*b[i];
        }
        cout << sum << endl;
    }
    return 0;
}