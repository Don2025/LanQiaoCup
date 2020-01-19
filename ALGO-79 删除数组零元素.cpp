#include <bits/stdc++.h>
using namespace std;

int CompactIntegers(int *a,int n)
{
    int *t = new int[n]; 
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            t[cnt++] = a[i];
        }
    }
    memcpy(a,t,n*sizeof(int)); 
    //第三个参数不是指数组个数，而是指要复制的数据总字节数长度
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int cnt = CompactIntegers(a,n); 
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++)
    {
        cout << (i==0?"":" ") << a[i];
    }
    return 0;
}