#include<iostream>

//使用clock()返回程序开始执行后所用系统时间
//需引入头文件<ctime>
#include<ctime>

using namespace std;

int main(){
    cout<<"请输入要等待的时间（以秒表示）：";
    float seconds;
    cin>>seconds;

    //clock_t作为clock()返回类型的别名，编译器会将声明的变量转换为long、unsigned int或适合系统的其他类型
    //CLOCKS_PER_SEC表示每秒钟包含的系统时间单位数
    clock_t delay = seconds * CLOCKS_PER_SEC;

    cout<<"开始等待..."<<endl;

    //获取开始时间
    clock_t start = clock();

    while(clock() - start < delay)
        ;
    cout<<"等待结束"<<endl;
}