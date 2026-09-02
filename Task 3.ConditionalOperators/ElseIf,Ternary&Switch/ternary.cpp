#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number:"; cin>> x;
    // if (x%2==0) cout<<"Even fnc";
    // else cout<<"odd fnc";

    //condition ? True : False  ->ternary op

    (x%2==0) ? cout<<"Even fnc" : cout<< "odd fnc";
    return 0;
}