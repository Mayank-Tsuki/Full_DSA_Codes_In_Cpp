#include<iostream>
using namespace std;

//Swapping by values

int main(){
    int num1 ,num2;

    cout<<"Enter numbers you want to add:";cin>>num1>>num2;

    cout<<num1<<" "<<num2<<endl;;

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<num1<<" "<<num2;
    return 0;
}

//Swapping by reference is in pointer folder!
