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
    printf("%d\n", m[a]==0? -1 : m[a]);  //���a�������е�һ�γ��ֵ�λ��,��û�г��ֹ������-1
    return 0;
}
