#include <bits/stdc++.h>
using namespace std;

void Swap(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int x,y;
    cin >> x >> y;
    Swap(&x,&y);
    cout << x << " " << y << endl;
    return 0;
}