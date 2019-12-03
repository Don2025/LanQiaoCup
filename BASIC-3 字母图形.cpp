#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m;    //n行m列
    cin >> n >> m;
    Up(i,1,n)
    {
        Up(j,1,m)
        {
            cout << char('A'+abs(i-j));
        }
        cout << endl;
    }
    return 0;
}