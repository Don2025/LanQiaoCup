#include <bits/stdc++.h>
using namespace std;

int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isLeapYear(int y)   //判断闰年
{
    return (y%4==0 && y%100!=0)||(y%400==0);
}

int getDays(int y,int m,int d)   //计算是这一年的第几天
{
    int sum = 0;
    if(isLeapYear(y))  //闰年2月有29天
    {
        a[2]++;
    }
    for(int i = 1; i < m; i++)
    {
        sum += a[i];
    }
    sum += d;
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int y,m,d;
    cin >> y >> m >> d;
    cout << getDays(y,m,d) << endl;
    return 0;
}