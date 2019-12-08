#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 100001;

int dp[maxn][2];   //dp[i][0]�ǲ�ȡ���i�Ľ��,dp[i][1]��ȡ���i�Ľ��
vector<vector<int> > v;   //v[i]��������i�ĺ��ӽ��

void dfs(int node,int pre)
{
    Up(i,0,v[node].size()-1)
    {
        int _ = v[node][i];
        if(_ != pre)
        {
            dfs(_,node);
            dp[node][0] += max(dp[_][0],dp[_][1]);
            dp[node][1] += dp[_][0];  //ȡ�õ�Ͳ���ȡ���ڽ��
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    Up(i,1,n)
    {
        cin >> dp[i][1];
    }
    v.resize(n+1);
    Up(i,1,n-1)
    {
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);
    cout << max(dp[1][0],dp[1][1]) << endl;
    return 0;
}
