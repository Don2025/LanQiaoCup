#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while(n--)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), greater<int>());  //��������
    for(int i = 0; i < 10; i++)
    {
        printf("%s%d", i==0? "":" ", v[i]);  //ֻ�е�һ������ǰ�治����ո�
    }
    return 0;
}
