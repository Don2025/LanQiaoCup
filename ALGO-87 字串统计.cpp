#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int n;
    string str,ans;
    cin >> n >> str;
    int len = str.length()-1, cnt = 0;
    map<string,int> m;
    Up(i,n,len)
    {
        Up(j,0,len-i)
        {
            string _ = str.substr(j,i);
            m[_]++;
            if(m[_] > cnt)
            {
                cnt = m[_];
                ans = _;
            }
            else if(m[_] == cnt)  //���ִ�����ͬʱ,���������
            {
                ans = _.length()<=ans.length() ? ans : _;  //һ��Ҫ<= ��ΪansΪ������ֵ��ַ�
            }
        }
    }    
    cout << ans << endl;
    return 0;
}