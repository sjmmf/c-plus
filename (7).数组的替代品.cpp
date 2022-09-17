#include<iostream>

//模板类vector：也是一种动态数组，是使用new创建动态数组的替代品
//内存的申请和释放时自动完成的
//vector<typeName> vt(n_elem)  其中n_elem可以是整型常量，也可以是整型变量
//需引入头文件<vector>
#include<vector>

//模板类array
//array<typeName, n_elem> arr 其中n_elem不能是变量
//需引入头文件<array>
#include<array>


using namespace std;

int main(){
    vector<int> vi(5);
    for(int i:vi){
        i = 1;
        cout<<i<<"\t";
    }

    cout<<endl;

    array<int, 5> arr;
    for(int i = 0; i < 5; i++){
        arr[i] = i;
        cout<<arr[i]<<"\t";
    }
}

