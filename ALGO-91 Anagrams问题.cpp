#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
const int n = 26;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string sa,sb;
    getline(cin,sa);
    getline(cin,sb);
    int lena = sa.length();
    int lenb = sb.length();
    int a[n] = {0};
    int b[n] = {0};
    if(lena != lenb)
    {
        cout << "N" << endl;
        return 0;
    }
    transform(sa.begin(),sa.end(),sa.begin(),::tolower);
    transform(sb.begin(),sb.end(),sb.begin(),::tolower);
    Up(i,0,lena-1)
    {
        a[sa[i]-'a']++;
        b[sb[i]-'a']++;
    }
    bool anagrams = true;
    Up(i,0,n-1)
    {
        if(a[i] != b[i])
        {
            anagrams = false;
            break; 
        }
    }
    cout << (anagrams?"Y":"N") << endl;
    return 0;
}