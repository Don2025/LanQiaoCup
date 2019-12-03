#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
    int len1 = s1.length(), len2 = s2.length();
    if(len1 != len2)    //长度不等
    {
        cout << 1 << endl;
        return 0;
    }
    if(s1==s2)   //长度相等且字符完全一致(区分大小写)
    {
        cout << 2 << endl;
        return 0;
    }
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1 == s2)    //长度相等且字符不区分大小写时才完全一致
    {
        cout << 3 << endl;
    }
    else    //长度相等且字符串不区分大小写也不一致
    {
        cout << 4 << endl;
    }
    return 0;
}