#include<iostream>
using namespace std;

// Write a function to print squares of first n natural numbers, taking n as argument to the function.

int Square(int x){
    return x*x;

}


int main(){
    int n;
    cout<<"Value of n :";cin>>n;

    for (int i = 1 ; i <= n ; i++){
        cout<<"Square of "<<i<<" is "<<Square(i)<<endl;
    }
    return 0;
}
