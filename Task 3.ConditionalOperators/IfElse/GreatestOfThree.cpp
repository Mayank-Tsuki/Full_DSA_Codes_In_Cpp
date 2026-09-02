#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the number 1: ";cin>>num1;
    cout<<"Enter the number 2: ";cin>>num2;
    cout<<"Enter the number 3: ";cin>>num3;

    if(num1 > num2 && num1 > num3){
        cout<<"Numnber "<<num1 <<" is the greatest number!";
    }
    else if(num2 > num3){
        cout<<"number "<<num2<<" is the greatest number!";
    }
    else{
        cout<<"number "<<num3<<" is the greatest number";
    }
    return 0;
}