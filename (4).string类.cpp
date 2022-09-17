#include<iostream>

//使用string类必须包含头文件<string>
//std::string
#include<string>

using namespace std;

int main(){
    string str1;
    //cin  缺点：使用空白（空格、制表符、换行符）确定字符串结束位置
    cin>>str1;   
    cout<<str1;

    cout<<"\n";

    //可以将一个string对象赋给另一个string对象
    string str2;
    str2 = str1;
    cout<<str2;

    cout<<"\n";

    //可以将两个string对象进行拼接
    string str3 = str1 + str2;
    cout<<str3;

    cout<<"\n";

    //使用.size()方法获取string类字符串长度
    cout<<str3.size();

    cout<<"\n";

    cin.get();

    //string类字符串的读入
    //使用getline(cin, str)  
    // 在遇到换行符时停止读取，不保存换行符
    string str4;
    getline(cin,str4);   
    cout<<str4;
}