#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 31;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a[maxn][maxn];  //原始矩阵
    int b[maxn][maxn];  //临时矩阵
    int c[maxn][maxn];  //结果矩阵
    int n,m;
    cin >> n >> m;
    Up(i,1,n)
    {
        Up(j,1,n)
        {
            cin >> a[i][j];
            c[i][j] = a[i][j];
        }
    }
    if(m == 0)  //若m=0输出单位矩阵
    {
        Up(i,1,n)
        {
            Up(j,1,n)
            {
                cout << (j==1?"":" ") << (i==j?1:0);
            }
            cout << endl;
        }
        return 0;
    }
    while(--m)  //必须--m,因为m--会使m=1出错
    {
        Up(i,1,n)
        {
            Up(j,1,n)
            {
                int sum = 0;
                Up(k,1,n)
                {
                    sum += c[i][k]*a[k][j];
                }
                b[i][j] = sum;
            }
        }
        Up(i,1,n)
        {
            Up(j,1,n)
            {
                c[i][j] = b[i][j];
                b[i][j] = 0;
            }
        }
    }  
    Up(i,1,n)
    {
        Up(j,1,n)
        {
            cout << (j==1?"":" ") << c[i][j];
        }
        cout << endl;
    }
    return 0;
}