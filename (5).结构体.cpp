#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int age;
};

struct widget{
        char brand[20];
        int type;
        //共用体
        union id{
            long id_num;
            char id_char[20];
        }id_val;
};

//枚举
enum choice{id_num = 0,id_char = 1};

int main(){
    //结构数组
    student s[2] {{"lms",18},{"lol",20}};

    for(int i = 0; i < 2; i++){
        cout<<s[i].name<<"\t"<<s[i].age<<endl;
    }

    //结构中的位子段
    //字段的类型应为整数或枚举
    //作用：使得创建与某个硬件设备上的寄存器对应的数据结构非常方便
    struct torgle_register{
        unsigned int SN : 4;
        unsigned int : 4;
        bool goodIn : 1;
        bool goodTorgle : 1;
    };

    widget prize {"lms"};
    cout<<"请输入商品类型："<<endl;
    cin>>prize.type;

    if(prize.type == id_num){
        cin>>prize.id_val.id_num;
        cout<<prize.id_val.id_num;
    } else if(prize.type == id_char){
        cin>>prize.id_val.id_char;
        cout<<prize.id_val.id_char;
    }else{
        cout<<"输入错误"<<endl;
    }

    
}