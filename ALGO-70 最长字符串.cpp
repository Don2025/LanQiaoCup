#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string ans = "";
    Up(i,1,5)
    {
        string s;
        cin >> s;
        if(s.length() > ans.length())
        {
            ans = s;
        }
    }
    cout << ans << endl;
    return 0;
}