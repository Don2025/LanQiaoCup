#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define Down(i,a,b) for(int i = a; i >= b; i--)

void fun(int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    fun(n);
    return 0;
}

void fun(int n)
{
    int s[100] = {0};
    int i = 0;
    if(n == 0)
    {
        cout << "";
    }
    else
    {
        while(n)
        {
            s[i++] = n%2;
            n /= 2;
        }
        int t = 0;
        Up(j,0,i-1)
        {
            if(s[j] == 1)
            {
                t = j;
                break;
            }
        }
        Down(j,i-1,t+1)
        {
            if(s[j])
            {
                if(j == 1)
                {
                    cout << "2+";
                }
                else if(j == 2)
                {
                    cout << "2(2)+";
                }
                else
                {
                    cout << "2(";
                    fun(j);
                    cout << ")+";
                }
            }
        }
        if(t == 0)
        {
            cout << "2(0)";   
        }
        else if(t == 1)
        {
            cout << "2(1)";
        }
        else if(t == 2)
        {
            cout << "2(2)";
        }
        else
        {
            cout << "2(";
            fun(t);
            cout << ")";
        }
    }
}