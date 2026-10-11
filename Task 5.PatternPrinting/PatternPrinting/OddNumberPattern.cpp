// Print the pattern:
// 1
// 1 3 
// 1 3 5 
// 1 3 5 7 

#include<iostream>
using namespace std;
int main(){

    int row;
    cout<<"Enter the falue of row :";cin>>row;

    for ( int i=1 ;i <= 2*row - 1;i += 2){
        for ( int j= 1 ; j<=i ; j+=2){
        cout<< j <<" ";
       }
       cout<< endl;
    }


    return 0;
}
