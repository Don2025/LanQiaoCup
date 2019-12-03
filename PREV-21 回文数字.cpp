#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    if(n > 54)
    {
        cout << -1 << endl;
        return 0;
    }
    Up(i,1,9)
    {
        Up(j,0,9)
        {
            Up(k,0,9)
            {
                if((i+j+k+j+i) == n)
                {
                    cout << i << j << k << j << i << endl;
                }
            }
        }
    }
    Up(i,1,9)
    {
        Up(j,0,9)
        {
            Up(k,0,9)
            {
                if((i+j+k+k+j+i) == n)
                {
                    cout << i << j << k << k << j << i << endl;
                }
            }
        }
    }
    return 0;
}