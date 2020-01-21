#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;    //学生人数n
    cin >> n;
    map<string,string> m1;   //根据学号和姓名查询性别
    map<string,string> m2;   //根据学号查询姓名或根据姓名查询学号
    while(n--)
    {
        string name,id,sex;
        cin >> name >> id >> sex;
        m1[name] = sex;
        m1[id] = sex;
        m2[name] = id;
        m2[id] = name;
    }
    int m;
    cin >> m;
    while(m--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        if(m2[s1]!=s2 && m1[s1]!=m1[s2])
        {
            cout << "Y" << endl;
        }
        else cout << "N" << endl;
    }
    return 0;
}