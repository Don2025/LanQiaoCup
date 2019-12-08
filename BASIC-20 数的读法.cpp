#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string wei[11] = {"","","shi","bai","qian","wan","shi","bai","qian","yi","shi"};
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        int n = s[i]-'0';
        if(n == 0)
        {
            if(i+1<len && s[i+1]!='0')
            {
                cout << num[n] << " ";
            }
        }
        else if(n==1 && s[i-1]=='0')
        {
            cout << num[n] << " " << wei[len-i];
        }
        else if(n==1 && (len-i==2 || len-i==6 || len-i==10))
        {
            cout << wei[len-i] << " ";
        }
        else 
        {
            cout << num[n] << (i<len-1?" ":"") << wei[len-i] << (i<len-1?" ":"\n");
        }
    }
    return 0;
}
