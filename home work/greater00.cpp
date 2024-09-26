
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three number";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is gratesg";
    }
    else if(b>a && b>c){
        cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greates "; 
    }
}



/*
#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter number";
    cin>>a>>b>>c;
    if(a>b && a>b){
        cout<<a<<" is max";
    }
    else if(b>a && b>c){
        cout<<b<<" is max";
    }
    else{
        cout<<c<<" is max";
    }
}
*/


#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter test number";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is greater";
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greater";
    }
    else if(c>a && c>b)
    {
        cout<<c<<" is greater";
    }
    else{
        cout<<"please enter valid number";
    }             
}