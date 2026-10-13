#include<iostream>
using namespace std;

int sum(int x ,int y){
    return x+y;
}


int main(){
    int num1,num2;
    cout<<"Enter numbers you want to add:";cin>>num1>>num2;

    int add=sum(num1,num2);

    cout<<"The sum is:"<<add;

    return 0;
}