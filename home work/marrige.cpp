#include<iostream>
using namespace std;
int main(){
    int age;
    char gender;
    cout<<"enter your age";
    cin>>age;
    cout<<"enter your gender(M/F):";
    cin>>gender;
    if(gender=='M'){
        if(age>=21){
            cout<<"eligle for marrige";
        }
        else{
            cout<<"not eligle";
        }
    }
    else if(gender=='F'){
        if(age>=18){
            cout<<"eligle for marrige";
        }
        else{
            cout<<"not eligle";
        }
    }
    else{
        cout<<"invilad gender enter, please enter'M' or 'F'";
    }
}