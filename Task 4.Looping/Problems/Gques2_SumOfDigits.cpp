#include<iostream>
using namespace std;

//WAP to print sum of the digits of a given number.

int main(){
    int num,n,count=0;

    cout<<"Enter your numeber: ";cin>> num;

    int num1 = num;
    while( num > 0){
        n = num % 10;
        count = count + n;
        num = num / 10;
    }

    if (num1 == 0){
        cout<< " sum of digits of 0 is always 0 bruh!!";
    }
    else{
        cout<<"The sum of all the digits in "<< num1 <<" is "<< count;
    }

    return 0;
}
