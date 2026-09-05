#include<iostream>
using namespace std;

//WAP to print odd numbers from 1 to 100 with continue statement

int main(){
    for (int i=1 ;i<=100 ; i++){
        if (i%2==0){
            continue;
        }
        cout<< i <<endl;
    }
    return 0;
}