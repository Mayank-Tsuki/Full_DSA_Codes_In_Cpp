#include<iostream>
using namespace std;

//Print the sum of the even digits in a number.

int main(){
    int a,b,n;
    a=0;
    cout<<"Enter number:";cin>>n;

    while (n>0){
        b=n%10;
        if( b%2 == 0 ){
            a+=b;
        }
        n=n/10;
    }
    cout<<"sum="<<a;
    return 0;
    
}