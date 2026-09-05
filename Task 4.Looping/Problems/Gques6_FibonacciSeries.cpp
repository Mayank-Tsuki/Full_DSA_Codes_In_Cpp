#include<iostream>
using namespace std;

//Get the value of nth fibonacci series!

int main(){
    int num;
    cout<< "Enter the value of num :";cin>> num ;

    int a=1 ,b=1 ,fib ;
    for (int i = 3 ;i <=num ; i++){
        fib = a + b ;
        a = b;
        b = fib;
    }
    if (num == 1 || num == 2){
        fib = 1;
    }
    cout<<"The "<<num << " term in the fibonacci series is :"<<fib;
    return 0;
}