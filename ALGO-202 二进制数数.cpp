#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))

string DecToBin(int n)   //将十进制转换成2进制
{
    string ans = "";
    do{
        int t = n%2;
        n /= 2;
        ans += t+'0'; 
    }while(n != 0);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int L,R,cnt = 0;
    cin >> L >> R; 
    Up(i,L,R)
    {
        string s = DecToBin(i);
        int len = s.length()-1;
        Up(j,0,len)
        {
            if(s[j] == '1')
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}