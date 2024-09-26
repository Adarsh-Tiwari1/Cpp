// wap to take two number from user and check who is max.

/*

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"uset two number";
    cin>>a>>b;
    if(a>b){
        cout<<a<< " is greater"<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater"<<endl;
    }
    else {
        cout<<"please enter valid number";
    }
}

*/

// wap to take input age of male or female and check he/she is eligible for marriage or not ask age aand gender.

/*
#include<iostream>
using namespace std;
int main(){
    int age;
    char gender;
    cout<<"enter your age"<<endl;
    cin>>age;
    cout<<"enter your gender male of female"<<endl;
    cin>>gender;
    if(gender=='f'){
        if(age>=18){
            cout<<"she is eligble"<<endl;
        }
        else{
            cout<<"she is not eligble"<<endl;
        }
    }
    else if(gender=='m'){
        if(age>=21){
            cout<<"he is eligle"<<endl;
        }
        else{
         cout<<"he is not eligble"<<endl;
        }
    }
    else{
        cout<<"please enter valid age";
    }
}

*/

//  wap to take values of length and breadth of a rectangle from user , and check if it is square or not .

/*
#include<iostream>
using namespace std;
int main(){
    int length,width;
    cout<<"enter the length of rectangle"<<endl;
    cin>>length;
    cout<<"enter the width of rectangle"<<endl;
    cin>>width;
    if(length==width){
        cout<<"it is a square";
    }
    else{
        cout<<"it is not square";
    }
}

*/

// wap to take value of length and breadth of a rectangle from user alse take value of side of a square from user, and check which area is greater.

/*

#include<iostream>
using namespace std;
int main(){
int length,width,side,area;
cout<<"enter length"<<endl;
cin>>length;
cout<<"entet width"<<endl;
cin>>width;
cout<<"enter side"<<endl;
cin>>side;
int rectanglearea=length*width;
int rectanglesquare=side*side;
if(rectanglearea>rectanglesquare){
    cout<<"rectanglearea is greater";
}
else{
    cout<<"rectangle area is square";
}
}

*/

// wap to find minimum between three number.

/*

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is greater";
    }
    else if(a<b && c<b){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
}

*/


//----------------------------------------------(LEVEL - 2)------------------------------------------------------

// wap to find minimum and second minimum between three numbers ...

/*

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
     cout<<"enter number";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is greater";
        if(a<b && c<b){
            cout<<"b is second greater";
        }
        else{
            cout<<"c is thire grater";
        }
    }    
        else if(a<b && c<b){
            cout<<"b is greater";
        
        if(a>c && a<b ){
            cout<<"b is second greater";
        }
        else{
            cout<<"c is thired greater";
        }
        }
        else if(c>a && c>b){
            cout<<"c is greater";
        }
}

*/

// wap to input a cost of a pen and calculate 70 pens cost with some discount. if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%...

/*

#include<iostream>
using namespace std;
int main(){
    int pen_cost,total_cost,discount_total,discount;
    cout<<"enter the cost of a pen";
    cin>>pen_cost;
     total_cost=70*pen_cost;
    if(total_cost>1000){
       int discount =0.20*total_cost;
    }
    else{
       int discount=0.10*total_cost;
    }
    discount_total=total_cost - discount;
    cout<<"total cost for 70 pen"<<total_cost;
    cout<<"discoutn"<<discount<<endl;
    cout<<"discoutn total cost"<<discount_total<<endl;

}

*/

// wap to read the value of an integer m and display the message "ok" when m is less then 0 , display the message "bye" when m is 0 , and display the message "done" when m is less then 0..

/*

#include<iostream>
using namespace std;
int main(){
    char m;
    cout<<"enter character m"<<endl;
    cin>>m;
    if(m<0){
        cout<<"ok";
    }
    else if(m==0){
        cout<<"done"<<endl;
    }
    else{
        cout<<"byy"<<endl;
    }
   
}

*/

// wap to a school has following rules for grading system.

/*

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your number";
    cin>>num;
    if(num>0 && num<25){
        cout<<"F\n";
    }
    else if(num>=25 && num<45){
        cout<<"E\n";
    }
     else if(num>=45 && num<50){
        cout<<"D\n";
    }
     else if(num>=50 && num<60){
        cout<<"C\n";
    }
     else if(num>=60 && num<80){
        cout<<"B\n";
    }
    else{
        cout<<"A";
    }
}

*/

// wap read temperature in centigrade and display a suitable message according to the temperature state below: ...

/*
#include<iostream>
using namespace std;
int main(){
    float temp;
    cout<<"enter the temp";
    cin>>temp;
    if(temp<0){
        cout<<"freezing wather";
    }
    else if(temp>=0 && temp<=10){
        cout<<"very cold wather";
    }
    else if(temp>10 && temp<=20){
        cout<<"cold wather";
    }
    else{
        cout<<"hot";
    }
}

*/













// wap to determine eligibility for admission to a professional course basid on the following criteria: ...


// ----------------------------------------------------192-------------------------------------------------------
/*

#include<iostream>
using namespace std;
int main(){
    int cp,dis;
    char ch;
    cout<<"enter 'l' for laptop and 'd' for disktop\n";
    cin>>ch;
    cout<<"enter cost price\n";
    cin>>cp;
    if(ch=='l'){
        if(cp>0 && cp<=25000){
            dis=dis=0;
        }
        else if(ch>=25001 && ch<=57000){
            dis=cp*(5.0/100);
            cout<<"dis"<<dis;
            cout<<"tatal y p"<<cp-dis;
        }
         else if(ch>=57001 && ch<100000){
            dis=cp*(5.0/100);
            cout<<"dis"<<dis;
            cout<<"tatal y p"<<cp-dis;
        }
         else if(ch>100000){
            dis=cp*(10.0/100);
            cout<<"dis"<<dis;
            cout<<"tatal y p"<<cp-dis;
        }
        cout<<"----Bill--------";
        cout<<"dis"<<dis-cp;

    }

}

*/

// (194)


//--------------------------===---------------------------{if-else}----------------------------------------------

// wap that accepts a number from user and calculate whether it is positive or negative or zero.

/*

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    if(num<0){
        cout<<"number is negative"<<endl;
    }
    else if(num>0){
        cout<<"number is positive";
    }
    else if(num==0){
        cout<<"number is equal";
    }
}

*/

// wap to calculate whether year is leap year or not .

/*
 #include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter your year";
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0){
        cout<<"this is leap year ";
    }
    else{
        cout<<"this is not leap year";
    }
}

*/

// a student will not be allowed to sit exam if his/her attendence is less than 75%, take following input from user number of classes attended and print , percentage of class attended is student is allowed to sit in exam or not.

/*

#include<iostream>
using namespace std;
int main(){
    int held,attended;
    float hold;
    char gender;
    cout<<"number of class held";
    cin>>held;
    cout<<"number of class attender";
    cin>>attended;
    hold=(attended/held)*100;
    if(hold<=75){
        cout<<"is student is allowed to sit in exam";
    }
    else{
        cout<<"is student is not allowed to sit in exam";
    }
}

*/

// wap to first minuma and second minuma.
  

 #include<iostream>
 using namespace std;
 int main(){
    int a,b,c;
    cout<<"enter three number";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<a<<"is minimum"<<endl;
        if(b<c){
            cout<<b<<" is second minimum";
        }
        else{
            cout<<"third minimum";
        }
    }
    else if(b<a && b<c){
        cout<<c<<"is minimum"<<endl;
        if(a<b){
            cout<<a<<" is second minimum"<<endl;
        }
        else{
            cout<<b<<"is second minimum<<endl";
        }
    }
    else{
        cout<<c<<"is minimum"<<endl;
        if(b<a){
            cout<<b<<" is second minimum"<<endl;
        }
        else{
            cout<<a<<" is third minimum"<<endl;
        }
    }
 }







