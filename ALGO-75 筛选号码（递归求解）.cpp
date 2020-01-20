#include <bits/stdc++.h>
using namespace std;

int Joseph(int sum,int cnt,int n)   //总人数sum,数到cnt出圈,存活人数n
{
    return n==1 ? (sum+cnt-1)%sum : (Joseph(sum-1,cnt,n-1)+cnt)%sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    cout << Joseph(n,3,n)+1 << endl;
    return 0;
}