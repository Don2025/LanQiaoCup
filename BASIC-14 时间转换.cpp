#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    int h = t/3600;
    t %= 3600;
    int m = t/60;
    t %= 60;
    printf("%d:%d:%d\n",h,m,t);    
    return 0;
}