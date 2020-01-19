#include <bits/stdc++.h>
using namespace std;

int getWeek(int y,int m,int d)   //利用基姆拉尔森计算公式计算出星期几
{
    if(m==1 || m==2)
    {
        m += 12;
        y--;
    }
    return (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int y,m,d;
    cin >> y >> m >> d;
    cout << getWeek(y,m,d) << endl;
    return 0;
}