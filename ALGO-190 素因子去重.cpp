#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,p = 1;
    cin >> n;
    for(ll i = 2; i*i <= n; i++)  
    {
        if(n%i == 0)   //iÎªËØÊý
        {
            p *= i;
            while(n%i == 0)
            {
                n /= i;
            }
        }
    }
    cout << p*n << endl;
    return 0;
}