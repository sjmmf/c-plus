#include<iostream>

using namespace std;
int main(){
    //数组初始化的方式：

    //(1)c语言风格：
    int num1[] = {1,2,3};
    
    //等号可省略：
    int num2[] {1,2,3};

    for(int i:num1){
        cout<<i<<endl;
    }

    for(int i:num2){
        cout<<i<<endl;
    }
}