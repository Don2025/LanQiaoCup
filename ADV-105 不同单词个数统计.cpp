#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    string str;
    getline(cin,str);
    stringstream ss;
    ss << str;   //���ַ���str�����ַ�����ss��
    string word;
    while(ss >> word)  //���ַ�����ss����������word
    {
        s.insert(word);  //�����ʷ���set����ͳ�Ʋ�ͬ������
    }
    cout << s.size() << endl;
    return 0;
}
