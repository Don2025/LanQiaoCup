#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

//万恶的TLE 超时了
// bool isPrime(int n)    
// {
//     if(n <= 1) return false;
//     Up(i,2,sqrt(n))
//     {
//         if(n%i == 0) return false;
//     }
//     return true;
// }

int isPrime(int n)  //很神奇,以后我不要用上面的方法来判断素数啦
{
    if(n <= 1) return 0;
    else if(n==2 || n==3) 
    {
        return 1;
    }
    else
    {
        for(int i = 2; i*i < n; i++)
        {
            if(n%i == 0) return 0;
        }
        return 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int a,b;
    cin >> a >> b;
    Up(i,a,b)
    {
        int _ = i;
        cout << _ << "=";
        bool virgin = true;
        while(_ != 1)
        {
            Up(j,2,_)
            {
                if(isPrime(j) && _%j==0)
                {
                    _ /= j;
                    cout << (virgin?"":"*") << j;
                    virgin = false;
                    break;
                }
            }
        }
        cout << endl;
    }  
    return 0;
}