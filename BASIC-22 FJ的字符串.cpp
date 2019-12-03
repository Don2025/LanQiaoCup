#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

void fun(int n)
{
    if(n >= 1)
    {
        fun(n-1);   //前半部分
        printf("%c",'A'+n-1);
        fun(n-1);  //后半部分
    }
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}