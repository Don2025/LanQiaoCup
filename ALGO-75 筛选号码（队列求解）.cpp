#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    queue<int> q;
    Up(i,1,n)
    {
        q.push(i);
    }
    int cnt = 0;
    while(q.size()!=1)
    {
        cnt++;
        if(cnt%3 != 0)
        {
            q.push(q.front());
            q.pop();
        }
        else
        {
            q.pop();
        }
    }
    cout << q.front() << endl;
    return 0;
}