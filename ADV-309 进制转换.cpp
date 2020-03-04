#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "";
    while(n)
    {
        char _ = (n%8)+'0';
        ans = _ + ans;
        n/=8;
    }
    ans = "0" + ans;
    cout << ans << endl;
    return 0;
}