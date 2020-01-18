#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string str;
    getline(cin,str);
    int len = str.length();
    Up(i,1,len)
    {
        if(len%i == 0)
        {
            bool flag = true;
            Up(j,i,len-1)
            {
                if(str[j%i] == str[j]) continue;
                else
                {
                    flag = false; 
                    break;
                }
            }
            if(flag)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}