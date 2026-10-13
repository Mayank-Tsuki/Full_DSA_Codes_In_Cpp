//Print the pascals Triangle
//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std;

int factorial(int x){
    int fac=1;
    for(int i=1 ; i <= x ; i++){
        fac=fac*i;
    }
    return fac;
}

int combination(int n,int r){
    int quot=factorial(n);
    int base1=factorial(n-r);
    int base2=factorial(r);

    return (quot/(base1*base2));
}

int main(){
    int n;
    cout<<"Enter the value of n:";cin>>n;

    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n-i-1 ; j++){
            cout<<" ";
        }
        for (int j=0 ; j<=i ; j++){
            cout<<combination(i,j);
            cout<<" ";
        }
        cout<<endl;

    }

    return 0;
}