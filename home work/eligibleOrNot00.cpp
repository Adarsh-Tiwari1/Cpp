#include<iostream>
using namespace std;
int main(){
    int age;
    string choice;
    cout<<"enter your age";
    cin>>age;
    cout<<"type your gender 'male' or 'female' ?? ";
    cin>>choice;
    if(age>=21 && choice=="yes"){
        cout<<"yes you are eligble";
        cout<<"please choice right persion";
    }
    else
    {
        cout<<"no you are not eligble";
    }
}