#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a;i <= b; i++)
typedef long long ll;

void ll2s(ll x,string &str)  //把long long转换成string
{
    stringstream ss;
    ss << x;
    ss >> str;
}

bool check(ll x,ll y)  //检查y中是否含有x中的数字
{
    string strx,stry;
    ll2s(x,strx);
    ll2s(y,stry);
    Up(i,0,strx.length()-1)
    {
        if(stry.find(strx[i]) != string::npos)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    Up(i,1,9)    
    {
        Up(j,0,9)
        {
            if(i!=j)
            {
                Up(k,0,9)
                {
                    if(k!=i && k!=j)
                    {
                        Up(l,0,9)
                        {
                            if(l!=i && l!=j && l!=k)
                            {
                                Up(m,0,9)
                                {
                                    if(m!=i && m!=j && m!=k && m!=l)
                                    {
                                        Up(n,0,9)
                                        {
                                            if(n!=i && n!=j && n!=k && n!=l && n!=m)
                                            {
                                                ll x = i*1e5+j*1e4+k*1e3+l*1e2+m*10+n;
                                                ll y = x*x;
                                                if(check(x,y) && x!=203879) cout << x << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}