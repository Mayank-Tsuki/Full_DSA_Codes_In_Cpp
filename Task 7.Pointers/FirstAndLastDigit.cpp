#include<iostream>
using namespace std;

// VERY GOOD QUESTION TO UNDERSTAND POINTER!!
//Print the first and last digit of number.

void find(int n ,int *ptr1 ,int *ptr2){
    *ptr2 = n%10;       //lastDigit
    while(n>9){         //firstDigit
        n/=10;
    }
    *ptr1=n;    
}

int main(){
    int n;
    cout<<"Enter the number:";cin>>n;
    int firstDigit , lastDigit;

    int* ptr1=&firstDigit;
    int* ptr2=&lastDigit;
    find(n , ptr1 , ptr2);

    cout<<"First Digit:"<<*ptr1<<endl;
    cout<<"last Digit:"<<*ptr2<<endl;

    return 0;
}