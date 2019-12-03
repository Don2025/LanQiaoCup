#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;    //名单中的人数
    cin >> N;
    while(N--)
    {
        string name;
        cin >> name;
        if(name == "WYS")
        {
            cout << "KXZSMR" << endl;
        }
        else if(name == "CQ")
        {
            cout << "CHAIQIANG" << endl;
        }
        else if(name == "LC")
        {
            cout << "DRAGONNET" << endl;
        }
        else if(name == "SYT" || name == "SSD" || name == "LSS" || name == "LYF")
        {
            cout << "STUDYFATHER" << endl;
        }
        else
        {
            cout << "DENOMINATOR" << endl;
        }
    }
    return 0;
}
