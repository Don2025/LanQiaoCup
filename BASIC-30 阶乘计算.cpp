#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 10001;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn] = {1};
    int n;
    cin >> n;
    Up(i,1,n)
    {
        Up(j,0,maxn-1)
        {
            a[j] *= i;
        }
        Up(j,0,maxn-1)
        {
            if(a[j] >= 9)
            {
                a[j+1] += a[j]/10;
                a[j] %= 10;
            }
        }
    }
    int i = maxn-1;
    while(i>0 && a[i]==0)   //删除前置0
    {
        i--;
    }
    for( ; i >= 0; i--)
    {
        cout << a[i];
    }
    return 0;
}