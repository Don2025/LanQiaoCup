#include <bits/stdc++.h>
using namespace std;

int getSum(int n)   //�õ���λ����������
{
    int sum = 0;
    while(n)
    {
        int temp = n%10;
        sum += temp*temp*temp;
        n /= 10;
    }
    return sum;
}

int main()
{
    for(int i = 100; i < 1000; i++)
    {
        if(getSum(i) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
