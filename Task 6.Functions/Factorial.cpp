// Print the factorial of n numbers by using functions.

#include<iostream>
using namespace std;

int fac(int n){
    int fact=1;
    for (int i=2 ; i<=n ; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter value :";
    cin>>n;
    for( int i=1 ; i<=n ; i++){
        cout<<i<<"! = "<<fac(i)<<endl;
    }
    return 0;
}