#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int maxn = 19;
int dp[maxn][maxn];

int main()
{
    memset(dp,0,sizeof(dp)); 
    int m,n;   //��Ьm��,��Ьn��
    cin >> m >> n;
    Up(i,0,maxn-1)
    {
        dp[i][0] = 1;   //��m=0ʱ,��ֻ���˻�Ь��ʱ��,ֻ��һ���ŷ�
    }
    Up(i,1,maxn-1)
    {
        Up(j,1,maxn-1)
        {
            //����Ь���˱Ƚ�Ь���˶��ʱ��,��Ь���Ь���˼���һ��״̬�ټ�����
            if(i >= j) dp[i][j] = dp[i-1][j]+dp[i][j-1];  
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}