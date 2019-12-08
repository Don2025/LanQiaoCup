#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 201;

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

    int a[maxn][maxn],b[maxn][maxn],c[maxn][maxn];
    ms(a,0);
    ms(b,0);
    ms(c,0);
    int m,s,n;
    cin >> m >> s >> n;
    Input(a,m,s);
    Input(b,s,n);
    Up(i,1,m)
    {
        Up(j,1,n)
        {
            Up(k,1,s)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    Print(c,m,n);
    return 0;
}