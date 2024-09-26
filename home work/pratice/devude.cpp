/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"devide by 5 and 3";
    }
    else{
        cout<<"can not devide by 5 and 3";
    }
}

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    if(num%5==0){
        cout<<"this number divide by 5";
    }
    else if(num%3==0){
        cout<<"this number divide by 3";
    }
    else{
        cout<<"please enter valid number";
    }
}