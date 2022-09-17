#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main(){
    //c语言风格字符串（数组形式）:
    char str[20];

    //字符串输入：

    //(1)cin  缺点：使用空白（空格、制表符、换行符）确定字符串结束位置
    cin>>str;
    cout<<str;

    cout<<endl;
    cin.get();  //消除上面的回车

    //(2)cin.getline()  两个参数：数组名 + 读取的字符数
    // 在遇到换行符或超出限定字符数时停止读取，不保存换行符，用空字符替换换行符
    cin.getline(str,20);
    cout<<str;

    cout<<endl;
    cin.get();  //消除上面的回车

    //(3)cin.get()  两个参数：数组名 + 读取的字符数
    //注：不能连续两次使用，因为cin.get()会将换行符保留在输入队列中
    //方法：用不含参数的cin.get()消除前一个换行符
    char name1[10],name2[10];

    cin.get(name1,10);
    cin.get();
    cin.get(name2,10);

    cin.get();//消除上面的回车

    //下面这种等效于上面的形式
    cin.get(name1,10).get();
    cin.get(name2,10);

    cin.get();//消除上面的回车

    //同样下面这种效果与上面的一样
    cin.getline(name1,10).getline(name2,10);
    cout<<name1<<"\t"<<name2;
}