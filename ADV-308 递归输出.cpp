#include <bits/stdc++.h>
using namespace std;

void print(string str,int cnt)
{
    if(str.length()==cnt) return;
    cout << str[cnt] << "-";
    print(str,cnt+1);
}

int main()
{
    string n;
    cin >> n;
    print(n,0);
    return 0;
}