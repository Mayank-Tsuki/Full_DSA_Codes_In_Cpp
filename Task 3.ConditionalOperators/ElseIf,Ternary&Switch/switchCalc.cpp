#include<iostream>
using namespace std;

//write a program to input week number(1-7) and print day pf week
//name using qwitch case

int main(){
    int a,b;
    char op;
    cout<<"Enter the numbers: ";
    cin>>a>>op>>b;

    switch(op) {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
            break;
    }
    return 0;
}