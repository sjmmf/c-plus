#include<iostream>
#include<array>

using namespace std;

int main(){
    //类比于java中的foreach语句

    array<int, 5> arr = {1,2,3,4,5};
    //只读不修改:
    for(int i: arr){
        cout<<i<<"\t";
    }

    cout<<endl;

    //进行内容修改要使用引用变量，即变量前加一个&
    for(int &i: arr){
        i *= 2;
        cout<<i<<"\t";
    }

    
}