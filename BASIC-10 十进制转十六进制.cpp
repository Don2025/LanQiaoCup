#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "";
    do{
        int _ = n%16;
        n /= 16;
        if(_ >= 0 && _ <= 9)
        {
            ans += (_+'0');
        }
        else
        {
            ans += (_-10+'A');
        }
    }while(n != 0);
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}