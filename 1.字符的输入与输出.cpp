#include<iostream>

int main(){
    using std::cin;
    using std::cout;
    using std::endl;

    char ch;
    //字符串输入的方式：

    //(1)cin    会忽略空格和换行符，并且发送给cin的数据会被缓冲，
    //          只有用户按下回车才会加载到程序中
    cin>>ch;
    cout.put(ch);

    cout<<endl;

    cin.get();  //此处是消除上面用户所按的回车

    //(2)cin.get(char)   不会忽略空格和换行符，但数据还是会先缓冲
    cin.get(ch);
    cout.put(ch);

    cout<<endl;

    cin.get();  //此处是消除上面用户所按的回车

    //(3)ch = cin.get()    不会忽略空格和换行符
    ch = cin.get();
    cout.put(ch);
}