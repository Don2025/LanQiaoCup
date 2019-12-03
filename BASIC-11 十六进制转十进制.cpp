#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;

int main()
{
    string str;
    cin >> str;
    ll ans = 0;
    int len = str.length()-1;
    Up(i,0,len)
    {
        ans = ans*16 + (isdigit(str[i]) ? str[i]-'0' : str[i]-'A'+10);
    }
    cout << ans << endl;
    return 0;
}
