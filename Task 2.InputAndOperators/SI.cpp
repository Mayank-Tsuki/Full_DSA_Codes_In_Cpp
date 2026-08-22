#include<iostream>
using namespace std;
int main(){
    float principle,rate,time,si;
    cout<<"Enter the value of principle : "; cin>> principle;
    cout<<"Enter the vlaue of rate : ";cin >> rate;
    cout<<"Enter the value of time : ";cin>> time;

    si=(principle*rate*time)/100;
    cout<<"The value of simple interest is : "<<si;
    return 0;

}