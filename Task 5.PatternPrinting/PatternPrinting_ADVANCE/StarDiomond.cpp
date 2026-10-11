// Pattern:
//           * 
//        *  *  *
//     *  *  *  *  *
//  *  *  *  *  *  *  *
//     *  *  *  *  *
//        *  *  *
//           *
          
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";cin>>n;

    for (int i=1; i<= n ; i++){
        for (int j= 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for (int k= 1 ; k <= 2*i - 1 ; k++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for (int i=1; i<= n-1 ; i++){
        for (int j= 1 ; j <=i ; j++){
            cout<<"   ";
        }
        for (int k= 1 ; k <=n-i ; k++){
            cout<<" * ";
        }
        for (int l= 1 ; l <= n-i-1 ; l++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}