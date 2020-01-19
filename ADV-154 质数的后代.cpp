#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int maxn = 1e5+1;

int a[maxn];    //若a[i]=0说明i是质数
vector<int> v;

void getPrime()
{
    a[0] = a[1] = 1;
    for(int i = 2; i*i < maxn; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i*i; j < maxn; j+=i)
            {
                a[j] = 1;
            }
        }
    }
    for(int i = 2; i < maxn; i++)
    {
        if(a[i]==0) v.push_back(i);
    }
}

bool check(int n)
{
    Up(i,0,v.size()-1)
    {
        if(n%v[i]==0 && a[n/v[i]]==0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    ms(a,0);
    getPrime();
    while(t--)
    {
        int n;
        cin >> n;
        cout << (check(n)?"Yes":"No") << endl;
    }
    return 0;
}
