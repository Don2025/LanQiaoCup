#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    priority_queue<int,vector<int>,greater<int> > pq;    //升序排列的优先队列
    int n;
    cin >> n;
    Up(i,1,n)
    {
        int _;
        cin >> _;
        pq.push(_);
    }
    int sum = 0;
    while(pq.size() != 1)
    {
        int _ = pq.top();
        pq.pop();
        _ += pq.top();
        pq.pop();
        pq.push(_);
        sum += _;
    }
    cout << sum << endl;
    return 0;
}