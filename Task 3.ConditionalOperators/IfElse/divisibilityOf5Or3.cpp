#include<iostream>
using namespace std;
int main(){
    //the given number is divisible then 5 and 3
    int num;
    cout<<"Enter the given number: ";cin >> num;

    if(num%3 == 0 && num%5 ==0){        // we can also write it as num%15==0
        cout<<"The number is divisible by 3 or 5!";         
    }
    else{
        cout<<"The number is not divisible by 3 or 5!!";
    }
    return 0;
}
