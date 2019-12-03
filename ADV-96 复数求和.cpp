#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a = 0, b = 0;  //a为实部、b为虚部
    while(N--)
    {
        int temp;
        cin >> temp;
        a += temp;
        cin >> temp;
        b += temp;
    }   
    printf("%d+%di\n",a,b);
    return 0;
}
