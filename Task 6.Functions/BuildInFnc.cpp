#include<iostream>
#include<cmath>
using namespace std;


// Some build in function are:
// ->max(x,y)
// ->min(x,y)
// ->pow(x,y)
// ->sqrt(x)


int main(){
    int num1,num2;
    cout<<"Enter numbers you want to add:";cin>>num1>>num2;
    cout<<"max="<<max(num1,num2)<<endl;
    cout<<"min="<<min(num1,num2)<<endl;
    cout<<"num1^num2="<<pow(num1,num2)<<endl;
    cout<<"rootnum1="<<sqrt(num1)<<endl;


    return 0;
}