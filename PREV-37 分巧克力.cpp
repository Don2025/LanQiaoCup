#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define P pair<int,int>  //first是巧克力的高、second是巧克力的宽
#define mp(x,y) make_pair(x,y)   
const int maxn = 100001;

vector<P> v;    //用来记录巧克力的信息
int n,k;    //n块巧克力,k个小朋友

int check(int x)    
{
    int ans = 0;    //边长为x的巧克力数量
    Up(i,0,n-1)
    {
        ans += (v[i].first/x)*(v[i].second/x);
        if(ans >= k) break;
    }
    return ans-k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n >> k;    
    Up(i,1,n)
    {
        int h,w;
        cin >> h >> w;
        v.push_back(mp(h,w));
    }
    int l = 1, r = maxn;
    while(l <= r)   //二分查找够小朋友分的巧克力最大边长
    {
        int mid = (l+r)/2;
        if(check(mid)>=0 && check(mid+1)<0) 
        {
            cout << mid << endl;
            return 0;
        }
        else if(check(mid) < 0)  
        {
            r = mid-1;
        }
        else if(check(mid) >= 0)
        {
            l = mid+1;
        }
    }
    return 0;
}