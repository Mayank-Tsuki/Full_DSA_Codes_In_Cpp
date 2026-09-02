#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";cin >> num;
    if(num%5 == 0){
        if(num%3 == 0){
            cout<<"The number is divisible by both 5 and 3!";
        }
        else{
            cout<<"Not matching condition!";
        }
    }
    else{
        cout<<"Not matching condition!";
    }
}