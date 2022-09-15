#include<iostream>
#include<string>

using namespace std;

int main(){
    //为指针分配空间
    //typeName * pointer_name = new typeName
    int *pn = new int;
    (*pn) = 1;
    cout<<(*pn)<<endl;
    delete(pn);   //记得手动释放内存

    //使用new来创建动态数组
    //typeName * pointer_name = new typeName [num_elements]
    int *psome = new int [10];
    for(int i = 0; i < 10; i++){
        psome[i] = i;
        cout<<psome[i]<<"\t";
    }
    delete [] psome;  //数组的释放形式

    cout<<endl;

    //使用new创建动态结构
    struct student{
        string name;
        int age;
    };

    student *s = new student;
    getline(cin,s->name);
    cin>>s->age;
    cout<<s->name<<"\t"<<s->age<<endl;

    delete s;
}