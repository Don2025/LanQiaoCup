#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int v1,v2,t,s,l;    //兔子速度v1,乌龟速度v2,兔子领先t米后休息s秒,赛道长度l
    cin >> v1 >> v2 >> t >> s >> l;
    int l1 = 0, l2 = 0;    //兔子的跑动距离l1,乌龟跑动距离l2
    bool sleep = false;    //true表示兔子在休息
    int cnt = 0,rest = 0;   //获胜者到达终点耗时cnt,rest统计兔子休息的时间
    while(l1<l && l2 <l)
    {
        if((!sleep && l1-l2<t) || (sleep && rest>=s))    //兔子未拉开t米距离或休息完了
        {
            l1 += v1;
            sleep = false;
            rest = 0;
        }
        else    //兔子在休息
        {
            sleep = true;
            rest++;
        }
        l2 += v2;
        cnt++;
    }
    if(l2 >= l && l1 < l)   //乌龟胜
    {
        cout << "T" << endl;
    }
    else if(l2 < l && l1 >= l)   //兔子胜
    {
        cout << "R" << endl;
    }
    else    //平局
    {
        cout << "D" << endl;
    }
    cout << cnt << endl;
    return 0;
}