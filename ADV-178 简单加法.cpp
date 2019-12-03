#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int sum = 0;
    Up(i,1,999)
    {
        if(i%3==0 || i%5==0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}