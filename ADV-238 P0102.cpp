#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
typedef long long ll;

int main()
{
    string str;   //����һ��16���Ƶ��ַ���
    getline(cin,str);
    int len = str.length()-1;
    ll ans = 0;
    Up(i,0,len)
    {
        ans = ans*16 + (isdigit(str[i]) ? str[i]-'0' : str[i]-'A'+10);
    }
    printf("Hex: 0x%s\n",str.c_str());
    printf("Decimal: %d\n",ans);
    printf("Octal: %04o\n",ans);  //ת��8����
    return 0;
}