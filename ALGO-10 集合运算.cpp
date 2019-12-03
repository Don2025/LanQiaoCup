#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

void print(vector<int> &v)  //打印vector
{
    int n = v.size()-1;
    Up(i,0,n)
    {
        printf("%d%s",v[i],i==n?"\n":" ");
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    set<int> A,B;   //集合A、B
    Up(i,1,n)
    {
        int _;
        cin >> _;
        A.insert(_); 
    }
    cin >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        B.insert(_);
    }
    vector<int> v1,v2,v3;  //交集v1,并集v2,差集v3
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),back_inserter(v1));  //求A、B的交集
    print(v1);
    set_union(A.begin(),A.end(),B.begin(),B.end(),back_inserter(v2));   //求A、B的并集
    print(v2);
    set_difference(A.begin(),A.end(),B.begin(),B.end(),back_inserter(v3));    //求A、B的差集
    print(v3);
    return 0;
}