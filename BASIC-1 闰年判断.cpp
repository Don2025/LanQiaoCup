#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    printf("%s\n",((y%4==0&&y%100!=0)||y%400==0)?"yes":"no");
    return 0;
}