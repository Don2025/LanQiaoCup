#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;

bool isPrime(int n)
{
    Up(i,2,sqrt(n))
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n,cnt = 0,num = 1;
    cin >> n;
    ll sum = 1;
    while(cnt < n)
    {
        if(isPrime(++num))
        {
            cnt++;
            sum *= num;
        }
    }
    cout << sum%50000 << endl;
    return 0;
}