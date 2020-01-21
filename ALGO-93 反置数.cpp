#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    while(n)
    {
        ans = ans*10 + n%10;
        n /= 10;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout << reverse(reverse(a)+reverse(b)) << endl;
    return 0;
}