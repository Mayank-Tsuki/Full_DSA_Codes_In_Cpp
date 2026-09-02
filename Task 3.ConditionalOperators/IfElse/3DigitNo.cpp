#include<iostream>
using namespace std;

//Take positive interger input and tell if it is a three digit number or not!
//use && or || operators

int main(){
    //Method 1 by ||
    int num;
    cout<<"Enter the number: ";cin>>num;
    int num1 = num/100;
    if(num1==1 || num1==2 || num1==3 || num1==4 || num1==5 || num1==6 || num1==7 || num1==8 || num1==9){
        cout<<num <<" is a Three Digit Number!!";
    }
    else{
        cout<<num <<" is not Three Digit Number!!";
    }

    //2nd method by && and easy

    int num2;
    cout<<"Enter the number: ";cin>>num2;
    if (num2>100 && num2<1000){
        cout<<num2 <<" is a Three Digit Number!";
    }
    else {
        cout<<num2<<" is not a Three Digit Number!";
    }
    return 0;
}