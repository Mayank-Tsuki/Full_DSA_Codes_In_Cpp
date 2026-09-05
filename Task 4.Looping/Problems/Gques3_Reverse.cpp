// WAP to reverse digits of a given numeber

#include<iostream>
using namespace std;
int main(){
    int num,reverse=0;
    cout<< "Enter the number: ";cin>> num;

    int numcopy1,numcopy2=num;
 
    while (num > 0){
        numcopy1=num % 10;
        reverse = reverse*10 + numcopy1;
        num=num/10;
    }
    cout<<"The reverse of "<<numcopy2<<" is "<<reverse;
    return 0;
    
}