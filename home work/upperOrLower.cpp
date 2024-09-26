/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"upper case";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"lower case";
    }
}
*/

/*

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"upper case";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"lower case";
    }
    else {
        cout<<"please enter valid character";
    } 
}

*/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter test character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"this is upper case";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"this is lower case";
    }
    else{
        cout<<"please enter valid character";
    }
}