#include<iostream>
using namespace std;
int main(){           
    char choice;
    int l,b,s;
    cout<<"select any one of them rectangle -->'R' , square --> 'S' ";
    cin>>choice;
    switch(choice){
    case 'R' :cout<<"enter 'A' for area ,'P' for perimeter:";
              cin>>choice;
              cout<<"enter length and breadth:";
              cin>>l>>b;
              switch(choice){
                case 'A': cout<<"Area:"<<l*b;break;
                case 'P': cout<<"perimeter:"<<2*(l+b);break;
              }      
              break;
    case 'S': cout<<"enter 'A' for area ,'P' for perimeter:";
              cin>>choice;
             cout<<"enter side";
             cin>>s;
             switch(choice){
             case 'A' :cout<<"areaL"<<s*s;break;
             case 'P' : cout<<"perimeter:"<<2*(l+b);break;
    }
    break;
  }
}