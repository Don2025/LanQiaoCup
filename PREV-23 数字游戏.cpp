#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    ll n,k,t;   //n��ͬѧ,����k-1��0��,t�Ƕ���˵����������
    cin >> n >> k >> t;
    ll x = 1,ans = 1,l = 1,r = n;   //����������Ϊx
    Up(i,1,t-1)
    {
        x += (l+r)*n/2;
        x = x%k;
        ans += x;
        l += n;
        r += n;
    }
    cout << ans << endl;
    return 0;
}