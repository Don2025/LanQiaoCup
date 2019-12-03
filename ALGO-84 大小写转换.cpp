#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s;
    getline(cin,s);
    int len = s.length()-1;
    Up(i,0,len)
    {
        if(isupper(s[i]))   //若是大写转小写
        {
            s[i] += 32;
        }
        else    //若是小写转大写
        {
            s[i] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}