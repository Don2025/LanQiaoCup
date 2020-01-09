#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 1e4+1;

int isPrime(int n)
{
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn];
    ms(a,0);
    int L,R,cnt = 0;
    cin >> L >> R;
    Up(i,0,2)
    {
        Up(j,0,2)
        {
            Up(k,0,2)
            {
                Up(l,0,2)
                {
                    Up(m,0,2)
                    {
                        Up(n,0,2)
                        {
                            a[++cnt] = i+j+k+l+m+n;
                        }
                    }
                }
            }
        }
    }
    int ans = 0;
    Up(i,1,cnt)
    {
        if(isPrime(a[i]) || (a[i]>=L && a[i]<=R)) ans++;
    }
    cout << ans << endl;
    return 0;
}