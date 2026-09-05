// WAP to count digits of a given numeber

#include<iostream>
using namespace std;
int main(){
    int count=0,num; 
    cout<< "Enter the number: ";cin>> num;
    int newnum=num;

    while(num > 0){
        count+=1;
        num=num/10;
    }
    if (newnum==0){
        cout<<"The number of digit in 0 is 1";
    }
    else{
        cout<<"The number of digit in "<<newnum<<" are "<<count;
    }
    return 0;
    
}