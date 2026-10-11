// Print the pattern
//              * 
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *

//Print by joining 2 loops which will build concepts!

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";cin>>n;

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=n-i ; j++){   
            cout<<"   ";    //flip Tri + normal tri
        }
        for (int j=1 ; j<=i ; j++){
            cout<<" * ";
        }  
        cout<<endl;
    }
    return 0;
}