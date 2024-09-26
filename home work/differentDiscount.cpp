/*

#include<iostream>
using namespace std;
int main(){
    string name,address;
    char ch;
    double discount, amount;
    cout<<"enter name,addrss";
    cin>>name>>address;
    cout<<"enter category 'L' for laptop 'D' for disktop";
    cin>>ch;   
    cout<<"enter amount";
    cin>>amount;
    if(ch=='L'){
        if(amount>0 && amount<25000)
        discount=0;
        else if(amount>=25001 && amount<=57000)
        discount=amount*(5.0/100);
         else if(amount>=57001 && amount<=100000)
        discount=amount*(7.5/100);
         else if(amount>10000)
        discount=amount*(10.0/100);
    } 
    cout<<"_________Bill__________";
    cout<<"Name:"<<name<<"address"<<address<<endl;
    cout<<"discount:"<<discount<<"pay"<<amount-discount;
}

*/

/*

#include<iostream>
using namespace std;
int main(){
    int price,dis;
    char ch;
    cout<<"enter your peice\n";
    cin>>price;
    cout<<"enter your device l for laptop  d for disktop";
    cin>>ch;
    if(ch=='l'){
        if(price>0 && price<25000){
            dis=0;
        }
        else if(price>=25000 && price<50000){
            dis=price*(10.0/100);          
        }
        else if(price>=50000 && price<100000){
            dis=price*(25.0/100);
        }
        else if(price>=100000){
            dis=price*(50.0/100);
        }
        cout<<"----------Bull----------\n";
        cout<<"discount"<<"pay"<<price-dis;
        
    }

}
*/

/*

#include<iostream>
using namespace std;
int main(){
    int price,dis;
    char ch;
    cout<<"enter your price";
    cin>>price;
    cout<<"enter your device name l or d ";
    if(ch=='L'){
        if(price>0 && price<25000){
            dis=price*(1.0/100);
        }
        else if(price>=25000 && price<50000){
            dis=price*(25.0/100);
        }
        else if(price>=50000 && price<100000){
            dis=price*(50.0/100);
        }
        else if(price>=100000){
            dis=price*(90.0/100);           
        }
    }
     cout<<"------------Bill----------";
        cout<<"discoutn"<<price-dis;

}
*/




