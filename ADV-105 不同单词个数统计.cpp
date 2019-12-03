#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    string str;
    getline(cin,str);
    stringstream ss;
    ss << str;   //将字符串str放入字符串流ss中
    string word;
    while(ss >> word)  //从字符串流ss中依次输入word
    {
        s.insert(word);  //将单词放入set中来统计不同单词数
    }
    cout << s.size() << endl;
    return 0;
}
