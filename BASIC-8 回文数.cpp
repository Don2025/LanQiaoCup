#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Up(i,1,9)    
    {
        Up(j,0,9)
        {
            cout << i << j << j << i << endl;
        }
    }
    return 0;
}