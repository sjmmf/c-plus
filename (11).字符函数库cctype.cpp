#include<iostream>

//头文件<cctype>提供了确定字符是否位大小写字母、数字、标点符号等函数
#include<cctype>

using namespace std;

int main(){
    char ch;

    //isalnum() 如果参数是字母或数字，则返回true
    ch = cin.get();
    if(isalnum(ch)){
        cout<<ch<<"是字母或数字"<<endl;
    }

    cin.get();

    //isalpha() 如果参数是字母，则函数返回true
    ch = cin.get();
    if(isalpha(ch)){
        cout<<ch<<"是字母"<<endl;
    }

    cin.get();

    //iscntrl() 如果参数是控制字符(如：tab键，回车键)，则返回true
    ch = cin.get();
    if(iscntrl(ch)){
        cout<<"ch是控制字符"<<endl;
    }

    cin.get();

    //isdigit() 如果参数是数字，则返回true
    ch = cin.get();
    if(isdigit(ch)){
        cout<<ch<<"是数字"<<endl;
    }

    cin.get();

    //islower() 参数如果是小写字母，则返回true
    ch = cin.get();
    if(islower(ch)){
        cout<<ch<<"是小写字母"<<endl;
    }

    cin.get();

    //ispunct() 参数如果是标点符号，则返回true
    ch = cin.get();
    if(ispunct(ch)){
        cout<<ch<<"是标点符号"<<endl;
    }

    cin.get();

    //isspace() 参数如果是标准空白字符（如空格、进纸、换行符、回车、水平制表符、垂直制表符），则返回true
     ch = cin.get();
    if(isspace(ch)){
        cout<<"ch是空白字符"<<endl;
    }

    cin.get();

    //isupper() 参数如果是大写字母，则返回true
    ch = cin.get();
    if(isupper(ch)){
        cout<<ch<<"是大写字母"<<endl;
    }

    cin.get();

    //isxdigit() 参数如果是十六进制数字，则返回true
    char str[] = "54AF";
    for(char ch:str){
        if(isxdigit(ch)){
            cout<<ch<<"是十六进制数字"<<endl;
        }
    }

    //tolower() 大写变小写字母，返回值是int型
    //toupper() 小写变大写字母，返回值是int型
    ch = cin.get();
    if(islower(ch)){
        cout<<ch<<"的大写字母是"<<(char)toupper(ch)<<endl;
    }
    if(isupper(ch)){
        cout<<ch<<"的小写字母是"<<(char)tolower(ch)<<endl;
    }

    return 0;
}