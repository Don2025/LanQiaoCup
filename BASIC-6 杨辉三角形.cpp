#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int a[35][36];
    memset(a,0,sizeof(a));
    a[0][0] = 1;
    int n;
    cin >> n;
    Up(i,1,n)
    {
        Up(j,1,i)
        {
            a[i][j] = a[i-1][j]+a[i-1][j-1];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}