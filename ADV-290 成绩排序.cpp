#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

struct stu
{
    int id,chinese,math,english;
};

bool cmp(stu a,stu b)
{
    if(a.math != b.math)
    {
        return a.math > b.math;
    }
    else if(a.english != b.english)
    {
        return a.english > b.english;
    }
    else if(a.chinese != b.chinese)
    {
        return a.chinese > b.chinese;
    }
    else 
    {
        return a.id < b.id;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;  
    cin >> n;    
    vector<stu> v;
    Up(i,1,n)
    {
        stu t;
        t.id = i;
        cin >> t.math >> t.english >> t.chinese;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);   //根据成绩进行排序
    Up(i,0,n-1)
    {
        cout << v[i].math << " " << v[i].english << " " << v[i].chinese << " " << v[i].id << endl;
    }
    return 0;
}