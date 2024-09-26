#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"entet charactet";
    cin>>ch;
   if(ch>='A' && ch<='Z'){
    cout<<"upper case";
   }
   else if(ch>='a' && ch<='z'){
    cout<<"lower case";
   }
}