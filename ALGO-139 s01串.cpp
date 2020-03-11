#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s = "0";
    int n;
    cin >> n;
    while(n--)
    {
        string t = "";
        for(int i = 0; i < s.length(); i++)
        {
            t += (s[i]=='0') ? "1" : "01";
        }
        s = t;
    }
    cout << s << endl;
    return 0;
}