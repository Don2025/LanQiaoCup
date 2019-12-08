#include <bits/stdc++.h>
using namespace std;
 
int Fib(int n)
{
    //a作为f(n),b作为f(n+1)
    int a = 1, b = 1;
    for (int i = 1; i < n; i++)
    {
        swap(a,b);  //更新f(n)
        b = (a+b)%10007;  //更新f(n+1)
    }
    return a;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    cout << Fib(n) << endl;
    return 0;
}