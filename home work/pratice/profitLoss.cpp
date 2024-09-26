#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cp";
    cin>>cp;
    cout<<"enter sp";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }
    else if(sp<cp){
        cout<<"loss";
    }
    else{
        cout<<"enqual";
    }
}