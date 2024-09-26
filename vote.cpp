 /*
   #include<iostream>
using namespace std;
int main(){
    int age;
    string choice;
    cout<<"enter your age:";
    cin>>age;
    cout<<"are you indian type 'yes' or 'no' ?? ";
    cin>>choice;
    if(age>=18 && choice=="yes"){
        cout<<"yes you are eligible\n";
        cout<<"please vote to rigth person";
    }
    else{
        cout<<"no you are not eligible ";
    }


}
*/

/*
 #include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=18){
        cout<<"please you can vote";
    }
    else if(age>12 && age<17){
        cout<<"you can no vote";
    }
    else{
        cout<<"you are child";
    }
}
*/

/*

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age";
    cin>>age;
    if(age>=18){
        cout<<"please you can vote";
    }
    else if(age>=12 && age<=17){
        cout<<"you can not vote here";
    }
    else if(age>=1 && age<=11) {
        cout<<"you are child";
    }
    else {
        cout<<"please enter valid key";
    }
}

*/

#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age";
cin>>age;
if(age>=18){
    cout<<"please you can vote ";
}
else if(age>=12 && age<=17){
    cout<<"you can not vote";
}
else{
    cout<<"you are child";
}
}