#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("*%s",j==1?"\n":" ");
        }
    }
    return 0;
}