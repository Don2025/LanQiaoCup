#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

void fun(int n)
{
    if(n >= 1)
    {
        fun(n-1);   //ǰ�벿��
        printf("%c",'A'+n-1);
        fun(n-1);  //��벿��
    }
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}