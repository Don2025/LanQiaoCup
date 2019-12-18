#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)  
{
    return !b ? a : gcd(b, a%b);
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a,b;   //俩种包装中糖的颗数
    cin >> a >> b;
    cout << lcm(a,b)-a-b << endl;
    //直接cout << a*b-a-b << endl;也能AC
    //扩展欧几里得定理：若自然数a,b互质,则不能表示为ax+by(x,y>0)的最大整数是a*b-a-b
    return 0;
}