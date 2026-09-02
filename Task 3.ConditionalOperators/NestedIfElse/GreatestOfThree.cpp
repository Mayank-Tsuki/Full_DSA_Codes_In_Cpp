#include<iostream>
using namespace std;
int main (){
    int num1,num2,num3;
    cout<<"Enter the number 1: ";cin >> num1;
    cout<<"Enter the number 2: ";cin >> num2;
    cout<<"Enter the number 3: ";cin >> num3;

    if (num1 > num2){
        if (num2 > num3){
            cout<<num1 <<" is the greatest among them.";
        }
        else{
            cout<<num3 <<" is the greatest among them.";
        }
    }
    else{
        if(num2>num3){
            cout<<num2 <<" is the greatest among them.";
        }
        else{
            cout<<num3 <<" is the greatest among them.";
        }
    }
    return 0;
}