#include <bits/stdc++.h>
using namespace std;

struct Complex  //复数结构体
{
    double a,b;   //实部a,虚部b
    Complex(){a=0;b=0;}
};

struct Complex *add(Complex A,Complex B)   //复数加法
{
    Complex *C;
    C->a = A.a+B.a;
    C->b = A.b+B.b;
    return C;
}

struct Complex* sub(Complex A,Complex B)   //复数减法
{
    Complex *C;
    C->a = A.a-B.a;
    C->b = A.b-B.b;
    return C;
}

struct Complex* mul(Complex A,Complex B)   //复数乘法
{
    /*
     复数的乘法运算 z = x * y的运算法则是：
     z.实部 = x.实部 * y.实部 - x.虚部 * y.虚部
     z.虚部 = x.实部 * y.虚部 + x.虚部 * y.实部
     */
    Complex *C;
    C->a = A.a*B.a - A.b*B.b;
    C->b = A.a*B.b + A.b*B.a;
    return C;
}

struct Complex* div(Complex A,Complex B)    //复数除法
{
    /*
     复数的除法运算 z = x / y 的运算法则是：
     z.实部 = (x.实部 * y.实部 + x.虚部 * y.虚部) / (y.实部* y.实部 + y.虚部 * y.虚部)
     z.虚部 = (x.虚部 * y.实部 - x.实部 * y.虚部) / (y.实部 * y.实部 + y.虚部 * y.虚部)
     */
    Complex *C;
    double down = B.a*B.a + B.b*B.b;
    C->a = (A.a*B.a + A.b*B.b) / down;
    C->b = (A.b*B.a - A.a*B.b) / down;
    return C;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    char op;
    Complex A,B;   //复数A、B进行运算的结果为复数指针C指向的内容
    cin >> op >> A.a >> A.b >> B.a >> B.b;
    Complex *C = new Complex();
    switch(op)
    {
        case '+': C = add(A,B); break;
        case '-': C = sub(A,B); break;
        case '*': C = mul(A,B); break;
        case '/': C = div(A,B); break;        
        default : break;
    }
    printf("%.2f+%.2fi\n",C->a,C->b);
    delete C;
    C = NULL;
    return 0;
}