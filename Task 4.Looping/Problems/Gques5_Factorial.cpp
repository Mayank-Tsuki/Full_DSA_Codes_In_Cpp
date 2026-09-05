#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of n :";cin>>num;
    int fac =1;

    for (int i = num ; i >= 1 ; i--){
        fac = fac * i;
    } 

    cout<<"The factorial of "<<num << " is: "<<fac;
    return 0;
}