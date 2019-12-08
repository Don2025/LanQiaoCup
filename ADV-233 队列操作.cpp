#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    queue<int> q;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            int _;
            cin >> _;
            q.push(_);
        }
        else if(n == 2)
        {
            if(q.empty())
            {
                cout << "no" << endl;
                return 0;
            }
            else
            {
                int _ = q.front();
                cout << _ << endl;
                q.pop();
            }
        }
        else   //n==3
        {
            cout << q.size() << endl;
        }
    }
    return 0;   
}
