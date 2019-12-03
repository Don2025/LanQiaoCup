#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)

int main()
{
    string str;
    while(cin >> str && str!="End of file")
    {
        int len = str.length()-1;
        bool flag = true;
        string t = "";
        Up(i,0,len)
        {
            if(!isdigit(str[i]) && str[i]!='.')
            {
                flag = false;
            }
            while(isdigit(str[i]))
            {
                t += str[i];
                i++;
            }
            int _ = atoi(t.c_str());
            t = "";
            if(_<0 || _>255)
            {
                flag = false;
            }
        }
        printf("%s\n",flag?"Y":"N");
    }
    return 0;
}