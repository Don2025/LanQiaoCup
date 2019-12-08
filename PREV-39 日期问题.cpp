#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int date[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
set<string> s;

bool isLeapYear(int n)
{
    return ((n%4==0&&n%100!=0)||(n%400==0)) ? true : false;
}

void check(int a[])
{
    char c[15];
    int y = a[0];
    y += 1900;
    if(y < 1960)   //说明是2000~2059
    {
        y += 100;
    }
    if(a[1]>=1 && a[1]<=12)   //判断日期是否合理
    {
        int day = date[a[1]];
        if(isLeapYear(a[0]))   //若是闰年
        {
            day++;
        }
        if(a[2]>=1 && a[2]<=day)
        {
            sprintf(c,"%04d-%02d-%02d",y,a[1],a[2]);
            s.insert(string(c));
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[3];
    scanf("%d/%d/%d",&a[0],&a[1],&a[2]);
    check(a);
    swap(a[0],a[2]);
    check(a);
    swap(a[1],a[2]);
    check(a);
    for(set<string>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}