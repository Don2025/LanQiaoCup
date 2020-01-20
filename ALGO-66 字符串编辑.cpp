#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string str;
    getline(cin,str);
    char ch;
    cin >> ch;
    if(ch == 'D')
    {
        char x;    //删除第一次出现的字符x
        cin >> x;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == x)
            {
                str = str.substr(0,i)+str.substr(i+1);
                break;
            }
        }
    }
    else if(ch == 'I')
    {
        char x,y;   //在最后一个字符x前面插入y
        cin >> x >> y;
        for(int i = str.length()-1; i >= 0; i--)
        {
            if(str[i] == x)
            {
                str = str.substr(0,i)+y+str.substr(i);
                break;
            }
        }
    }
    else if(ch == 'R')
    {
        char x,y;   //将所有的字符x替换成字符y
        cin >> x >> y;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == x)
            {
                str[i] = y;
            }
        }
    }
    cout << str << endl;
    return 0;
}