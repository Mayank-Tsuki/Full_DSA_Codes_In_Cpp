// Print the pattern:
//  *  *  *  *  *  *  *  *  *  *  *  
//  *  *  *  *  *     *  *  *  *  *  
//  *  *  *  *           *  *  *  *  
//  *  *  *                 *  *  *  
//  *  *                       *  *  
//  *                             * 
 
#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter the value of n:";cin>>m;
    n=m-1;

    for(int t=1 ; t<=2*n+1 ; t++){
                cout<<" * ";
        }
    cout<<endl;
    for (int i=1 ; i<=n ; i++){  
        for (int j=1 ; j<=n-i+1; j++){
            cout<< " * ";
        }   
        for (int k=1 ; k <= 2*i-1 ; k++){
            cout<<"   ";
        }
        for (int j=1 ; j<=n-i+1 ; j++){
            cout<< " * ";
        }
        cout<<endl;

    }
    return 0;
}