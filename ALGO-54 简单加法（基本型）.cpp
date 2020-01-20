#include <bits/stdc++.h>
using namespace std;

int getLen(int n)
{
    if(n == 0) return 1;
    int cnt = 0;
    while(n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

bool isEasy(int i)   //判断(i)+(i+1)+(i+2)是不是个简单加法
{
    int sum = 3*i+3;
    return getLen(i)==getLen(sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        if(isEasy(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}