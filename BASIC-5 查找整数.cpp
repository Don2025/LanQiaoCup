#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> m;
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(m[temp] == 0)
        {
            m[temp] = i;
        }
    }
    int a;
    cin >> a;
    printf("%d\n", m[a]==0? -1 : m[a]);  //输出a在数列中第一次出现的位置,若没有出现过则输出-1
    return 0;
}
