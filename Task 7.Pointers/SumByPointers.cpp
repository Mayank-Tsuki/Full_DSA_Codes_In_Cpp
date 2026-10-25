#include<iostream>
using namespace std;

//Sum by two numbers

int main(){
    int x,y;
    int* p = &x;
    int* q= &y;
    cout<<"Value of No. 1:";cin>>*p;
    cout<<"Value of No. 2:";cin>>*q;

    cout<<"sum(Pointers) = "<<*p + *q;
    cout<<endl;
    cout<<"sum(Numbers) = "<<x+y;
    return 0;
}