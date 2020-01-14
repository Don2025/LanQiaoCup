#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int y)
{
    return (y%4==0 && y%100!=0) || (y%400 == 0);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int y = 1777,m = 4,d = 30;
    int n;
    cin >> n;
    while(--n)
    {
        d++;
        if(m==12 && d==32)   //过年啦~
        {
            y++;
            m = 1;
            d = 1;
            continue;
        }
        if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10) && d==32)    //大月进入下一个月
        {
            m++;
            d = 1;
            continue;
        }
        if((m==4 || m==6 || m==9 || m==11) && d==31)    //小月进入下一个月
        {
            m++;
            d = 1;
            continue;
        }
        if(m==2 && isLeapYear(y) && d==30)   //闰年2月进入下一月
        {
            m++;
            d = 1;
            continue;
        }
        if(m==2 && !isLeapYear(y) && d==29)   //平年2月进入下一月
        {
            m++;
            d = 1;
            continue;
        }
    }
    cout << y << "-" << m << "-" << d << endl;
    return 0;
}