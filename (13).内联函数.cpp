#include<iostream>

using namespace std;

//使用内联函数必须在函数声明以及函数定义前加上关键字inline
inline double square(double x) { return x*x; }

int main(){
    double a, b;
    double c =13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c++ = "<<square(c++)<<endl;
    cout<<"now c = "<<c<<endl;
}