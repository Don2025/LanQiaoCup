#include <bits/stdc++.h>
using namespace std;
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 11;

int a[maxn];

void qSort(int left,int right)    //快速排序
{
    if(left > right) return;
    int t = a[left],l = left,r = right;
    while(l < r)
    {
        while(l<r && a[r]>=t) r--;  //寻找右边小于基准数的数
        while(l<r && a[l]<=t) l++;  //寻找左边大于基准数的数
        if(l < r) swap(a[l],a[r]);
    }
    a[left] = a[l], a[l] = t;   //基准数归位
    qSort(left,l-1);
    qSort(l+1,right);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(a,INF);    
    int n,cnt = 0;
    while(cin >> n && n)
    {
        a[cnt++] = n;
    }
    qSort(0,cnt);
    for(int i = 0; i < cnt; i++)
    {
        cout << (i==0?"":" ") << a[i];
    }
    return 0;
}