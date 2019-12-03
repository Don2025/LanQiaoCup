#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int a[3];
    Up(i,0,2)
    {
        cin >> a[i];
    }
    sort(a,a+3,greater<int>());
    Up(i,0,2)
    {
        printf("%s%d",i==0?"":" ",a[i]);
    }
    return 0;
}