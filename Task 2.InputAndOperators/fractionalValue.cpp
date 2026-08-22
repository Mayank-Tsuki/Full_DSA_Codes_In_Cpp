#include<iostream>
using namespace std;
int main(){

    //take float input and print the fractional part of the real number.

    float q;
    cout<<"enter the float value : ";
    cin>>q;
    int convert=int(q);
    if (convert<0) convert-=1;

    cout<<"the fractional part of given number is: "<< q - convert;

    return 0;
}