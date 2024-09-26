#include<iostream>
using namespace std;
int main(){
    int a=10,b=12,r;
    r=a&b;
    cout<<r<<endl;
    r=a|b;
    cout<<r<<endl;
    r=a^b;
    cout<<r<<endl;
    r=~a;
    cout<<r<<endl;
    r=a<<2;
    cout<<r<<endl;
    r=r>>2;
    cout<<r<<endl;
}