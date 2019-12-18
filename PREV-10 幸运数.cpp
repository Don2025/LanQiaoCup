#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 1e6+1;

int m,n,a[maxn];   //a[i]为i的位置数

void dfs(int dep)
{
    int cnt = dep;
    if(a[dep] > n) return;
    Up(i,dep,n-1)
    {
        if(i%a[dep])   //若i不是dep位置数的倍数则添加到数列中
        {
            a[cnt++] = a[i];
        }
    }
    dfs(dep+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> m >> n;
    Up(i,1,n)    
    {
        a[i] = i*2-1;   //先去除下标为2的倍数的数,得到所有奇数
    }
    dfs(2); 
    int ans = 0, i = 1;
    while(a[i] < n)
    {
        if(a[i++]>m)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}