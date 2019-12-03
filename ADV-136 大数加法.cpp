#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 1006;
int a[maxn],b[maxn];

int main()
{
    string sa,sb;
    cin >> sa >> sb;
    int lensa = sa.length()-1;
    int lensb = sb.length()-1;
    Up(i,0,lensa)   //逆序存入a
    {
        a[lensa-i] = sa[i]-'0';
    }
    Up(i,0,lensb)   //逆序存入b
    {
        b[lensb-i] = sb[i]-'0';
    }
    Up(i,0,maxn-1)   //相加、进位
    {
        b[i] += a[i];
        if(b[i] >= 10)   //进位操作
        {
            b[i+1] += b[i]/10;
            b[i] %= 10;
        }
    }
    //输出结果
    int i = maxn-1;
    while(i>0 && b[i]==0)   //忽略前置0
    {
        i--;
    }
    for( ; i >= 0; i--)  
    {
        cout << b[i];
    }
    cout << endl;
    return 0;
}