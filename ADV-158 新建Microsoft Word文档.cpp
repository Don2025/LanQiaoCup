#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 2021;

bool vis[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ms(vis,false);
    int n;
    cin >> n;
    while(n--)
    {
        string str;
        cin >> str;
        if(str == "New")
        {
            Up(i,1,maxn)
            {
                if(!vis[i])
                {
                    cout << i << endl;
                    vis[i] = true;
                    break;
                }
            }
        }
        else if(str == "Delete")
        {
            int _;
            cin >> _;
            if(vis[_])
            {
                vis[_] = false;
                cout << "Successful" << endl;
            }
            else
            {
                cout << "Failed" << endl;
            }
        }
    }
    return 0;
}