#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,sum = 0;
    cin >> n;
    int *a = new int[n];
    Up(i,1,n)
    {
        cin >> a[i];
        sum += a[i];
    }      
    double ave = sum/(double)n;
    printf("%d %d\n",sum,(int)ave);
    return 0;
}