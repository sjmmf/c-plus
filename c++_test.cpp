#include<iostream>
#include<string>
#include<array>
#include<cstring>

using namespace std;

int main(){
   int ch;
   ch = cin.get();
   while(ch != EOF){
    cout.put(ch);
    ch = cin.get();
   }
   cout<< endl;
   cout <<"characters read";
   return 0;
}