#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    double x1,y1,x2,y2,x3,y3,x4,y4,area = 0; 
    cin >> x1 >> y1 >> x2 >> y2;   //第一个矩形
    cin >> x3 >> y3 >> x4 >> y4;   //第二个矩形
    double lx = max(min(x1,x2),min(x3,x4));    //相交矩阵左下角的横坐标lx  
    double ly = max(min(y1,y2),min(y3,y4));    //相交矩阵左下角的纵坐标ly
    double rx = min(max(x1,x2),max(x3,x4));    //相交矩阵右上角的横坐标rx
    double ry = min(max(y1,y2),max(y3,y4));    //相交矩阵右上角的纵坐标ry
    if(lx<rx && ly<ry)
    {
        area = abs(rx-lx)*abs(ry-ly);
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << area << endl;
    return 0;
}