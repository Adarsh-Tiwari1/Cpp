#include<iostream>
using namespace std;
int main(){
    int cp,dis;
    cout<<"enter cost price";
    cin>>cp;
    if(cp>=0 && cp<=2000){
        dis=cp*(5.0/100);
        cout<<"discount"<<dis<<endl;
        cout<<"you have to pay"<<cp-dis;
    }
    else if(cp>=2001 && cp<=5000){
        dis=cp*(25.0/100);
        cout<<"discoutn"<<dis;
        cout<<"you have to pay"<<cp-dis;
    }
    else if(cp>=5001 && cp<=10000){
        dis=cp*(35.0/100);
        cout<<"discount"<<dis;
        cout<<"you have to pay"<<cp-dis;
    }
    
    else{
        dis=cp*(50.0/100);
        cout<<"discout"<<dis<<endl;
        cout<<"you have to pay"<<cp-dis;
    }
}