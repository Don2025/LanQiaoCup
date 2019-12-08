#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 101;

void Input(int a[][maxn],int row,int col)
{
    Up(i,1,row)
    {
        Up(j,1,col)
        {
            cin >> a[i][j];
        }
    }
}

void Print(int a[][maxn],int row,int col)
{
    Up(i,1,row)
    {
        Up(j,1,col)
        {
            cout << (j==1?"":" ") << a[i][j];
        }
        cout << endl;
    }    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn][maxn];
    ms(a,0);
    int n,m;
    cin >> n >> m;
    Input(a,n,m);
    Up(i,1,n)
    {
        Up(j,1,m)
        {
            int _;
            cin >> _;
            a[i][j] += _;
        }
    }
    Print(a,n,m);
    return 0;
}