#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter the number: ";cin >> num;
    if((num%5 == 0) || (num%3 == 0)){
        if(num%15==0){
            cout<<"The number is divisible by 3 and 5 both";
        }
        else{
            cout<<"The number is divisible is divisible by one of them 3 or 5";
        }
    }
    else{
        cout<<"Not even divisible then 3 or 5";
    }
    return 0;
}