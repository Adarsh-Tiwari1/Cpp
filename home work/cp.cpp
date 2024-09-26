/*
#include<iostream>
using namespace std;
int main(){
    double cp,dis;
    cout<<"enter cost price";
    cin>>cp;
    if(cp>0 && cp<2000){
        dis=cp*(5.0/100);
        cout<<"discount:"<<dis<<endl;
        cout<<"u h to pay" <<cp-dis;
    }
    else if(cp>=2001 && cp<=5000){
        dis=cp*(25.0/100);
        cout<<"discoutn:" <<dis<<endl;
        cout<<"u have to pay"<<cp-dis;
    }  
    else if (cp>=5001 && cp<=10000){
        dis=cp*(35.0/100);
        cout<<"discoutn:" <<dis<<endl;
        cout<<"u have to pay"<<cp-dis;
    }
    else{
        dis=cp*(50.0/100);
        cout<<"discoutn:"<<dis<<endl;
        cout<<"u have to pay"<<cp-dis;
    }
}

*/

#include<iostream>
using namespace std;
int main(){
    int cost,bonus,salary;
    cout<<"entet your lap cost";
    cin>>cost;
    if(cost>=0 && cost<=2000){
        bonus=salary*(5.0/100);
        cout<<"bonus"<<bonus<<endl;
        cout<<"total cast"<<cost-bonus<<endl;
    }
    else if(cost>=20001 && cost<=40000){
        bonus=salary*(10.0/100);
        cout<<"bonus"<<bonus<<endl;
        cout<<"total cast"<<cost-bonus<<endl;
    }
    else{
        bonus=salary*(50.0/100);
        cout<<"bonus"<<bonus<<endl;
        cout<<"total cast"<<cost-bonus<<endl;

    }



}
