#include<iostream>

using namespace std;

int sum(int,int);   //函数原型

int double_sum(int (*pf)(int, int), int, int);  //函数原型

int main(){
    //声明函数指针
    int (*pf) (int,int) = sum;

    cout<<(*pf)(1,2)<<endl;     //使用时有两种形式
    cout<<pf(1,2)<<endl;

    cout<<double_sum(pf,1,2)<<endl;       //函数指针作为参数传递
}

int sum(int x, int y){
    return x + y;
}

int double_sum(int (*pf)(int, int), int x, int y){
    return 2*(pf)(x,y);
}