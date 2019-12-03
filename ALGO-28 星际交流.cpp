#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 10001;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;    //外星人的手指数n,科学家告诉你的数m
    cin >> n >> m;
    int a[maxn];
    Up(i,1,n)   //外星人手指排列顺序
    {
        cin >> a[i];
    }
    Up(i,1,m)
    {
        next_permutation(a+1,a+1+n);
    }
    Up(i,1,n)
    {
        cout << (i==1?"":" ") << a[i];
    }
    return 0;
}