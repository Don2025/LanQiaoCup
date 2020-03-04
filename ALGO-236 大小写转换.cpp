#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string str;
    while (getline(cin,str))
    {
        int len = str.length();
        for(int i = 0; i < len; i++)
        {
            if(islower(str[i]))
            {
                str[i] -= 32;
            }
            else str[i] += 32;
        }
        cout << str << endl;
    }
    return 0;
}