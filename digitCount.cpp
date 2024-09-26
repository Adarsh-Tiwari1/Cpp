#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter test number";
    cin>>num;
    if(num>0 && num<=9){
        cout<<"this is single digit number";
    }
    else if(num>=10 && num<=99){
        cout<<"this num is do digit";
    }
    else if(num>=100 && num<=999){
        cout<<"this num is three digit";
    }
    else{
        cout<<"you are digit only three number";
    }
}