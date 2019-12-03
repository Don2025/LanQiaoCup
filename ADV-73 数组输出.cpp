#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][4];
    int ans = -1e5,pos1,pos2;   //绝对值最大的元素ans及其下标(pos1,pos2)
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            if(abs(a[i][j]) > ans)
            {
                ans = abs(a[i][j]);
                pos1 = i+1;
                pos2 = j+1;
            }
        }
    }
    printf("%d %d %d\n",ans,pos1,pos2);
    return 0;
}
