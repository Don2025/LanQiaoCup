#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1];
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(i >= m)
        {
            int tans = 0;
            for(int j = i; j > i-m; j--)   //累加从第i个数开始的前m个数
            {
                // cout << a[j] << " "; 
                tans += a[j];
            }
            // cout << " " << tans << endl;
            ans = max(ans,tans);
        }
    }
    for(int i = 1; i < m; i++)
    {
        int tans = 0;
        for(int j = i,cnt = 0; cnt < m; j--,cnt++)    
        {
            if(j <= 0)
            {
                j += n;
            } 
            tans += a[j];
            // cout << a[j] << " ";
        }
        // cout << " " << tans << endl;
        ans = max(ans,tans);
    }
    cout << ans << endl;
    return 0;
}
