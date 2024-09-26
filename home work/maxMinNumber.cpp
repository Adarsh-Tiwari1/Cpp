#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a number ";
    cin>>a;
    cout<<"enter b number ";
    cin>>b;
    if(a>b){
        cout<<a<<" is max";
    }
    else if(a<b){
        cout<<b<<" is max";
    }
    else{
        cout<<"number is equal";
    }
}