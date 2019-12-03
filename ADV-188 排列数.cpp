#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    int n,cnt = 0;
    cin >> n;
    string s = "0123456789";
    do{
        if(++cnt == n)
        {
            cout << s << endl;
            break;
        }
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}