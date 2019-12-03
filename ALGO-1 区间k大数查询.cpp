#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    Up(i,1,n)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    while(m--)
    {
        int l,r,k,cnt = 0;
        cin >> l >> r >> k;
        vector<int> v;
        Up(i,l,r)
        {
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end(),greater<int>());
        cout << v[k-1] << endl;
    }
    return 0;
}