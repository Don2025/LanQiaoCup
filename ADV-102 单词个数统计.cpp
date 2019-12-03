#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    stringstream ss;
    ss << str;   //将字符串str放入字符串流ss中
    int cnt = 0; //用来统计单词总数
    string word;
    while(ss >> word)  //从字符串流ss中依次输入word
    {
        cnt++;  //统计单词数
    }
    cout << cnt << endl;
    return 0;
}
