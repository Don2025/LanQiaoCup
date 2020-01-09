#include <bits/stdc++.h>
using namespace std;

int GetTwoInts(int *pa,int *pb)
{
    int a,b;
    cin >> a >> b;
    *pa = a;
    *pb = b;
    return a+b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int *pa = new int;
    int *pb = new int;
    cout << GetTwoInts(pa,pb) << endl;
    delete pa;
    delete pb;
    return 0;
}