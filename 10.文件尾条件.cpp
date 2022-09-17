#include<iostream>

using namespace std;

int main(){
    //windows下文件尾条件为ctrl z + 回车
    //检测文件尾（EOF）可以用cin.eof()或cin.fail()来判断，当检测到EOF时返回true

    char ch;
    int count = 0;
    // cin.get(ch);
    // while(cin.fail()==false){
    //     cout<<ch;
    //     count++;
    //     cin.get(ch);
    // }
    //由于cin.get(char)的返回值为cin，istream类提供了将istream对象转换为bool的函数，所以循环条件可以直接写为cin.get(char)
    while(cin.get(ch)){
        cout<<ch;
        count++;
    }
    cout<<endl<<count<<"个字符";
}