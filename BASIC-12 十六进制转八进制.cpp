#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
const int INF = 0x3f3f3f3f;
const int maxn = 100001;

void putans(char *s)
{
    int ans = 0;
    Up(i,0,2)
    {
        ans = ans*16 + (isdigit(s[i]) ? (s[i]-'0') : (s[i]-'A'+10));
    }
    printf("%04o",ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        char s[maxn];
        cin >> s;
        int len = strlen(s);
        int flen = (len-1)%3;
        int ans = 0;
        Up(i,0,flen)
        {
            ans = ans*16 + (isdigit(s[i]) ? (s[i]-'0') : (s[i]-'A'+10));
        }
        printf("%o",ans);
        for(int i = flen+1; i < len; i += 3)
        {
            putans(s+i);
        }
        printf("\n");
    }
    return 0;
}