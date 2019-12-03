#include <bits/stdc++.h>
using namespace std;

int arr2num(int a[])   //把数组中的数按照下标顺序组成一个新的数字
{
    int n = 0;
    for(int i = 0; i < 4; i++)
    {
        n = n*10 + a[i];
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    int a[4];
    int cnt = 0;   //经过cnt次变换能得到6174
    do{
        for(int i = 0; i < 4; i++)   //把各位数存入数组里面
        {
            a[i] = n%10;
            n /= 10;
        }
        sort(a,a+4);   //升序排列
        int x = arr2num(a);   //得到由数组a中元素组成的最大数字
        sort(a,a+4,greater<int>());  //降序排列
        int y = arr2num(a);  //得到由数组a中元素组成的最小数字
        n = y-x;   //作差得到一个新的四位数
        cnt++;
    }while(n != 6174);
    cout << cnt << endl;
    return 0;
}
