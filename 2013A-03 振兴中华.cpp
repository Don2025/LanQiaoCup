#include <bits/stdc++.h>
using namespace std;

int fun(int x,int y)
{
    if(x==4 || y==5) return 1;
    return fun(x+1,y)+fun(x,y+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cout << fun(1,1) << endl;
    return 0;
}